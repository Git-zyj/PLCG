/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156155
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) var_5);
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)2] [i_1 - 3])) : (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)105)))))))));
        }
        arr_6 [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [(short)2] [i_0 - 1])) * (((/* implicit */int) arr_3 [i_0 - 1] [8LL] [i_0 - 1]))));
        arr_7 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_3))))) && ((!(arr_3 [i_0] [(unsigned char)8] [i_0 + 1])))));
    }
    for (short i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_2] [i_2]));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                for (short i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_22 [i_2] [(short)5] [i_2] [i_5 - 2] [i_5 + 4] [4] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_4] [i_2]))))), ((-(min((((/* implicit */unsigned long long int) var_5)), (var_9)))))));
                            arr_23 [i_2] [i_3] [i_4 - 1] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_2] [i_3])), (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))))))) : (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) & (((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned long long int) arr_19 [i_6] [i_5 + 4] [i_4 + 1] [i_3] [i_2 + 1])), (var_7)))))));
                            var_18 = ((/* implicit */short) var_5);
                            var_19 = ((/* implicit */short) (-(2549752971082073102ULL)));
                        }
                        var_20 = ((((/* implicit */unsigned int) min((((/* implicit */int) arr_20 [i_2] [i_2])), (((((/* implicit */_Bool) arr_17 [2LL] [(_Bool)1] [i_3] [(_Bool)1] [(_Bool)1] [4])) ? (1083730057) : (((/* implicit */int) var_0))))))) % (min((min((var_10), (((/* implicit */unsigned int) var_0)))), (var_10))));
                        arr_24 [i_2] = ((/* implicit */short) (signed char)105);
                    }
                } 
            } 
        } 
        arr_25 [i_2] = arr_20 [i_2] [i_2 - 1];
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 12; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 11; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    {
                        arr_32 [i_2] [i_7] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_19 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2] [0LL])))) ? (min((((/* implicit */long long int) (-(886923660U)))), (min((((/* implicit */long long int) var_3)), (arr_29 [i_2]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_30 [i_7 - 1])))))));
                        /* LoopSeq 4 */
                        for (int i_10 = 3; i_10 < 12; i_10 += 1) 
                        {
                            var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) * (3404634626U))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (var_13)))), (((arr_19 [i_2] [i_7] [i_8] [i_9] [i_7]) | (var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((~(var_13))) : (arr_10 [i_9] [i_9] [i_10 + 1])))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                        {
                            arr_38 [i_11] [8LL] [i_2] [i_2] [i_7 + 1] [i_2] = (unsigned char)61;
                            var_23 = ((/* implicit */unsigned char) var_11);
                        }
                        for (int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                        {
                            arr_42 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) (-(-1)))) ? ((~(2727322118U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((/* implicit */unsigned int) min((min((var_1), (var_6))), ((!(((/* implicit */_Bool) var_9)))))))));
                            var_24 *= min((arr_16 [i_2 - 2] [i_7 + 1] [i_2 - 2] [i_12] [i_9] [i_12]), (((arr_20 [i_7 - 2] [i_7 - 2]) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)7623)), ((unsigned short)37865)))))));
                            var_25 *= ((/* implicit */short) ((((/* implicit */int) min(((short)-4280), (((/* implicit */short) var_11))))) - (((/* implicit */int) arr_31 [i_2 - 2] [i_8]))));
                            var_26 = ((/* implicit */_Bool) var_5);
                            arr_43 [i_2] [i_2] [i_2] [i_9] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(16037256254479949466ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_2 - 2] [i_2 + 1] [7] [i_2] [i_2 - 1] [i_2 - 2])) | (((/* implicit */int) var_3)))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                        {
                            var_27 += ((/* implicit */long long int) ((unsigned long long int) arr_39 [i_2 + 1] [(_Bool)1] [i_7] [i_7] [i_7 - 1] [i_2 + 1]));
                            arr_46 [i_2] [2LL] [i_2 - 2] [i_2] [i_2 - 2] = ((((/* implicit */int) ((arr_12 [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_13] [i_7])))))) + (((/* implicit */int) ((((/* implicit */int) arr_39 [i_2] [i_7 + 1] [i_2] [i_8] [i_9] [i_13])) > (((/* implicit */int) var_11))))));
                            arr_47 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */long long int) var_5)) / (6504684565213886901LL)));
                            var_28 = ((/* implicit */_Bool) min((var_28), (arr_34 [i_13] [i_7 - 2] [i_8 - 1] [i_7 - 2] [i_2 + 1] [i_13])));
                        }
                        var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31141))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_2 - 2]))) : (((var_11) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_2] [i_8]))))))), (((/* implicit */unsigned int) var_6))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */_Bool) (unsigned char)51)) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)23928))) ^ (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_12))))))))))));
}
