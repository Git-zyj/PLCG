/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12425
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (max((arr_1 [i_0]), (arr_1 [i_0])))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) var_6))))))) : (17944029765304320LL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = arr_4 [i_0] [i_0] [i_0];
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_13 += ((/* implicit */_Bool) (unsigned short)9013);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max((min((((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2])) & (-17944029765304312LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_3] [i_1]))))))), (((long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((((/* implicit */_Bool) (unsigned short)9013)) || (((/* implicit */_Bool) (unsigned short)56522))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8131009044855428719LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (49002132U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (max((arr_7 [i_4] [i_3] [i_0]), (((/* implicit */unsigned int) (unsigned short)9013))))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2]);
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -24))))))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_0] [i_2] [i_0] = arr_6 [i_0] [i_1];
                arr_16 [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned int) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (-8131009044855428720LL))));
                arr_17 [i_0] [i_0] |= ((/* implicit */short) arr_0 [i_0] [i_2]);
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_16 |= ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
                var_17 = ((/* implicit */short) arr_19 [i_0] [i_1] [i_5]);
            }
            var_18 -= ((/* implicit */short) min((((/* implicit */int) (unsigned short)9013)), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483647)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8128))))), (((/* implicit */long long int) max((((/* implicit */short) var_11)), (var_3))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_6])))));
                /* LoopSeq 2 */
                for (short i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    arr_26 [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_8 [i_7] [i_1] [i_1] [i_0]), (((/* implicit */int) var_6)))), (((/* implicit */int) min(((unsigned short)1173), (((/* implicit */unsigned short) arr_6 [i_6] [i_0])))))))) || (((((/* implicit */_Bool) arr_0 [i_7 + 2] [i_7 + 1])) && (((/* implicit */_Bool) min(((short)-512), (var_0))))))));
                    var_20 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) -1102235443)) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_6] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_6)))) * (((((/* implicit */_Bool) 17944029765304323LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_6])))))), (((/* implicit */int) max((max((((/* implicit */unsigned short) var_0)), (arr_0 [i_7] [i_6]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) var_1))))))))));
                    arr_27 [i_7] = min((1905129462U), (((/* implicit */unsigned int) (unsigned short)56539)));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max(((+((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_1)))))));
                }
                for (int i_8 = 2; i_8 < 19; i_8 += 2) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_11))));
                    arr_32 [i_0] [i_1] [i_6] [i_8] = ((/* implicit */unsigned int) var_4);
                    var_23 = ((/* implicit */unsigned char) min((arr_25 [i_0] [i_0] [i_0] [i_1] [i_6] [i_8]), (((/* implicit */unsigned int) min((((((/* implicit */int) (short)-15316)) - (((/* implicit */int) (unsigned short)9013)))), (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_18 [i_0] [i_6])))))))));
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                arr_36 [i_0] [i_1] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_1] [i_1]))));
                arr_37 [i_1] [i_9] = ((/* implicit */long long int) (unsigned short)31847);
                arr_38 [i_0] [i_0] [i_9] = ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_1] [i_9]);
                var_24 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (17944029765304335LL)));
            }
            for (unsigned short i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_10 - 1] [i_10 - 1]))))) ? (((/* implicit */int) min((arr_0 [i_10 + 1] [i_10 - 1]), (arr_0 [i_10 - 1] [i_10 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_10 + 1] [i_10 - 1])))))));
                arr_42 [i_10] = ((/* implicit */short) var_6);
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max((max((var_0), (((/* implicit */short) arr_21 [i_10 + 1] [i_10 + 1] [i_10 + 1])))), (((/* implicit */short) arr_21 [i_10 + 1] [i_10 + 1] [i_10 + 1])))))));
                var_27 |= ((/* implicit */long long int) min((((((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)54660)), (arr_1 [i_0])))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_10])) : (((/* implicit */int) var_4))))));
                arr_43 [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (-1261863318)))) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)63122)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_10] [i_1])))))))) <= (arr_30 [i_0] [i_0] [i_0])));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_11]))));
                arr_46 [i_0] [i_0] [i_0] [i_0] = arr_41 [i_0] [i_1] [i_11] [i_1];
            }
        }
    }
    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        arr_49 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8128))) + (4294967295U)));
        arr_50 [i_12] [i_12] = min((((/* implicit */unsigned int) arr_29 [i_12] [i_12] [i_12])), (var_9));
    }
    var_29 = min((var_9), (((/* implicit */unsigned int) var_6)));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_11))));
}
