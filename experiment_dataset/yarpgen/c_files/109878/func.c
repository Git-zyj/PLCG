/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109878
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 += ((/* implicit */signed char) arr_1 [7] [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1 + 1] [i_2 - 1])));
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_2 - 1] [i_1 + 1]))));
                arr_7 [i_1] = ((/* implicit */unsigned int) arr_4 [i_2] [i_1 + 1]);
            }
            var_18 = var_5;
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */long long int) var_12);
            var_19 = ((/* implicit */int) min((((/* implicit */long long int) max(((unsigned char)87), (((/* implicit */unsigned char) var_6))))), (((long long int) arr_0 [i_3 + 1]))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_20 = (signed char)31;
                            arr_21 [(unsigned short)0] [i_3 + 1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) arr_2 [i_3 + 1] [i_5] [11]);
                        }
                    } 
                } 
            } 
            arr_22 [i_0] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_3])), (arr_5 [i_0] [(unsigned char)8])))) ? (((arr_1 [i_0] [i_3 + 1]) * (((/* implicit */unsigned int) 1)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)177)))))))));
            var_21 = ((/* implicit */long long int) min((((/* implicit */int) var_8)), (-14)));
        }
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) ((int) (_Bool)1))), (min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)15))))))));
        arr_23 [i_0] = var_13;
    }
    var_23 = ((/* implicit */unsigned int) var_12);
}
