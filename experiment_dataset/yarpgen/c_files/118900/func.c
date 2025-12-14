/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118900
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3])) - (var_11)));
                    var_16 = ((/* implicit */unsigned short) var_7);
                    var_17 *= ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1] [i_2 - 1]));
                }
                for (int i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    arr_14 [i_1] = ((/* implicit */short) var_6);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(arr_6 [(signed char)6] [(_Bool)1] [(unsigned char)8]))))));
                        var_19 = min((((2ULL) ^ (24ULL))), (((/* implicit */unsigned long long int) (_Bool)1)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (((~(((2ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_1]))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                        var_21 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_5 [(short)2] [i_4 + 2])), ((~(((/* implicit */int) (short)0))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_22 = arr_9 [(_Bool)1] [i_1];
                        var_23 &= ((/* implicit */unsigned char) arr_4 [(unsigned char)10] [10ULL] [(unsigned char)10]);
                        var_24 = ((/* implicit */unsigned short) (~((-(((13192757502995046000ULL) & (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
                        var_25 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_7 [i_0 + 2] [i_1 - 1] [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 2; i_8 < 9; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) var_11);
                        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_4] [i_2 + 1] [i_1] [i_1])) ? (arr_20 [i_8 - 1] [i_2] [i_2] [8ULL] [8ULL]) : (arr_20 [i_8 - 1] [i_4 - 1] [i_4] [(unsigned short)1] [i_4])));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [i_0] [(unsigned short)2] [(signed char)4])))) >= (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_4])))))));
                        var_29 = ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_1] [i_1] [0ULL]);
                    }
                }
                var_30 = var_7;
            }
            var_31 += ((/* implicit */long long int) min((arr_5 [i_0] [i_1 - 1]), (((/* implicit */unsigned short) (short)14))));
        }
        arr_24 [i_0] = ((/* implicit */short) arr_22 [i_0 + 1] [i_0] [(short)9] [i_0 + 1]);
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (unsigned char)78))));
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (var_7)));
    var_34 = ((/* implicit */int) ((unsigned int) ((max((3ULL), (((/* implicit */unsigned long long int) var_8)))) - (min((var_2), (((/* implicit */unsigned long long int) var_6)))))));
    var_35 = ((/* implicit */int) var_14);
}
