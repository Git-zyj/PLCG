/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151048
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = var_5;
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) < (min((((/* implicit */long long int) (signed char)109)), (arr_7 [i_1] [i_0])))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3146))) | (16943988061317342295ULL)));
                        arr_12 [i_0] [i_1] |= ((/* implicit */unsigned long long int) (short)-10390);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)80);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_3 + 1] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)40)) | (((/* implicit */int) (short)-1980))))))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] = var_2;
                        }
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_5 + 2] [i_5 + 2] [i_0] [i_2] [i_2] [i_5 + 2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1147))))) : (arr_2 [i_2] [i_2])));
                        }
                    }
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned long long int) var_4);
}
