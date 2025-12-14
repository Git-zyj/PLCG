/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10939
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
    var_16 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) / (arr_3 [i_0] [i_1 - 3])))) ? (min((arr_3 [i_0] [i_1 - 1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1])))) : (arr_3 [i_0] [i_1 - 3])));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    arr_9 [i_0] = ((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1] [i_1 - 2]);
                }
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (-(-688155821)));
                            /* LoopSeq 1 */
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                arr_19 [i_5] [i_3] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 3] [i_1 + 1])) + (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_4] [i_0] [i_4])) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) (signed char)120)))) : (((688155815) / (688155845))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) min(((signed char)-89), ((signed char)31)))))))));
                                arr_20 [i_3] = var_11;
                            }
                            arr_21 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (short)-16824)))))) << (((9223372036854775807LL) - (9223372036854775786LL)))));
                        }
                    } 
                } 
                arr_22 [i_1 - 3] [(signed char)7] [i_0] = ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_1 - 1]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_1 - 2] [i_1 + 1] [i_1 + 1]))))) : (arr_1 [i_0])));
            }
        } 
    } 
}
