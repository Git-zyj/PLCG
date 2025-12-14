/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121154
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_3] [i_3] [i_2] [i_1] [(short)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 2] [i_0]), (arr_5 [i_0] [i_1 - 1] [i_0])))) ? (((/* implicit */int) min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1 - 2] [i_0]))))) : (((/* implicit */int) min(((short)-12916), (((/* implicit */short) arr_5 [i_0] [i_1 + 1] [i_0])))))));
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-12916)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_1] [i_3]))) : (arr_2 [i_0] [i_3] [i_4])));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_14 [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_5] [i_5])), ((~(((/* implicit */int) (short)-12918))))));
                                arr_18 [i_0] [i_0] = ((/* implicit */signed char) 133143986176LL);
                                var_21 = ((/* implicit */short) min((((/* implicit */int) (short)12893)), (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1])) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                                var_22 -= ((/* implicit */unsigned char) (short)-12912);
                            }
                            for (short i_6 = 2; i_6 < 16; i_6 += 2) 
                            {
                                var_23 -= ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_2] [16U] [i_6 + 2])), ((~(((/* implicit */int) (short)12915)))))));
                                var_24 *= ((/* implicit */unsigned long long int) (short)-12918);
                                var_25 = ((/* implicit */unsigned long long int) ((signed char) arr_2 [i_6] [i_0] [i_0]));
                            }
                            var_26 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (min((((/* implicit */unsigned int) (short)12942)), (min((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1])), (1740764018U)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) arr_8 [i_0] [(unsigned short)11] [i_0]))));
                var_28 ^= ((/* implicit */unsigned long long int) arr_14 [16LL] [16LL] [16LL] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 17; i_10 += 3) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_37 [i_8] [i_8] = ((/* implicit */unsigned int) var_0);
                                arr_38 [i_7] [i_8] [i_9] [16U] [i_11] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_7])) && (((/* implicit */_Bool) ((unsigned short) var_13)))));
                                var_29 ^= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_35 [i_7] [i_8] [i_8] [16LL] [i_9] [i_10] [i_11]))))))) % (((/* implicit */int) arr_32 [(unsigned short)6]))));
                                var_30 ^= ((/* implicit */long long int) (short)-12921);
                                var_31 ^= var_6;
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned short) min((3513427521U), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-3495)))))))));
                    arr_39 [i_8] [i_8] [i_9] = ((/* implicit */_Bool) min((arr_35 [i_8 + 1] [i_8 + 2] [i_8 + 3] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_9]), (((/* implicit */short) ((((/* implicit */int) arr_35 [i_8 + 1] [3ULL] [i_8 + 3] [i_8 + 3] [i_8] [i_8 + 2] [i_8 + 2])) == (((/* implicit */int) (short)3513)))))));
                }
            } 
        } 
    } 
}
