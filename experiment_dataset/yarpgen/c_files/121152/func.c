/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121152
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((max(((+(-7415553273763345873LL))), (((/* implicit */long long int) (signed char)34)))) + (((/* implicit */long long int) 2596671514U)))))));
    var_15 = ((/* implicit */unsigned int) 1670677963);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] &= (+(((/* implicit */int) (_Bool)0)));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_6 [i_0 - 2] [i_1] [i_2 - 1])))) ? (max((arr_6 [i_0 - 2] [i_2] [i_2 - 4]), (arr_6 [i_0 - 1] [i_0 - 3] [i_2 - 3]))) : ((~(arr_6 [i_0 - 2] [i_1] [i_2 - 2])))));
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)240))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(8596620484121278766LL)))) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)7))))))));
                            var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 70368744177152ULL)) ? (1378350925) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22192)))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (-5254154569857856346LL)))), (((var_8) * (var_8)))));
                arr_11 [i_1] = ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0] [i_0] [(signed char)10] [i_0])) ? (3513629214360478722LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))));
                var_21 = ((/* implicit */signed char) arr_5 [i_1] [(signed char)10] [(signed char)10]);
            }
        } 
    } 
}
