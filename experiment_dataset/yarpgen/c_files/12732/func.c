/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12732
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((-(((/* implicit */int) (short)24765)))) : (((/* implicit */int) arr_1 [i_0 - 3]))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24766)) ? (((/* implicit */int) (short)24772)) : (((/* implicit */int) (short)24765)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) != (-505008345)));
                        arr_10 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 3])) * (((/* implicit */int) (_Bool)0))));
                        arr_11 [i_0] [(unsigned char)12] [i_2] [(unsigned char)0] [i_0] = (-(((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])) ? (var_0) : (((/* implicit */int) (signed char)127)))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)24737))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 3])) <= (var_2)))) >= (((/* implicit */int) ((unsigned char) arr_8 [i_2])))));
                        }
                        var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 211359026U)) ? (9470454500021710639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 385328637)) || (((/* implicit */_Bool) var_7))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)50081))));
                        var_17 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))) >= (var_1)));
                        arr_16 [i_2] [i_2] [i_2] [(unsigned char)7] = ((/* implicit */int) arr_1 [11ULL]);
                    }
                    var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ? (((/* implicit */unsigned int) (+(385328644)))) : (var_7)))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) var_9);
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), ((+(min((((((/* implicit */_Bool) var_2)) ? (2486486371250716136ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_0]))))), ((-(var_6)))))))));
                        arr_22 [i_6] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1 - 3])))));
                    }
                    var_21 = ((((/* implicit */int) ((unsigned char) 251328807))) > ((((_Bool)1) ? (((/* implicit */int) (short)-24723)) : (((/* implicit */int) (unsigned char)225)))));
                }
                for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_1 - 2] [i_1 - 2] [i_8]))))) ? (((((/* implicit */_Bool) arr_6 [14ULL] [i_1 - 4] [i_8] [(short)16])) ? (((/* implicit */int) (short)-25390)) : (((/* implicit */int) arr_6 [(short)11] [i_1] [i_1] [i_1])))) : ((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 4] [i_8]))))));
                    arr_26 [i_8] [i_0] [1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_7 [i_0] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) : (9470454500021710625ULL))))), (((/* implicit */unsigned long long int) ((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)31)) & (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))))));
}
