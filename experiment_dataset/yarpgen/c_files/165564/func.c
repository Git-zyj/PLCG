/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165564
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
    var_17 = max(((((_Bool)1) ? (3414447528U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))))), (((/* implicit */unsigned int) var_14)));
    var_18 = (+(((/* implicit */int) ((unsigned char) max((var_5), (880519767U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [15ULL] [0LL] [i_2] [(unsigned short)11]), (arr_8 [i_0] [i_0] [i_2] [i_3])))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_1] [(_Bool)1] [i_2])) >= (((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [14U]))))) : (((/* implicit */int) max((arr_4 [i_2] [i_1] [i_1] [(unsigned short)2]), (arr_4 [i_2] [(_Bool)1] [i_2] [i_3]))))));
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(1)))) ? (((/* implicit */int) (!((_Bool)1)))) : (min((((/* implicit */int) (_Bool)1)), (arr_3 [i_0]))))), ((+(((/* implicit */int) arr_5 [i_0] [5U] [i_3]))))));
                    }
                    for (short i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (short)604);
                        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)604)), (arr_7 [(signed char)2] [(signed char)12] [i_2] [i_4])))) ? (arr_1 [i_4 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))) ? (((/* implicit */int) (unsigned short)38370)) : (((((/* implicit */_Bool) (unsigned short)27151)) ? (((((-30641452) + (2147483647))) >> (((/* implicit */int) var_16)))) : (((/* implicit */int) var_2))))));
                        arr_13 [i_2] [i_1] [6U] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_4 - 2] [i_4 - 1])) != (arr_12 [i_0] [i_0] [i_2] [i_4] [i_4 + 2] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) (unsigned short)31)))))))) : (((((/* implicit */long long int) (+(arr_12 [i_0] [i_0] [i_0] [i_0] [10] [i_0])))) * (max((var_4), (((/* implicit */long long int) -1))))))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_10;
                    }
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3414447545U))))), (min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1)))))))));
                    var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 809737362)), (6734413565349779046LL)))) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20)))))))));
                    var_24 = (~((~(var_8))));
                }
                for (int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_12);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])) ? (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])) : (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]))))) ? (((/* implicit */int) min((arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]), (arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])) : (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]))))));
                    arr_18 [i_0] [(unsigned short)4] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_12 [(signed char)2] [14U] [i_5 + 3] [i_5 - 1] [(unsigned char)0] [i_5 - 2]) > (((/* implicit */int) var_13)))) ? ((-(350551052))) : (min((arr_12 [i_1] [(signed char)3] [i_5 - 2] [i_5 + 2] [10LL] [i_5 - 1]), (arr_12 [(unsigned short)14] [(unsigned short)14] [i_5 - 1] [i_5 + 3] [i_5] [i_5 + 1])))));
                }
                for (int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_6]))))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) var_2))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40966)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_6 + 3] [i_7])) : ((~(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_6] [(unsigned short)6] [(unsigned short)6] [i_1])) ? (arr_3 [i_0]) : (1)))))));
                                arr_26 [0] [0] [0] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)60272))))), (arr_25 [i_0] [(unsigned short)12] [(signed char)15] [i_0] [(unsigned char)2])));
                            }
                        } 
                    } 
                    arr_27 [i_1] = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1] [(signed char)3]);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_28 = arr_0 [i_0];
                        arr_31 [(_Bool)1] [10ULL] [i_6] [i_9] [i_9] = (signed char)116;
                        arr_32 [i_6] |= ((/* implicit */_Bool) (~(var_4)));
                    }
                }
                var_29 = ((/* implicit */unsigned long long int) (((~(3658225345U))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0])))))));
            }
        } 
    } 
}
