/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115060
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
    var_20 = (unsigned short)65519;
    var_21 += ((/* implicit */unsigned int) var_13);
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_15), (max((((/* implicit */unsigned short) var_1)), (var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1]))) / (2901499685U)))));
                    var_24 &= ((/* implicit */short) 595000765);
                    var_25 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_3 [i_1 + 1]))))));
                }
                var_26 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_2 [i_1 - 1])))), (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_2 [i_1 + 1])))))));
            }
        } 
    } 
}
