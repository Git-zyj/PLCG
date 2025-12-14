/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159945
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) (unsigned short)14104);
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                arr_7 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_13 [i_2 + 1] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) -686349192);
                            arr_14 [i_2] [i_1] [i_2] [i_2] = arr_11 [i_0] [i_2] [i_0] [i_2];
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) 876058956041066585LL);
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_17 [i_0 - 1] [i_1] [i_5] = ((/* implicit */unsigned char) arr_6 [2] [i_1] [i_0] [2]);
                arr_18 [i_5 + 1] = arr_9 [i_0] [i_0] [(unsigned char)4] [i_1] [i_1];
                var_14 = (_Bool)1;
                arr_19 [i_1] [i_1] [i_5] [i_0 - 1] = ((/* implicit */short) -1769628015439795930LL);
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    var_15 -= ((/* implicit */unsigned int) (_Bool)0);
                    var_16 = ((/* implicit */unsigned int) arr_11 [i_0] [(short)12] [i_5] [i_5]);
                }
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_17 = arr_20 [i_1] [i_0];
                arr_24 [i_0] = ((/* implicit */short) (signed char)53);
            }
            for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) arr_25 [i_0] [2ULL]);
                arr_27 [i_0] [i_0] [i_8 + 3] [i_8 + 3] = ((/* implicit */signed char) arr_15 [i_8 - 1]);
            }
            var_19 = ((/* implicit */signed char) arr_6 [2U] [i_0] [0U] [i_1]);
            var_20 = ((/* implicit */signed char) 0ULL);
        }
    }
    var_21 = ((/* implicit */signed char) -686349192);
}
