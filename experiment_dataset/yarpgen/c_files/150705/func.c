/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150705
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
    var_11 = ((/* implicit */signed char) ((unsigned char) var_9));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    var_12 ^= var_3;
                    var_13 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */long long int) -2059496622)) | (9223372036854775807LL))))) & ((~(((/* implicit */int) ((short) arr_4 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2 - 2] [(unsigned char)1] [i_0] = ((/* implicit */int) min((((unsigned int) (-(-2059496637)))), (((/* implicit */unsigned int) ((((-2059496617) - (var_5))) + (((/* implicit */int) (short)19602)))))));
                                arr_14 [i_4] [i_0] [i_2 - 3] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (short)190);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [(unsigned char)2] = ((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_0] [i_0]);
                }
                arr_16 [i_0] [(signed char)6] [i_1] &= ((/* implicit */signed char) 2059496637);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    arr_20 [i_1] [i_0] = ((/* implicit */short) -2059496637);
                    var_14 = 2059496637;
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 4; i_6 < 9; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                            {
                                arr_28 [i_8] [i_6] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) arr_21 [i_6])) : (1947552482)))) ? (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) arr_18 [i_1]))))) : ((-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))));
                                arr_29 [i_1] [i_6] [i_6] [i_1 - 1] [i_1] [i_6] [i_0] = ((/* implicit */int) arr_7 [i_1 + 2] [(unsigned char)7] [i_7] [i_8]);
                                arr_30 [i_8] [i_6] [i_6] [i_1 + 2] [i_6] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2059496638))));
                            }
                            for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                            {
                                var_15 *= ((int) ((max((arr_12 [i_1] [i_9] [i_7] [i_1] [i_1] [i_1] [0]), (((/* implicit */long long int) arr_3 [i_7] [(short)0])))) == (((/* implicit */long long int) var_3))));
                                arr_33 [i_7] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 67782311)) ? (((/* implicit */int) (short)190)) : (((/* implicit */int) (unsigned short)0))));
                            }
                            var_16 = ((/* implicit */short) 2059496638);
                            arr_34 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) -2059496618)) - (-3970822727218920769LL)));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) ((short) (short)-32760))) == (2147483620)))), (((((/* implicit */int) var_0)) + (((((/* implicit */int) (unsigned char)22)) * (67782329)))))));
                            arr_36 [i_7] [i_6] [i_6] [(_Bool)1] [i_7] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_7]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
