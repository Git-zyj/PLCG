/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149287
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
    var_18 ^= ((/* implicit */int) min((((((1702751071U) << (((var_3) + (739018749))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)))));
    var_19 = ((/* implicit */unsigned long long int) 2021411562);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (~(arr_5 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */long long int) ((unsigned int) (-(-2021411563))))) : (max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) var_10)) : (var_12))), (((/* implicit */long long int) ((var_3) | (-2021411572))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_9 [i_0] [i_0] [i_2] [i_2] [i_3])))))) ? (((/* implicit */int) max((arr_10 [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 1]), (arr_10 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1] [i_3 + 1])))) : (((((/* implicit */_Bool) (short)-1024)) ? (arr_7 [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 2]) : (arr_7 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 2]))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (3920487807286939909ULL))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(var_0))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (+(((long long int) ((unsigned int) -2021411556)))));
    var_24 = ((/* implicit */unsigned long long int) (~((-(var_15)))));
}
