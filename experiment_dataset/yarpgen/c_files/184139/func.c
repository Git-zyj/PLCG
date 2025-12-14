/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184139
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_12 -= max((((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_0] [i_2 - 1])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))))));
                                arr_13 [2LL] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-97))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) max((arr_5 [i_1] [i_3] [(_Bool)1] [i_1]), (((/* implicit */unsigned int) arr_10 [i_0] [i_3] [i_0]))))) ? ((+(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22379))) : (arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8546815401197254295ULL) < (arr_9 [i_0]))))) : (arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_1] [i_3 + 1] [i_4]))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (arr_5 [i_0] [i_1 - 3] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]))));
                        arr_19 [(signed char)0] [(signed char)0] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)7])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) > (var_11))))));
                    }
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        arr_22 [i_6] [i_1 - 4] [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) ((((var_3) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_6] [i_2] [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_20 [i_0] [i_6] [i_2 - 2] [i_6 + 2] [i_0] [i_0])), (((var_6) + (arr_2 [(signed char)11] [i_1] [i_2 + 2])))))) : (max((((/* implicit */unsigned long long int) var_5)), (3169897801809420410ULL)))));
                        arr_23 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_21 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1 + 4] [i_2 - 3] [i_6])) : (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_17 [i_6] [i_2] [(_Bool)1] [i_0] [i_0]))))))) ? ((+((~(arr_3 [i_1] [i_6]))))) : (((/* implicit */unsigned long long int) (~(496881665U))))));
                        arr_24 [(unsigned short)0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((+(arr_1 [6ULL]))) | (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))), (max(((+(arr_16 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) : (var_4))))))));
                        var_13 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 3] [i_2 - 3] [i_6])) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 2] [2U] [i_0]))))));
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_14 = ((/* implicit */short) (+(max((((/* implicit */long long int) arr_0 [i_2 - 1])), ((+(var_3)))))));
                        var_15 = ((((/* implicit */_Bool) (+(var_0)))) ? ((~(((/* implicit */int) arr_6 [i_2 - 3] [i_1])))) : ((~(((/* implicit */int) arr_6 [i_2 - 3] [i_1])))));
                        var_16 = (~((+(((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) var_10)))))));
                    }
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_1 + 3] [(unsigned char)5] [i_1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) var_8))));
                }
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1 - 4]))) >= (((unsigned long long int) arr_7 [i_1 + 3] [i_1] [0U] [i_0] [(short)4] [i_0])))))));
                var_19 = ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1 - 1] [i_1 - 3] [i_1 - 3]))) & (arr_12 [i_0] [i_0] [i_0] [i_1 + 1] [(signed char)10])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)5] [i_0] [i_0] [i_1 - 1] [(unsigned char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (arr_25 [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) arr_12 [i_8] [i_9] [9LL] [9LL] [3U]);
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_1))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_8)))) : (((((((/* implicit */int) (unsigned char)69)) * (((/* implicit */int) var_9)))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))) > (var_4)))))))))));
                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_8] [i_9] [i_9]))))) ? (((/* implicit */int) (short)27028)) : (((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))), (7816842U)));
            }
        } 
    } 
}
