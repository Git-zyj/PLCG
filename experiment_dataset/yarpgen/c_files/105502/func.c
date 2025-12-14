/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105502
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
    var_10 = ((/* implicit */int) max((((unsigned long long int) min((var_9), (var_6)))), (((/* implicit */unsigned long long int) var_3))));
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))), (max((min((18437736874454810624ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)42)), (var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                    var_13 &= ((((/* implicit */int) arr_8 [i_0 + 1] [i_0] [0U] [i_2 + 1])) != (((/* implicit */int) (_Bool)1)));
                }
                for (int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    var_14 = ((/* implicit */signed char) max(((+(max((((/* implicit */unsigned long long int) (signed char)-93)), (1415350812777146095ULL))))), (min((min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))), (var_0)))));
                    arr_11 [i_0 + 1] = ((/* implicit */_Bool) (~((~(arr_5 [i_0 - 1] [i_0 + 1])))));
                    var_15 = ((/* implicit */unsigned int) (-(max(((-(((/* implicit */int) var_2)))), (max((var_9), (((/* implicit */int) (_Bool)1))))))));
                }
                arr_12 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((int) (-(max((((/* implicit */unsigned long long int) var_4)), (17794693292705334644ULL))))));
            }
        } 
    } 
}
