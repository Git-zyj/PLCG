/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175801
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */long long int) arr_4 [i_1])) + (873190533601321603LL))))), (((((((/* implicit */unsigned long long int) arr_4 [i_0])) >= (var_4))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) var_1))))))))));
                var_11 = ((/* implicit */unsigned int) ((signed char) ((4503599627370495LL) <= (((/* implicit */long long int) 742962389U)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] [(short)12] = ((/* implicit */short) ((arr_7 [i_2 - 1] [i_2] [i_2] [i_2 + 2]) * (var_7)));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (int i_4 = 4; i_4 < 22; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_4] [i_4] = min((arr_12 [i_3] [i_4]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (742962382U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767)))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_12 = ((((((/* implicit */_Bool) ((unsigned char) arr_23 [i_3] [8LL] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-29938450547332838LL) : (8405865518764930439LL))))) == (((/* implicit */long long int) (+(((/* implicit */int) var_6))))));
                                arr_25 [i_7] [(signed char)5] [i_4] [i_4] [(short)14] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_15 [i_3] [4LL] [i_5])) : (((/* implicit */int) arr_16 [22ULL] [i_4] [i_5]))))) * ((~(-1LL)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned char)16] [(unsigned char)16] [i_5]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_17 [i_3] [i_4 - 3] [i_4 - 3]))))) ? (((-8405865518764930418LL) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_3] [i_5] [i_5]), (((/* implicit */unsigned short) var_3))))))))));
                }
                arr_26 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((((long long int) var_4)) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_3]))))) : ((+(((long long int) 13489773298779031563ULL))))));
                arr_27 [i_3] = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (short)-16709)))) ? (226598902368536751ULL) : (var_7))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_15 [i_3] [i_4 + 1] [i_3])) > (((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
