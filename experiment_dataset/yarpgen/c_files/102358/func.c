/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102358
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
    var_12 = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_7), (-1235401362)))), (22U)))) / ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) max((313570969327598192LL), (((/* implicit */long long int) var_3))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_10))))))))));
    var_14 ^= ((/* implicit */unsigned long long int) ((short) var_6));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (~(117440512)));
        var_16 = ((/* implicit */short) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (max(((~(2199023255548ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((3798359563U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9ULL] [i_4]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_4] [i_1] [i_1] [i_0])))))))) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (var_6)));
                            var_18 -= ((/* implicit */_Bool) arr_7 [i_2]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [20U] [i_3 - 1] [20U] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(short)1] [(signed char)10] [i_2] [i_3])) && (((/* implicit */_Bool) var_8)))))) : (arr_15 [i_1 + 1] [i_1] [i_0] [i_0])));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_5]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) != (((((/* implicit */int) arr_14 [i_1] [i_1 - 3] [(short)19])) & (((/* implicit */int) (unsigned char)215))))));
                            arr_17 [i_1] [i_2] [i_3] = ((/* implicit */short) arr_7 [i_5]);
                        }
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_13 [i_0])))) + ((-(((/* implicit */int) (signed char)-68))))))) > ((+(max((3798359563U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))))));
                        arr_18 [i_0] [i_1] [i_0] [i_0] [(short)7] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((arr_14 [i_1] [i_2] [i_1]) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_1] [i_0] [i_3 - 1] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) 3798359532U)) / (18446744073709551605ULL)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) min((max((496607739U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15))))) + (3798359532U)))));
        var_23 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27058))) % (var_0))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)20] [i_0] [i_0]))) / (arr_15 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 = ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [(signed char)1] [i_6])) ? ((+(arr_12 [i_6] [i_6] [i_6] [2LL] [4ULL] [i_6] [(unsigned char)17]))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((1926202297U), (((/* implicit */unsigned int) arr_0 [i_6] [i_6])))))))));
        var_25 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_19 [i_6])), (((unsigned long long int) var_11))))));
    }
    var_26 = ((/* implicit */_Bool) min((var_2), (((/* implicit */int) (_Bool)1))));
}
