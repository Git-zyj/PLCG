/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165160
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
    var_13 *= (-(((((/* implicit */_Bool) 2205721207U)) ? (1751044828U) : (2790505468U))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 33423360U))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) ^ (arr_3 [i_0] [i_0 - 1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3 - 3] [18U] [i_0] [i_0] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1 + 1])))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_5))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 - 2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_2 [i_2]))))))))));
                            arr_10 [i_0] [i_0] [(signed char)4] = ((/* implicit */_Bool) min((((arr_5 [i_0 + 1] [i_0 - 1] [(_Bool)1]) | (arr_5 [i_3] [i_0 - 1] [i_0]))), (((/* implicit */long long int) var_1))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 2147483638))));
                arr_11 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((~((+(-15)))))));
                arr_12 [8U] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (((((/* implicit */_Bool) min((var_6), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) 4261543908U)) : (((unsigned long long int) arr_0 [i_1 - 1]))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) var_0);
    var_18 = ((/* implicit */signed char) var_6);
}
