/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119281
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (short)-1)) | (0))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 + 3])))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        arr_9 [i_3 + 1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) -1)), ((-9223372036854775807LL - 1LL))));
                        var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29)) ^ (((/* implicit */int) (signed char)-32))))) ? ((+(((/* implicit */int) (unsigned short)8191)))) : (((/* implicit */int) (unsigned short)3072)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3 - 3] [i_1 + 2] [i_0 + 2])) ? (arr_6 [i_3 - 2] [i_1 + 2] [i_0 - 1]) : (((/* implicit */unsigned int) -4))));
                            var_22 = ((/* implicit */_Bool) 2251250057871360ULL);
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) (signed char)-119)), (18444492823651680227ULL)))));
                            arr_15 [i_3 - 1] [i_3 - 1] [i_0] [i_1 + 1] [(_Bool)1] = ((arr_10 [i_5]) ? ((-(8388607))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_0 - 1])))));
                            arr_16 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0 + 3] = ((/* implicit */long long int) ((int) (+(18444492823651680227ULL))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) var_6));
                        var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((int) 1073217536))))));
                        arr_21 [i_0] [i_1] [i_2] [i_6 - 1] [i_0] = arr_19 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 3];
                    }
                }
                /* LoopNest 3 */
                for (signed char i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) -23);
                                arr_29 [i_0] [i_0] = ((/* implicit */_Bool) -9223372036854775798LL);
                                var_26 ^= arr_22 [i_0] [i_1 + 3] [i_7 + 1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_18);
}
