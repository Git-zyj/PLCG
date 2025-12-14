/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144938
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [0LL] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) min((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_2))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_9))));
                        arr_12 [i_0] [i_0] [3ULL] [i_1] = ((/* implicit */unsigned char) var_12);
                    }
                    arr_13 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_0]);
                }
            } 
        } 
        arr_14 [i_0] = ((long long int) (+(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_18 [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : (arr_4 [i_0] [i_4])));
            arr_19 [0U] [i_4] = ((/* implicit */long long int) ((short) arr_4 [i_4] [i_4]));
            arr_20 [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [(unsigned short)6] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((int) 4294967295U))));
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_23 [i_5] = ((/* implicit */_Bool) var_13);
            arr_24 [i_0] = ((/* implicit */int) (short)32759);
            arr_25 [3U] [3U] &= ((/* implicit */signed char) 18446744073709551615ULL);
        }
    }
    var_18 = ((/* implicit */int) var_16);
}
