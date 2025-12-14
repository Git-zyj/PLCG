/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172950
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
    var_13 = max((((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-113)) > (((/* implicit */int) (signed char)-78)))))) : (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (1339530403U))))), (((/* implicit */unsigned int) (short)-1)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_5 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) 4294967270U)));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_6))));
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
            {
                var_14 = ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (2826168560879276419LL));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))))))));
            }
            for (long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_16 = ((/* implicit */short) ((arr_0 [i_3 + 1] [i_3]) + (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (unsigned short)4)) : (-2147483643))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)65515)) ? (3760643099U) : (899511443U))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)9))))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65493)) ? (arr_10 [i_0] [i_0] [i_0] [i_3 + 1]) : (arr_10 [i_0] [i_3 + 1] [i_3] [i_3 + 1])));
                    arr_15 [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3 + 2] [i_3 + 1]))) - (arr_11 [i_3 + 2] [i_3 + 1] [i_3 - 1])));
                }
                for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6697512998605379295ULL)) ? (((/* implicit */long long int) 899511447U)) : (1563682792751899578LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_3 + 2] [i_5 + 4]))) : (3395455852U)));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        var_20 -= (-(((((/* implicit */_Bool) (short)18795)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))));
                        var_21 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
                        var_22 = ((/* implicit */int) ((arr_16 [i_5] [i_3] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0])))))) : (((((/* implicit */_Bool) (signed char)15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
                    }
                    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_24 [i_5] [6LL] [i_3] [i_5 + 3] = ((/* implicit */unsigned char) (+(((var_5) & (var_5)))));
                        arr_25 [i_5] [i_1] [i_3 - 1] [(unsigned short)6] [i_5] [i_5 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) : (var_1)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_3] [i_3] [i_3 + 1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) : (2256102253U)));
                        var_23 ^= ((/* implicit */int) (-(var_0)));
                    }
                }
                var_24 = ((/* implicit */unsigned char) (~(((1882768677U) * (4294967288U)))));
            }
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 2; i_10 < 17; i_10 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) -8584143951428416714LL);
                    arr_35 [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                    var_26 = ((/* implicit */unsigned int) var_0);
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19))) <= (((4294967295U) | (3395455855U)))));
                            arr_42 [i_9] [(unsigned char)13] [i_9] [i_9] [i_11] = ((((/* implicit */_Bool) 1236641612U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))) : (2784995429626801106LL));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!((_Bool)0))))));
            }
            arr_43 [i_0] = ((/* implicit */unsigned int) ((arr_13 [i_0]) && (((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_1]))));
        }
        for (unsigned int i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            arr_46 [i_13] [i_13] [i_0] = ((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_13]);
            var_29 = ((/* implicit */_Bool) 3779884760U);
            var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_44 [i_13 + 2] [i_13 - 2])) ? (((/* implicit */unsigned int) var_10)) : ((-(arr_23 [i_13 - 2])))))));
            arr_47 [12LL] [i_0] [i_0] = ((/* implicit */long long int) arr_19 [i_13]);
            arr_48 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((arr_11 [i_0] [9] [i_13]) >> (0ULL)))))), (((((/* implicit */_Bool) arr_3 [i_13 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_13] [11LL] [6U] [i_13]))) : (arr_20 [i_13 - 1] [i_13 - 1] [i_0])))));
        }
        for (short i_14 = 4; i_14 < 14; i_14 += 3) 
        {
            arr_51 [i_14] [i_14] = ((/* implicit */unsigned char) arr_13 [i_0]);
            var_31 = ((arr_22 [i_14] [i_14] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) min((arr_5 [i_14 + 2] [i_0] [i_0]), (arr_5 [i_14 - 1] [i_14] [i_0])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_14] [i_14]))))), (((((/* implicit */_Bool) arr_44 [i_0] [i_14])) ? (8ULL) : (((/* implicit */unsigned long long int) arr_10 [i_14] [(short)3] [13] [i_14])))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                for (unsigned char i_16 = 2; i_16 < 14; i_16 += 1) 
                {
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) min(((+(((/* implicit */int) arr_9 [i_16] [i_16 - 1] [i_16] [i_14 + 3])))), ((-(((/* implicit */int) (unsigned short)38861)))))))));
                        arr_58 [i_16] [i_14] [i_14] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(4294967292U)))), (max((var_9), (((/* implicit */long long int) arr_52 [i_15] [i_14] [i_15] [i_16 + 4]))))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((_Bool) var_6)))));
                    }
                } 
            } 
        }
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_17] [i_17])) : (899511439U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [12ULL] [i_17])) ? (13626490392836109442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [(unsigned short)16] [i_17]))) | (2047U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_41 [10LL] [14LL] [i_17] [i_17] [i_17]) < (((/* implicit */long long int) 14U))))))))) : ((((+(var_0))) >> (((arr_23 [i_0]) - (3428051467U)))))));
            var_35 = ((/* implicit */unsigned int) arr_38 [i_17] [13U] [i_0] [(unsigned short)0]);
            var_36 = ((/* implicit */signed char) var_4);
        }
        arr_61 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (signed char)-112)) ? (arr_59 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13))))));
        arr_62 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 1315368757878103281ULL))));
    }
    var_37 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_3)), (var_9)));
    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_11))));
}
