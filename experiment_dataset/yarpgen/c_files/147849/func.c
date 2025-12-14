/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147849
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (((/* implicit */int) var_9)))))));
    var_19 -= ((/* implicit */signed char) 10243054264148952870ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [18ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_21 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_16)) | (((/* implicit */int) (_Bool)1)))));
                                arr_16 [i_0] [i_1] [i_2 + 3] [i_3] [i_3] [(unsigned char)20] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2] [i_3])) << (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_13 [i_0] [i_1] [i_2 - 2])));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(arr_13 [i_2 + 1] [i_2 - 3] [i_2 - 2]))))));
                }
                for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    var_24 ^= ((/* implicit */short) (((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)2] [i_0] [(short)17])))) >= (((/* implicit */int) min((var_14), (((/* implicit */short) arr_11 [i_0] [i_0] [i_5 - 1] [i_5] [i_5 - 1] [i_0] [i_1])))))));
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (short)164)))) & (((/* implicit */int) arr_3 [i_0])))) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5] [i_5 + 1])) ? (((/* implicit */int) arr_6 [15ULL] [i_1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) (short)-2)))) - (70)))));
                }
                var_25 += (((_Bool)1) ? (min((((/* implicit */unsigned long long int) max(((unsigned short)830), (((/* implicit */unsigned short) (_Bool)1))))), ((+(3737442308966308891ULL))))) : (((/* implicit */unsigned long long int) ((arr_5 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0]))))));
                var_26 = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [21ULL])), (((((((/* implicit */int) arr_7 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [(short)3])))) ? (((((/* implicit */int) arr_2 [i_1] [i_0])) + (((/* implicit */int) arr_13 [(signed char)2] [(signed char)4] [i_1])))) : (((/* implicit */int) arr_13 [i_0] [17ULL] [i_0]))))));
                var_27 += ((/* implicit */_Bool) 0ULL);
            }
        } 
    } 
}
