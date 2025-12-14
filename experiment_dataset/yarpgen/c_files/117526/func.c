/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117526
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
    var_14 = var_4;
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */_Bool) max((((max((var_6), (((/* implicit */int) var_9)))) - (((/* implicit */int) var_9)))), (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((var_5) != (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_11)))))));
                        arr_12 [i_0] [i_0] [i_2] [(short)2] = min((((/* implicit */unsigned int) max((631713961), (-1482009616)))), ((+(var_1))));
                        var_18 |= ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            arr_13 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((signed char) (signed char)-12));
        }
        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_7 [i_0] [i_0] [2])));
    }
}
