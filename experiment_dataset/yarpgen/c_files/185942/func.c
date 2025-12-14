/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185942
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
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_1 [i_2]))));
                            var_22 = (~(max((arr_6 [i_0] [i_2 + 3] [i_0]), (((/* implicit */unsigned long long int) var_6)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_10 [i_0] [i_1] [i_0] [i_0])))) > (((arr_3 [11ULL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [11LL] [i_1] [i_1] [11LL])), (var_4)))) ? ((~(((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))))))));
                var_24 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
                arr_11 [i_0] [3] [i_0] = ((/* implicit */unsigned long long int) ((short) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 788360904)) : (arr_3 [i_1]))), (((((/* implicit */unsigned long long int) var_12)) - (var_4))))));
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_17);
}
