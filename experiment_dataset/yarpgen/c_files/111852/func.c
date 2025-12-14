/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111852
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
    var_17 |= ((/* implicit */short) 15644847407965500264ULL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2] [i_0])) ? (((/* implicit */int) var_12)) : (var_14))) : (((/* implicit */int) ((_Bool) (signed char)-114)))));
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((2801896665744051350ULL) | (2801896665744051352ULL))))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (unsigned char)255))))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [5])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)8078)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_20 = ((short) (unsigned short)65024);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2097151U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_0])))))) << (((((/* implicit */int) var_3)) - (26561)))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) arr_12 [i_3] [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_3]))) : (((/* implicit */int) (unsigned char)0)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (short i_6 = 4; i_6 < 12; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_4] [(_Bool)1] [i_0] [(signed char)9] = ((/* implicit */short) ((arr_13 [i_7 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))));
                            arr_24 [i_7 - 2] [i_7] [i_6] [i_6] [i_4] [(short)8] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_7 + 1] [i_7 + 1] [i_4] [i_7 + 1])) + (arr_4 [i_6 + 2] [i_7 - 2] [i_7 - 2])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_8 = 1; i_8 < 12; i_8 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) var_4);
                    var_25 = ((/* implicit */unsigned char) 3121984611635313710ULL);
                }
            }
            for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 2) 
            {
                arr_31 [i_4] [i_4] [i_4] [(short)6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) arr_15 [i_9]))), (arr_16 [i_9 + 2] [i_9 + 2] [i_9 - 3] [i_9 - 2]))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(max((max((arr_13 [i_0]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_4] [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((short) 80465553))))))))));
                var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_30 [i_9 + 1] [i_9 - 2]))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) ^ (arr_18 [i_9] [i_9] [i_9 - 2] [i_9])))));
            }
            arr_32 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0]), (((/* implicit */int) (short)-8079))))), (min((((/* implicit */unsigned long long int) (unsigned short)35252)), (((arr_20 [i_0] [(short)7] [(signed char)10] [i_4]) - (((/* implicit */unsigned long long int) 946144973U))))))));
            var_28 = ((/* implicit */short) ((_Bool) min((arr_30 [i_0] [i_0]), (((/* implicit */short) var_16)))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)61636)) << (((((/* implicit */int) (short)12288)) - (12286)))))) >= (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (16837088632560773947ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) ((16837088632560773947ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54)))))))))));
            var_30 *= ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0]);
        }
        var_31 *= ((/* implicit */signed char) ((unsigned long long int) (unsigned char)0));
        arr_33 [i_0] = ((/* implicit */unsigned int) (signed char)71);
    }
}
