/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100645
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
    var_17 = min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_8)))) > (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_0 [(unsigned short)10])) : (((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_2 + 2])) == (((/* implicit */int) arr_9 [i_1] [i_2 + 1] [i_2 + 1]))))) : (((/* implicit */int) max((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (((unsigned short) (unsigned short)45928)))))));
                        arr_14 [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)45921)) || (((/* implicit */_Bool) arr_1 [i_4])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)3476)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_11))))) ? (min((((/* implicit */int) max((var_13), (var_3)))), (((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned short)0)))))) : (((((/* implicit */_Bool) (unsigned short)55951)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((var_6), ((unsigned short)30426))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_20 += (unsigned short)32606;
                        var_21 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_8 [i_2 - 1])), (((((/* implicit */_Bool) arr_5 [(unsigned short)9] [(unsigned short)8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
                        arr_17 [(unsigned short)5] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_9 [(unsigned short)4] [i_2 - 1] [i_2 + 2]), (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_3] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1])) != (((/* implicit */int) arr_9 [i_5] [i_2 + 2] [i_2 + 2])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_7 [i_2 + 1] [i_3] [i_6 + 2])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))) - (((/* implicit */int) max((var_8), (arr_10 [i_1] [i_2 - 1] [i_2 + 2]))))));
                        arr_21 [(unsigned short)7] [(unsigned short)3] [(unsigned short)0] [i_6] [i_6] [i_6] |= var_7;
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 + 2] [i_6 - 2])) ? (((/* implicit */int) arr_12 [i_6 - 2] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_12 [i_6 - 2] [i_6] [i_6 + 2]))))) ? (((/* implicit */int) max((var_2), (arr_12 [i_6 - 2] [i_6] [i_6 + 1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))));
                            arr_24 [i_7] [i_6 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        }
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_11 [i_1]))))) ? (((/* implicit */int) max((arr_6 [(unsigned short)11] [i_1]), (var_1)))) : (((/* implicit */int) min((var_2), (arr_11 [i_1]))))));
    }
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        var_25 = (unsigned short)15;
        var_26 = max((min((min(((unsigned short)22), ((unsigned short)0))), (arr_10 [i_8] [i_8] [i_8]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_8])) == (((/* implicit */int) var_9))))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) (unsigned short)19615)) : (((/* implicit */int) (unsigned short)23459))));
}
