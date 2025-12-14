/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104193
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
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16450))) & (var_18)));
    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)140)), (((int) var_10))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(var_9))))));
    var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned long long int) var_4)), (var_0))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_14);
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) ((((arr_0 [i_4]) != (arr_0 [i_3]))) ? (((/* implicit */int) min(((unsigned short)49070), (((/* implicit */unsigned short) var_5))))) : ((~(((/* implicit */int) (unsigned char)56))))));
                            arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned char)255);
                            arr_16 [i_4] = arr_8 [(_Bool)1] [i_1] [i_1] [i_1] [i_1];
                            arr_17 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)56375)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (unsigned short)49085)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_13)));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16442)) | (((/* implicit */int) (!(((/* implicit */_Bool) 6796711034446409070ULL)))))));
                        }
                        arr_21 [1LL] [i_1] [i_2] [1LL] [i_1] [i_3] = var_2;
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_25 [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)4)) != (((/* implicit */int) arr_24 [i_0] [i_0]))));
                        arr_26 [i_6] [i_2] [i_2] [4] [i_1] [i_0] = (unsigned short)16477;
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned short)16465)))) & (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned short)16436))))));
                        var_26 = ((/* implicit */long long int) var_7);
                        arr_29 [i_0] [(signed char)15] [i_2] [i_7] [(signed char)15] = ((/* implicit */int) var_10);
                        var_27 = arr_19 [i_2];
                        arr_30 [i_0] [i_0] [14LL] [i_7] &= ((/* implicit */unsigned short) arr_2 [i_0]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_9))));
                        arr_35 [i_0] [(unsigned char)0] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [16ULL] [i_2] [i_8]))))) <= (12565565463506678849ULL))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (var_0))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned char)246))))))));
                        var_29 = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) arr_33 [i_8] [i_8])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_11 [i_2] [i_1] [i_2] [i_0] [i_1] [i_8])))))) >= (arr_0 [i_0])));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) max(((signed char)16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) 18446744073709551612ULL))));
                            arr_40 [i_0] [i_1] [i_2] [i_9] [i_2] [i_10] = ((/* implicit */_Bool) var_15);
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)127)) ? (1649923897242591513LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)69))));
                        }
                        var_35 -= ((/* implicit */unsigned long long int) (unsigned short)49067);
                        arr_43 [(signed char)2] [(signed char)2] [(unsigned char)19] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (var_2) : (((((/* implicit */_Bool) arr_9 [(unsigned short)13] [(unsigned short)13] [(unsigned char)15] [i_2] [(unsigned char)3])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13835)))))));
                    }
                }
            } 
        } 
        arr_44 [i_0] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < ((-((+(5823770618846748888LL)))))));
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 15289981894087676629ULL)) ? (((/* implicit */int) (unsigned char)194)) : (var_12)))) : (min((((/* implicit */long long int) var_4)), (arr_2 [i_0])))))) ? (10255207063269527532ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0])), (var_2)))) ? (max((((/* implicit */int) var_5)), (var_12))) : (((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned short)16489)) - (16487))))))))));
        arr_45 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16429)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49070)) ^ (((/* implicit */int) var_6))))) : (arr_3 [(signed char)15] [i_0])))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)4])));
        var_37 = ((/* implicit */long long int) max((var_37), (max((6522485227048921582LL), (((/* implicit */long long int) (unsigned short)16471))))));
    }
}
