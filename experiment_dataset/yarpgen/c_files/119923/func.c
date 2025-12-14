/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119923
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) arr_4 [i_0]);
                var_17 = ((/* implicit */unsigned int) max((var_17), (min((2508075503U), (((2508075503U) / (var_14)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)15082)) != (arr_5 [i_0 + 1] [i_1] [i_2 - 1]))))))) ? (var_2) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12921))))) ? (((/* implicit */int) (unsigned char)43)) : (((int) var_14))))));
                    arr_10 [(unsigned short)12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((_Bool) min((var_3), (var_3))))));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_2 + 1] [i_2] [i_2]) | (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2 + 1] [i_2]))))) || (((/* implicit */_Bool) ((unsigned long long int) var_12)))));
                }
                arr_11 [i_0 - 1] [i_0] = ((/* implicit */int) var_15);
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) (-(var_8)));
}
