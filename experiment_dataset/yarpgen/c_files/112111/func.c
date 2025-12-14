/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112111
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (-((-((+(4832436893777569462LL)))))));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4832436893777569462LL)) ? (((/* implicit */int) (unsigned short)30381)) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (-1)))));
                var_14 += ((/* implicit */_Bool) 1ULL);
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_6 [i_3 + 2] [i_3] [i_3 + 1] [i_4 + 1]), (arr_6 [i_0] [i_3 - 1] [i_3 - 2] [i_4 + 2])))), (min((((/* implicit */unsigned long long int) (short)-32538)), (arr_11 [i_1] [i_3 + 3] [i_3 + 3] [i_4 - 1] [i_4])))));
                                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3] [i_3] [i_3])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [12] [i_0] [10ULL])))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned char) (~(((((/* implicit */_Bool) 14)) ? (((/* implicit */unsigned long long int) -1)) : (arr_11 [(unsigned short)9] [i_1] [i_2] [i_1] [i_4 - 1])))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_6), (var_6))))))))))));
                }
                for (int i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    arr_15 [i_0] [7ULL] [i_0] [i_0] = ((/* implicit */signed char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8))));
                    var_19 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14165))))))))));
                    arr_16 [(unsigned short)3] [i_1] [i_1] [4ULL] = var_5;
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_20 -= ((/* implicit */unsigned char) ((unsigned long long int) var_8));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(signed char)8] [i_0])) : (((((/* implicit */int) arr_5 [i_0] [i_1] [i_6])) ^ (arr_4 [i_0] [i_0] [i_0]))))) | ((~((~(((/* implicit */int) (short)-19445))))))));
                    var_22 = ((/* implicit */signed char) arr_13 [i_6] [i_1] [i_1] [i_0]);
                }
                for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 4] [i_7 + 4]), (((/* implicit */signed char) arr_19 [i_7 + 2] [i_7 - 2]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-14165))))))))));
                    var_24 = ((/* implicit */short) arr_20 [i_1]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) ((arr_25 [i_0] [i_1] [i_0] [i_8]) && (((/* implicit */_Bool) -14)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32517)) && (((/* implicit */_Bool) var_0)))) || ((!(((/* implicit */_Bool) (signed char)-74))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_1] [i_0])))))))));
                        var_26 -= ((/* implicit */unsigned char) var_11);
                        var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)252)), (18446744073709551615ULL))))))), (arr_11 [(unsigned short)5] [0U] [5LL] [(unsigned short)9] [i_0])));
                    }
                    arr_26 [i_0] [(signed char)3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_21 [i_0] [i_0]), (((/* implicit */int) arr_25 [i_1] [i_7 + 1] [i_7 - 2] [i_7 + 4]))))) ? (((/* implicit */int) arr_17 [i_7 - 1] [i_7 + 4] [i_7] [i_7 - 1])) : (((((/* implicit */_Bool) (+(615186562519767401ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) <= (((/* implicit */int) (signed char)1))))) : ((~(14680064)))))));
                }
            }
        } 
    } 
    var_28 *= min((var_5), (var_3));
}
