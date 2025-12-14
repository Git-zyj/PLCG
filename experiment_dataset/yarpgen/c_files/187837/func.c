/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187837
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_9 [i_0 + 1] [i_0 - 1] [(_Bool)1] [i_2] [i_3 + 2] = ((/* implicit */long long int) ((unsigned short) ((_Bool) arr_1 [i_0 + 1])));
                        var_20 = ((((((/* implicit */int) ((unsigned short) arr_3 [i_1] [(unsigned short)5]))) >> (((((/* implicit */int) arr_7 [i_0 - 1])) - (28707))))) == ((-((+(((/* implicit */int) arr_2 [i_1] [i_0])))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((+(((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_17))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_4 [i_0] [i_0] [11LL]))))))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0 + 1] = ((/* implicit */unsigned short) (_Bool)0);
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (+((-(max((arr_11 [i_4 + 2] [i_4 + 2]), (((/* implicit */long long int) (unsigned short)0))))))));
        arr_13 [i_4 + 1] [i_4] = ((min((min((arr_11 [i_4] [i_4]), (((/* implicit */long long int) arr_12 [i_4 + 1])))), (((/* implicit */long long int) (unsigned short)64126)))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_4 + 2]))))));
    }
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                {
                    var_23 *= ((/* implicit */long long int) ((min((arr_14 [i_6 + 3] [i_5 + 1]), (((/* implicit */long long int) (unsigned short)16112)))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_24 += ((/* implicit */_Bool) ((((_Bool) arr_17 [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16112))) | (arr_17 [i_8] [i_6] [i_5]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (arr_11 [i_5] [i_5]))))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31419))))) ? (((arr_14 [(_Bool)1] [i_9]) ^ (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                                var_25 = ((/* implicit */unsigned short) ((((_Bool) arr_25 [i_9 + 1] [i_9] [(unsigned short)1] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) max((arr_25 [i_9 - 1] [i_9] [(unsigned short)2] [i_9 - 1] [i_9 - 1]), (arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])))) : ((+(((/* implicit */int) (unsigned short)49430))))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((1292133589047520423LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_17))))))) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_5 + 1] [i_5 + 1] [(unsigned short)3])) && (((/* implicit */_Bool) arr_14 [i_5 - 1] [i_6]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1]))) % (arr_14 [i_5] [i_7]))))))))));
                                var_27 = var_8;
                                var_28 = ((/* implicit */long long int) var_16);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [i_5 - 1] [i_5]))) - (arr_14 [(unsigned short)8] [i_5 + 1])))));
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (-1074843697993926989LL)))) ? (((/* implicit */int) (unsigned short)49430)) : (((((/* implicit */int) arr_16 [i_5] [i_5] [i_5])) >> (((((/* implicit */int) arr_16 [i_5] [i_5 + 1] [i_5])) - (54946))))))) & (((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)49366)))) << (((((/* implicit */int) arr_24 [i_5] [i_5 - 1] [i_5])) - (9092)))))));
        var_29 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)57096)))), (((/* implicit */int) max((var_19), (((/* implicit */unsigned short) (_Bool)0)))))))), ((+(arr_11 [i_5 - 1] [i_5])))));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((unsigned short) max(((unsigned short)49459), (arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 1])))))));
    }
    for (unsigned short i_10 = 2; i_10 < 8; i_10 += 4) 
    {
        arr_30 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) arr_24 [i_10 - 1] [i_10 - 2] [i_10 + 1])) : (((((/* implicit */int) arr_24 [i_10 - 2] [i_10 - 1] [i_10 - 1])) & (((/* implicit */int) arr_24 [i_10 - 1] [i_10 - 1] [i_10 + 3]))))));
        var_31 = ((unsigned short) (unsigned short)56286);
        arr_31 [i_10] = ((/* implicit */long long int) max((var_10), ((unsigned short)31419)));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            for (long long int i_12 = 2; i_12 < 9; i_12 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_13 = 3; i_13 < 9; i_13 += 2) 
                    {
                        arr_39 [i_10 + 1] [(_Bool)1] [i_13] [i_10 + 1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_10 + 2])) ? (((/* implicit */int) arr_36 [i_10 + 2] [i_11 + 1] [i_13 + 2] [i_10 + 2])) : (((/* implicit */int) (unsigned short)49432))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49451)) ? (-1074843697993926989LL) : (arr_8 [i_10 + 3] [i_11 + 1] [i_10 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 2; i_14 < 9; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [(unsigned short)9] [i_13 - 2])) == (((/* implicit */int) arr_2 [i_12 - 1] [i_13 + 1]))));
                            var_34 ^= (unsigned short)0;
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_11]))));
                            var_36 = (_Bool)1;
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (562949953421311LL))))))));
                        }
                    }
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        var_38 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_10 - 2] [i_12] [i_16]))))) ? (((var_11) ? (((/* implicit */int) arr_19 [i_10] [i_11] [(unsigned short)5])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_10 + 3] [i_11 + 1] [i_12 - 1] [(_Bool)0])), (arr_12 [i_10]))))))));
                        var_39 = ((/* implicit */_Bool) max((((long long int) (~(((/* implicit */int) var_9))))), (((arr_8 [i_12 - 2] [i_12 - 2] [6LL]) + (arr_8 [i_12 + 1] [i_12 + 2] [i_12])))));
                    }
                    arr_47 [i_10] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) max((arr_15 [i_10] [i_11 + 1]), (arr_22 [(unsigned short)11] [i_11 + 1] [i_12 + 2] [i_10 - 1])))) : (((((/* implicit */_Bool) 5212727858925810520LL)) ? (((/* implicit */int) arr_15 [i_10] [i_11 + 1])) : (((/* implicit */int) (unsigned short)36894))))));
                    var_40 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((unsigned short)65535), (arr_29 [i_10])))) ? (((arr_46 [i_10 + 2] [i_11 + 1] [i_12]) - (-562949953421302LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) | (-562949953421332LL)))))));
                    arr_48 [i_10] [i_10] [i_11 + 1] [i_11 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)16105), ((unsigned short)65535))))))) % (((arr_20 [i_12 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) min((min((var_10), (var_10))), (var_17))))));
}
