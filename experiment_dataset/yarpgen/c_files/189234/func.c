/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189234
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
    var_12 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 979449585)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((-5290308214789958103LL), (((/* implicit */long long int) 1780071825)))))));
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) var_5)), (var_4)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)41007))));
        arr_2 [i_0] = ((/* implicit */int) min((arr_0 [(unsigned short)0]), (((5266272361789018733ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_0 [i_0]))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15)))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
                    {
                        var_17 = arr_7 [i_4 + 1] [i_3] [i_1];
                        var_18 = (~(var_3));
                        arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_9 [i_4 + 1] [i_2] [i_4 + 1]);
                        var_19 = ((/* implicit */unsigned char) ((int) ((arr_0 [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_9 [i_1] [i_2] [i_3]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_5] [i_5 + 1]))));
                        /* LoopSeq 1 */
                        for (int i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)24529);
                            arr_18 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] [(unsigned char)3] = ((/* implicit */long long int) (-(((int) arr_3 [i_1]))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
                    {
                        var_22 &= ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) var_6)))) != (((/* implicit */int) (_Bool)0)))));
                        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)41007));
                    }
                    for (int i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) max((((unsigned short) (-9223372036854775807LL - 1LL))), (((unsigned short) arr_10 [i_1] [9ULL] [3] [i_8] [5] [i_8 - 1]))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_8 - 1] [(_Bool)1] [i_8] [i_8 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [(_Bool)1] [i_8 - 1] [i_3] [i_8] [i_2]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_8 - 1] [i_8 - 1] [i_8] [6LL]))))))));
                        var_26 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_6 [i_2] [i_2])), (var_7)));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_16 [i_2] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]))) ? (arr_16 [i_1] [i_8 - 1] [2] [0LL] [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_8 - 1] [i_8 - 1] [5LL] [i_8]))))))));
                        var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-7))))), (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [0ULL] [i_8] [i_8 - 1])) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_3] [i_1] [i_8 - 1])) : (6913168346703440147ULL)))));
                    }
                    arr_25 [i_1] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_1] [i_2])))));
                    var_29 = ((/* implicit */unsigned short) 3475428151587082334LL);
                }
            } 
        } 
    } 
}
