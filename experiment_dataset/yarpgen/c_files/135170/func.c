/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135170
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
    var_14 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [(unsigned short)12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) -951984470)) : ((-(1947701318753985276LL)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_12 [i_0] [5ULL] [i_2] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_0])) >> (((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_0])) - (34361)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_0])) >> (((((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_0])) - (34361))) + (18274))))));
                        arr_13 [14ULL] [i_0] [(signed char)15] [i_3] [i_0] [i_1 + 4] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_0]);
                        var_15 = ((/* implicit */signed char) (_Bool)1);
                        var_16 = ((/* implicit */long long int) ((signed char) ((arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 + 3] [i_1 + 1] [i_0]))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1 + 3] [i_2] [(_Bool)1] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4]);
                        arr_18 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)104)) < (((/* implicit */int) (unsigned char)20)))) ? ((+(((/* implicit */int) (short)15329)))) : (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (short)-282)) : (((/* implicit */int) (signed char)28))))));
                        var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)9)))) != ((-(arr_5 [i_0] [(unsigned char)5] [i_0])))));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_22 [i_0] [i_1 + 3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) | (((/* implicit */int) arr_2 [i_0] [i_1 + 1])))) : (((/* implicit */int) arr_2 [i_0] [i_1 + 3]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            arr_25 [i_6] [i_0] [(short)12] [i_1] [i_1] [i_0] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5] [i_1] [i_2] [i_5] [i_0])) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_0]))));
                            var_18 &= (+(((/* implicit */int) arr_23 [i_1 - 1] [i_5])));
                            var_19 = ((/* implicit */unsigned int) var_0);
                            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1 + 3]))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            arr_30 [i_0] [i_1 + 3] [i_2] [i_5] [(unsigned char)10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4063232U))));
                            var_21 += ((/* implicit */unsigned char) (signed char)15);
                            var_22 = (+(((/* implicit */int) (unsigned char)5)));
                            arr_31 [i_0] [i_1 + 4] [17ULL] [i_5] [i_7] [i_7 + 2] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_1 + 4] [i_7 - 1] [i_7] [i_0]))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((-230015264) - (((/* implicit */int) (signed char)-22))));
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)49307), (((/* implicit */unsigned short) arr_11 [i_1 + 3] [(_Bool)1] [i_5]))))) + (((/* implicit */int) arr_21 [i_1 + 1] [i_1 + 4] [i_1 - 1] [(_Bool)1] [i_2]))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27925)) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_5] [4U] [i_0] [(unsigned char)21])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_5]))))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) + (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((0U) < (((/* implicit */unsigned int) 230015263))))))))));
                        arr_32 [i_5] [i_0] [i_2] [14U] [i_0] [(unsigned short)10] = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_2] [i_5] [i_1 + 4])) ? (((/* implicit */int) (unsigned char)153)) : (arr_5 [i_0] [i_2] [i_0])))))));
                    }
                }
            } 
        } 
    }
}
