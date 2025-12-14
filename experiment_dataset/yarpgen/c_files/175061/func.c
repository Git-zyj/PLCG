/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175061
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
    var_17 = ((/* implicit */short) ((_Bool) var_12));
    var_18 -= ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0]));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [(signed char)8] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_8 [i_0] [i_1] [i_2]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) ((int) arr_7 [i_0] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1] [i_4] = ((signed char) ((unsigned int) ((short) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0])));
                            var_21 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_3]);
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_11 [i_0] [7ULL] [i_3] [i_3]))));
                            var_23 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) arr_19 [(signed char)11] [(signed char)0] [(signed char)11] [i_3] [i_5]);
                            var_25 -= ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) arr_1 [i_1])));
                            var_26 ^= ((/* implicit */signed char) ((unsigned int) ((short) arr_6 [i_0] [i_1] [i_0] [i_1])));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_16 [i_0] [i_3]))));
                        }
                        arr_21 [i_3] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_10 [i_0] [(signed char)11] [i_0] [i_0]));
                    }
                    arr_22 [i_0] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */signed char) arr_14 [i_0] [i_0] [(unsigned char)2] [i_1] [i_0]);
                }
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_18 [5ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]));
            }
        } 
    } 
}
