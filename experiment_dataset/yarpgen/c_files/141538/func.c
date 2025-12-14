/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141538
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_12), (((/* implicit */long long int) (unsigned char)245))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned long long int) var_5)))) - (8916767856826903526ULL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_2] &= ((/* implicit */short) max((((arr_5 [i_0] [i_0] [i_0]) | (arr_9 [i_2] [i_2 + 2] [i_1 + 3] [i_2]))), (((/* implicit */unsigned long long int) (signed char)-34))));
                            arr_12 [(short)9] [i_3] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_10 [i_1] [i_1 + 2] [i_3])))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 3] [i_3])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1 + 3] [i_3]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) max((max((var_0), (((/* implicit */long long int) arr_18 [i_6] [i_6 - 1] [i_5 + 2] [i_1 + 2] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (short)2943)) : (-1606660912))))));
                                arr_20 [i_4] [i_6] [i_6] [i_5 + 1] [i_6 - 1] [i_4] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]);
                                arr_21 [i_0] [i_0] [0U] [i_0] [i_0] [i_0] [0U] |= ((/* implicit */long long int) (+(((/* implicit */int) (short)9828))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_7 = 3; i_7 < 7; i_7 += 3) 
                {
                    var_20 = ((/* implicit */short) max(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22461))) % (16127518836160877964ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) 2147483647)), (4236299851U)))))));
                    arr_24 [i_0] [i_0] [i_7 + 2] &= ((/* implicit */short) ((((((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [(short)4] [(short)4] [(signed char)0])) % (arr_14 [(unsigned char)6] [(unsigned char)6]))) == (((/* implicit */unsigned long long int) var_0)))) ? (((/* implicit */int) arr_1 [i_0])) : ((~((-(((/* implicit */int) (short)-26783))))))));
                }
                for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    arr_29 [i_1 - 1] = ((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_8] [i_8]);
                    arr_30 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned char) 4236299851U);
                    arr_31 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_13))) ? ((~(11ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [(short)4])))))));
                }
            }
        } 
    } 
}
