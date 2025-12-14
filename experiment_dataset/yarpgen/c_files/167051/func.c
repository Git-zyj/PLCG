/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167051
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
    var_16 = ((/* implicit */short) ((((((/* implicit */int) (short)14477)) != (((((/* implicit */int) var_9)) - (((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-14468)) : (((/* implicit */int) (signed char)-124)))) : ((~(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((unsigned short) var_0));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (16717666409197668980ULL))) / (var_13))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_9 [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [(signed char)3] [i_2] [i_2]);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 - 2])) ? (arr_0 [(unsigned short)16]) : (arr_0 [4]))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), ((!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4))))))));
                        arr_12 [(signed char)0] [i_1] [(signed char)0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_5))))) ? (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_1] [(_Bool)0] [7U] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_13))))));
                        arr_16 [(_Bool)1] [i_0] [7ULL] [(signed char)6] = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_2 + 1] [15ULL] [i_1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)1202)))))));
                        var_21 = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) var_11)))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_5 - 3] [i_6] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_5 - 1]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            arr_23 [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_6 [6LL] [i_0] [6LL])) << (((/* implicit */int) arr_11 [i_1] [i_2 - 3] [i_5 + 1] [i_7])))));
                            var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_1] [i_0] [i_1])) < (((/* implicit */int) (short)-7088)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [(signed char)12] [i_1] [i_2] [i_5] [i_7])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_5] [10LL])))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) var_5);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((var_5) ? (((/* implicit */int) arr_6 [i_0 - 1] [(unsigned short)12] [i_2 - 3])) : (((/* implicit */int) var_6)))))));
                        arr_28 [i_0] [i_0 - 1] [i_1] [i_2 + 2] [i_1] [13ULL] = (-(((/* implicit */int) (_Bool)1)));
                        arr_29 [i_8] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                    }
                    arr_30 [i_0] [i_1] [i_2] [i_2 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_13)) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) - (18446744073709551592ULL)))))))));
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6)))))))) ? (var_0) : (((/* implicit */int) var_7))));
    var_28 = var_12;
}
