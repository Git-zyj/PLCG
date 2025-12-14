/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123408
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
    var_16 = var_4;
    var_17 = ((((/* implicit */int) ((5072640317722798077ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) var_14)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) var_2);
                    var_18 = ((/* implicit */_Bool) 13374103755986753538ULL);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        var_19 = ((_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_1] [i_3])) & (arr_4 [i_0] [i_1])));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3]);
                            var_21 |= ((/* implicit */_Bool) arr_4 [i_2] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3 - 1] [i_0]);
                            arr_16 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3] &= ((/* implicit */_Bool) ((((int) var_2)) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)203)) || (((/* implicit */_Bool) 13374103755986753539ULL)))))));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1]);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_11 [i_0] [i_1 + 2] [i_2] [i_3 + 1] [i_0]))));
                            var_24 = ((/* implicit */unsigned int) 11878401295313507295ULL);
                        }
                        for (long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                        {
                            var_25 &= ((/* implicit */unsigned long long int) (+(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_26 = ((/* implicit */int) min((var_26), (arr_22 [i_1 + 4] [i_2] [20ULL] [i_3 + 1] [i_0])));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_28 = arr_0 [i_1 + 4] [i_1 + 3];
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_1 + 3] [i_1 - 1] [i_1] [i_1] [4] [i_9])) % (((/* implicit */int) arr_26 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 3]))));
                            var_29 = ((/* implicit */unsigned char) ((302836694) * (((/* implicit */int) (!(arr_20 [i_8]))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) (-(arr_30 [i_0] [i_1] [i_0] [i_10] [i_10])));
                            arr_33 [i_0] [i_10] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        }
                        arr_34 [i_8] &= ((/* implicit */_Bool) arr_30 [i_1 + 1] [i_1] [i_2] [i_8] [i_1]);
                        var_31 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) arr_3 [i_0] [i_11]);
                            arr_38 [(unsigned char)18] [i_1 - 1] [i_1] [i_1 + 3] &= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [i_1 - 2])) << (((((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1])) - (39188)))));
                        }
                    }
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_32 |= ((/* implicit */unsigned char) arr_7 [i_0] [i_1 + 1] [i_12]);
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) 13374103755986753538ULL);
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_13] [i_13] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))) & (((/* implicit */int) max((arr_6 [i_1] [i_1] [i_1 + 3] [i_1 + 1]), (arr_6 [i_0] [i_1] [i_1 + 1] [i_1 + 2])))))))));
                            var_35 -= ((/* implicit */long long int) (((~(arr_42 [i_0] [i_0] [i_1 + 4] [i_2] [i_12] [i_13]))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_0] [i_1 - 1] [i_2] [i_12] [i_12] [i_13]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))))));
                        }
                        arr_43 [i_12] [i_1] [i_0] = ((/* implicit */long long int) arr_14 [i_1 + 2]);
                    }
                    arr_44 [i_0] = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    } 
}
