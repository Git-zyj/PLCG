/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140362
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] = var_11;
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_12 = arr_1 [i_0] [i_1];
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_8))));
                        var_14 = ((/* implicit */unsigned int) arr_3 [i_2] [i_1] [i_2]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            var_15 -= ((/* implicit */unsigned char) max((arr_5 [i_0]), (((/* implicit */unsigned short) arr_3 [i_2] [15ULL] [i_4]))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_10))));
                            arr_13 [i_4] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                            arr_14 [i_0] [(signed char)10] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) var_5);
                            var_17 = ((/* implicit */short) arr_8 [(unsigned char)6]);
                        }
                    }
                    arr_15 [i_0] [16ULL] [i_2] [i_0] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned short) var_4))));
                }
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_1] [i_0]))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_7))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 = ((/* implicit */signed char) var_2);
}
