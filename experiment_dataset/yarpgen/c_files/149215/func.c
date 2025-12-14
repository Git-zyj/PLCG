/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149215
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
    var_14 = ((/* implicit */unsigned short) (~((-(0)))));
    var_15 = var_10;
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((unsigned short) var_10));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_16 = 0;
            var_17 = ((/* implicit */long long int) var_11);
            var_18 = ((/* implicit */short) max((((((/* implicit */long long int) ((((/* implicit */_Bool) 5728620986559926831LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) & (max((((/* implicit */long long int) (unsigned short)32743)), (-5728620986559926831LL))))), (((/* implicit */long long int) min((arr_5 [12LL]), (((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_0 - 1])))))));
        }
        for (short i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 4; i_3 < 20; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)673)) ? (-2225576854967667491LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)680)))));
                    arr_16 [i_4 + 2] [i_4] [i_4] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64863)) ? (((/* implicit */long long int) 2914855061U)) : (5728620986559926831LL)));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2225576854967667491LL)) || (((/* implicit */_Bool) arr_2 [i_0 - 1]))));
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_9 [9] [(unsigned short)13] [i_0]);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) || (((/* implicit */_Bool) arr_5 [i_2 + 1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_3] [i_2] [i_3] [i_3] [i_7 - 1] [(short)13] = ((/* implicit */unsigned int) arr_20 [i_0] [i_2 - 2] [i_2 - 2] [i_5] [i_7 - 1]);
                        var_23 |= ((/* implicit */unsigned int) (unsigned short)5732);
                        var_24 = ((/* implicit */int) (+(var_7)));
                    }
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_25 += ((/* implicit */unsigned int) (-(5728620986559926831LL)));
                        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_3 + 1] [i_2 - 2] [(unsigned char)21] [i_2 + 1] [i_2] [i_0 - 1]))));
                    }
                }
                var_27 = ((/* implicit */unsigned char) (((~(2983328619391270306LL))) % (((/* implicit */long long int) var_12))));
                arr_29 [i_2] = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) (unsigned short)31569)))));
            }
            for (short i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)222)), ((unsigned short)672)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0]))) : (((unsigned int) arr_6 [i_9]))))) ? ((+(0U))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2]))) : (687871325U))) | (((/* implicit */unsigned int) (+(arr_32 [i_9] [16U] [i_2 - 1]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 3; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    arr_35 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)64858))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) : (18U))))))));
                    var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-(272787957U))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)16128)) ? (((/* implicit */int) (unsigned short)52819)) : (((/* implicit */int) (short)-32740))))))) : ((~(arr_12 [i_0] [i_2 + 1] [1LL])))));
                }
                for (unsigned int i_11 = 3; i_11 < 19; i_11 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_1))) >> (((((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) arr_4 [i_11 - 1] [i_11 + 2]))))) - (59629)))));
                    arr_39 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) 1270218964)) : (983040U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)825)) ? (543328934U) : (4293984255U)))) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 524032U)))))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)374)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (8572459712320276985LL))) : (arr_12 [i_2 - 1] [i_2 - 1] [i_0 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */short) min((max((((-2788654617297232584LL) / (((/* implicit */long long int) arr_1 [i_2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -2788654617297232584LL))))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0)))))));
                        arr_43 [i_2] [i_2] [(unsigned short)10] [i_12 - 1] [i_12 - 1] [(unsigned char)2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [i_12] [i_12])))) ? (((((/* implicit */_Bool) arr_32 [i_2] [i_2 - 2] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_28 [21U] [21U] [i_0] [i_0 + 1] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535))))))) ? (max((arr_20 [i_11 - 3] [i_9] [i_9] [i_2 - 1] [i_9 - 1]), (arr_20 [i_12 - 1] [i_12] [i_12] [i_2 + 1] [i_9 + 1]))) : (((/* implicit */long long int) (+((-(1911197000U))))))));
                        var_32 &= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) (unsigned short)43852))))), ((~(((/* implicit */int) (unsigned short)65535))))));
                    }
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1478988157626146951LL)) ? (arr_33 [i_11] [i_2 - 2] [i_11 + 3] [14U] [i_9 - 3]) : (arr_33 [(unsigned char)14] [i_2] [i_11 - 1] [13LL] [i_9 - 1])))) ? (((arr_33 [i_0] [i_0] [i_11 - 2] [i_11 - 2] [i_9 - 1]) / (arr_33 [(unsigned short)20] [i_2] [i_11 + 2] [i_0] [i_9 + 1]))) : (min((arr_33 [(short)2] [1U] [i_11 - 3] [14] [i_9 - 1]), (((/* implicit */int) (unsigned char)237))))));
                }
                for (unsigned int i_13 = 3; i_13 < 19; i_13 += 2) /* same iter space */
                {
                    arr_47 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1911197000U)) ? (((((/* implicit */int) max((arr_30 [i_9] [9LL] [9LL]), (((/* implicit */unsigned short) (unsigned char)128))))) | (((/* implicit */int) (unsigned short)7)))) : (((/* implicit */int) (unsigned short)54475))));
                    var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_14 [i_2] [i_2 + 1]), (arr_14 [i_2 - 1] [i_2 + 1])))), ((+(1911197000U)))));
                    var_35 = ((/* implicit */unsigned int) arr_5 [i_0]);
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) max((var_36), (min((((((/* implicit */_Bool) arr_54 [(unsigned short)10] [i_15] [(unsigned short)15])) ? (max((var_1), (((/* implicit */long long int) arr_31 [i_15] [i_15])))) : (((/* implicit */long long int) var_3)))), ((+(max((var_2), (((/* implicit */long long int) (unsigned short)0))))))))));
                            var_37 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) arr_46 [i_2] [i_2] [i_14] [i_2 - 2] [i_0 - 1]))), (min((((/* implicit */unsigned int) -1)), (3861706922U)))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_8)))));
            var_39 *= (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [18LL])), (var_5)))) ? (max((arr_26 [i_0] [(unsigned short)14]), (arr_9 [i_0 - 1] [i_0 - 1] [(short)16]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)5268))))))));
            arr_57 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2654486836U)) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [(unsigned short)11] [i_0] [i_0 - 1] [i_0])))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) (short)-30962)))) << (((min((arr_42 [i_0] [i_0] [i_2] [i_2] [i_2]), (var_3))) - (2389816179U)))))) : ((+(arr_20 [i_2] [i_2 - 2] [i_0 - 1] [i_0 + 1] [i_0])))));
        }
        var_40 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [21] [i_0] [21])))))))));
    }
}
