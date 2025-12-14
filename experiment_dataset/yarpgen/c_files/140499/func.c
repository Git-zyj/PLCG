/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140499
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [(_Bool)1]);
        var_10 = ((/* implicit */short) var_5);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_11 += ((/* implicit */_Bool) (unsigned char)89);
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned char) 2295835499996638312ULL)))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_11 [i_2] = ((/* implicit */int) min((min((((((/* implicit */_Bool) 2915627064U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (1780891307U))), (((unsigned int) var_9)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)3] [i_3] [4U]))))) ? (((/* implicit */unsigned int) max((1998560758), (((/* implicit */int) arr_0 [i_0]))))) : (min((((/* implicit */unsigned int) var_9)), (2514076000U)))))));
                    var_13 ^= ((/* implicit */short) -8444646209919983544LL);
                    arr_12 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_6);
                    var_14 = ((/* implicit */_Bool) var_3);
                }
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_5] [i_1] [i_4] [i_5] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1590)) || (((/* implicit */_Bool) arr_4 [i_1] [i_5]))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            var_16 -= ((arr_19 [i_0] [i_1] [i_0] [i_0] [8LL]) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_0])) - (19986))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) var_3);
                var_18 = ((/* implicit */int) (~(((long long int) var_9))));
            }
            for (int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                var_19 = ((/* implicit */short) (unsigned char)71);
                arr_26 [4ULL] = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned int) ((short) 1786099182U))), (((((/* implicit */_Bool) 8444646209919983546LL)) ? (1780891307U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [8ULL] [i_7] [i_7] [i_0] [i_7]))))))));
            }
        }
        arr_27 [(short)9] = ((/* implicit */unsigned int) (short)-11289);
    }
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (min((var_5), (((/* implicit */unsigned int) min((1741017174), (((/* implicit */int) (unsigned char)177)))))))));
}
