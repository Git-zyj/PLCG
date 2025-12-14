/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117562
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
    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned long long int) 1782642642)) : (10023343075767067724ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) & (var_6))) : (((/* implicit */long long int) var_15)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) min((arr_10 [i_3] [i_1] [i_2] [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_2]))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_3 - 1] [i_3] [i_3 - 1])) ? (((long long int) arr_6 [i_2] [i_1])) : (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_7))))))));
                            var_19 = ((/* implicit */unsigned short) var_13);
                        }
                    } 
                } 
                arr_12 [i_0] [(signed char)8] = ((/* implicit */long long int) ((_Bool) arr_9 [i_0] [i_0] [i_0] [i_1]));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (max((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_9))))))))))));
}
