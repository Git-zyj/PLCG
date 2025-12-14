/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117305
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_4 [i_0] = min(((-(((/* implicit */int) (unsigned char)241)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_15)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [6LL] [i_3] [i_3] [i_3 + 1] [i_3])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (-2049515443)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_7 [i_3] [i_3 + 1] [2LL] [i_3] [i_1 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2] [i_3 - 2] [i_3] [i_2] [i_2])) - (((/* implicit */int) arr_7 [i_3] [i_3 + 2] [i_2] [i_0] [i_0]))))) : (max((6261558448642406461LL), (((/* implicit */long long int) var_17))))));
                }
                var_20 -= ((/* implicit */_Bool) ((unsigned short) ((unsigned char) (signed char)-47)));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    arr_12 [i_0] [i_2] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(1051320708))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)220)) || (((/* implicit */_Bool) (unsigned char)204)))))))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))) >> (((((arr_7 [i_4] [i_4] [i_2] [(_Bool)1] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0] [(signed char)8] [i_0])) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1])))) - (27377))))) : ((-(((/* implicit */int) arr_5 [(signed char)8] [i_4]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(1051320708))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)220)) || (((/* implicit */_Bool) (unsigned char)204)))))))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))) >> (((((((arr_7 [i_4] [i_4] [i_2] [(_Bool)1] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0] [(signed char)8] [i_0])) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1])))) - (27377))) + (22873))))) : ((-(((/* implicit */int) arr_5 [(signed char)8] [i_4])))))));
                    arr_13 [(unsigned char)4] [i_1] [i_1 + 1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_4])) && (arr_1 [i_0] [i_2]))) ? (((/* implicit */int) (!(var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
                    var_23 = ((/* implicit */_Bool) (unsigned char)240);
                }
            }
            arr_16 [i_1] [i_0] = ((/* implicit */short) (unsigned short)8);
        }
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_20 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_6]))))), (((long long int) arr_10 [i_0] [i_0]))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_18 [(_Bool)1] [(_Bool)1] [i_0]))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_5 [(signed char)2] [i_0])))))) ? ((-(((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) arr_7 [i_6] [i_6] [i_0] [i_6] [i_6]))))))) : (arr_3 [i_0])));
            var_26 *= (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) % (((/* implicit */int) (unsigned short)27582))))) ? (((var_7) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_6] [i_0]), (arr_11 [(unsigned char)10] [6LL]))))))));
        }
        for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5956350536817821984LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6261558448642406461LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_0] [i_8] [(unsigned char)6] [i_8] [i_7]))) ^ (arr_19 [i_7] [(signed char)0] [i_7]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) var_6)))))))))))));
                var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_16)))), (((/* implicit */int) arr_21 [i_7 + 1] [i_7 - 1]))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)81))));
                arr_26 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((var_14) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13)))) >= (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
            }
            for (short i_9 = 3; i_9 < 11; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    var_29 ^= ((/* implicit */unsigned short) max(((+(((/* implicit */int) (unsigned short)17513)))), ((-(((/* implicit */int) (signed char)63))))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) -1708928951750626036LL))));
                }
                arr_32 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                /* LoopSeq 1 */
                for (short i_11 = 3; i_11 < 10; i_11 += 3) 
                {
                    arr_36 [(short)11] [i_7] [i_9] [i_0] = ((/* implicit */_Bool) ((signed char) 6261558448642406461LL));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_0))));
                }
                arr_37 [i_0] [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)75))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_13))))))) > (((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (_Bool)0))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_44 [(unsigned char)10] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_4))) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7 - 1] [i_7 + 1] [i_0] [i_12 - 1])))))) ? (min((((((/* implicit */_Bool) arr_31 [(short)9])) ? (((/* implicit */int) (signed char)90)) : (901517550))), ((+(((/* implicit */int) arr_18 [i_0] [i_7] [i_12])))))) : (((/* implicit */int) ((arr_38 [i_0] [i_12 + 3] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_21 [(short)8] [i_7 + 1]))))))));
                        arr_45 [1] [7LL] [i_0] [i_13] = arr_0 [i_0];
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_48 [i_0] [(_Bool)1] [i_0] [i_0] [i_14] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_8 [i_0] [i_0])))));
                            arr_49 [i_0] [i_0] [i_0] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_7 - 1] [i_12 + 3] [i_12 + 2]) % (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_0] [i_7 - 2] [i_7] [i_7] [i_7 + 1] [i_12 + 3]))))) : (((((/* implicit */_Bool) (+(8388607LL)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)222)))))))));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
    {
        var_32 = ((/* implicit */_Bool) 1354845934);
        arr_52 [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) arr_51 [i_15])))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13881))) <= (arr_50 [i_15] [6LL])))))))));
        arr_53 [i_15] = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_33 *= ((_Bool) 4448406277470515638LL);
}
