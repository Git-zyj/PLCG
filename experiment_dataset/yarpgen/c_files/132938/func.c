/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132938
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
    var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 + 2])))) | (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) (signed char)127)))))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned short) (((+(arr_1 [i_0]))) / (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1] [i_1 - 2]))))));
            var_21 = ((/* implicit */signed char) ((min((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1]))) % (((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_2 + 1])))));
            var_22 = ((/* implicit */short) ((max((arr_5 [i_1 - 3] [i_2 + 1]), (arr_5 [i_1 - 1] [i_2 - 2]))) <= (((((/* implicit */int) arr_7 [i_1 + 4] [i_1] [i_2 + 1])) | (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_2 + 1]))))));
        }
        for (int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                var_23 = ((/* implicit */_Bool) var_5);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_1] [i_6])) ? (((((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1] [i_1 - 3])) ? (((/* implicit */int) arr_16 [i_4])) : (-1340236428))) : (((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_17 [i_3] [i_3] [(_Bool)1] [i_5])))))), (((/* implicit */int) min((arr_12 [i_4 + 1] [i_4] [i_4 + 3]), (arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 3]))))));
                            arr_21 [i_3] [i_3] [(signed char)18] [i_3 + 3] [i_3] = ((/* implicit */_Bool) arr_8 [i_4 - 1] [i_6] [i_6]);
                        }
                    } 
                } 
            }
            arr_22 [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_1 [i_1 + 3])) : (var_3)))) || (((/* implicit */_Bool) ((max((((/* implicit */int) (short)23236)), (1931684928))) | (max((((/* implicit */int) arr_4 [i_1])), (-2147483647))))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_7 - 1] [i_1] [i_1] = ((/* implicit */short) ((arr_16 [i_1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [14LL] [i_7] [i_1] [i_7 - 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))));
            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_7] [i_7 - 1])), (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-29030))))))) ? (((((/* implicit */int) arr_23 [i_7 - 1] [i_7])) ^ (2147483642))) : (((/* implicit */int) ((unsigned short) ((arr_19 [i_1] [i_1] [(_Bool)1] [i_1] [i_7 - 1]) + (((/* implicit */int) arr_0 [i_1 + 1] [i_7]))))))))));
            arr_26 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)84)) | (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_24 [i_7])))))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_7])) && (((/* implicit */_Bool) 946275853))))))) : (((/* implicit */int) max((arr_20 [i_1] [i_7] [i_7] [i_7] [i_7] [(unsigned char)0]), (arr_20 [i_1] [i_7 - 1] [i_7 - 1] [i_1] [i_1 + 2] [(unsigned short)6]))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
            {
                arr_30 [i_1 + 4] [i_8] [i_8] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1])))) * ((-(((/* implicit */int) (_Bool)0))))));
                arr_31 [i_1] [i_8] [i_8] [i_8] = ((/* implicit */short) (unsigned char)30);
                var_26 = ((/* implicit */_Bool) arr_5 [i_1] [i_8]);
                var_27 = ((/* implicit */unsigned char) min(((~(((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_8])) >> (((((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 3] [i_8])) - (209))))))), (((/* implicit */int) ((signed char) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) var_11)) - (1)))))))));
            }
        }
        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((short) var_9)))) ? (((arr_24 [i_1 + 1]) ? (((/* implicit */int) arr_24 [i_1 + 4])) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_29 [i_1] [4] [i_1])))), (((arr_19 [i_1 + 1] [i_1] [i_1 - 3] [i_1] [i_1 + 1]) <= (((/* implicit */int) arr_28 [i_1] [8LL] [i_1])))))))));
        arr_32 [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    }
}
