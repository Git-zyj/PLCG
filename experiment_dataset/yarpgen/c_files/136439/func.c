/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136439
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
    var_14 -= var_0;
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_1)), (var_7)));
    var_16 ^= ((/* implicit */signed char) ((unsigned int) var_0));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = arr_5 [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_0 [i_1] [i_0]))));
                                arr_15 [i_1] [i_0 - 1] [(unsigned short)9] [14U] [14U] [(unsigned short)9] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_4 [i_2])), (var_10)));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1])) < (((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 3]))))) - (((/* implicit */int) max((min((((/* implicit */unsigned short) var_0)), (arr_7 [i_0 - 2] [i_2] [i_2] [i_4]))), (((/* implicit */unsigned short) max(((short)3072), (arr_8 [i_3])))))))));
                                arr_16 [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)67))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned short) ((signed char) max((arr_17 [i_0 + 1]), (((/* implicit */unsigned int) arr_4 [i_2 - 3])))));
                                arr_20 [i_0] [i_0] [(short)5] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) ((unsigned short) arr_10 [i_2] [i_2] [i_2] [i_1] [i_2] [6U]))), ((~(((/* implicit */int) arr_7 [i_3] [i_3] [i_5 - 1] [i_3])))))));
                                var_21 -= max((((/* implicit */unsigned int) arr_12 [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2])), ((~(((unsigned int) arr_13 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [3LL] [i_5 - 1])))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 4; i_6 < 17; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_2 - 1])) & (((/* implicit */int) arr_1 [i_0 + 1])))))));
                                var_23 = ((/* implicit */unsigned char) 3271846385U);
                            }
                            arr_23 [i_1] [7U] [i_1] [14LL] [i_3] = ((unsigned short) ((((/* implicit */int) (unsigned short)16)) << (((((((/* implicit */int) arr_2 [i_1] [i_0])) + (11269))) - (9)))));
                            arr_24 [i_1] [i_1] [10ULL] [10ULL] [10ULL] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_0] [i_2 + 2] [i_0] [i_0 - 2] [i_1] [14ULL])), (((((/* implicit */_Bool) arr_22 [i_2] [(unsigned short)2] [i_2] [i_2] [i_2 - 3])) ? (arr_5 [i_2]) : (((/* implicit */int) (signed char)17)))))))));
                            var_24 = min((((/* implicit */unsigned int) max(((unsigned short)17323), (((/* implicit */unsigned short) (unsigned char)232))))), ((+(arr_17 [i_0 - 1]))));
                            var_25 = ((/* implicit */unsigned short) arr_17 [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
