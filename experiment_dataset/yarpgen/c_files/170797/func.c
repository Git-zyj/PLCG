/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170797
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2340))) : (var_11))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_9)))))) : (((/* implicit */long long int) var_0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (~(4290452630316926773ULL)));
        arr_2 [i_0] = ((/* implicit */short) ((((arr_1 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_1 [i_0 + 1])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-2363))))) ? ((-(var_6))) : (((/* implicit */int) min((var_10), (((/* implicit */short) arr_4 [i_1])))))))));
        arr_5 [i_1] = (((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2329))) : (min((var_2), (((/* implicit */unsigned long long int) arr_3 [i_1])))));
        arr_6 [(short)7] = ((/* implicit */_Bool) arr_1 [i_1]);
    }
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32205)) ? (min((arr_0 [(unsigned short)2]), (((/* implicit */int) (short)30738)))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_7 [i_2] [i_2]))))))) ? (min((max((((/* implicit */long long int) var_1)), (4718066314004034583LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (var_9) : (((/* implicit */unsigned int) arr_0 [0U]))))))) : (((/* implicit */long long int) var_0))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_6) / (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (arr_1 [i_2 - 1]) : (arr_8 [i_2 - 1])))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_16 &= ((/* implicit */short) arr_10 [i_2]);
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [4U])) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) var_7))))), (min((var_10), (var_7)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-12388)) || (((/* implicit */_Bool) (short)-1))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) arr_11 [i_2]))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                arr_15 [i_4 + 1] [i_3] [i_2] = ((/* implicit */unsigned int) (-((+(0ULL)))));
                var_18 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_11 [i_2]))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30629)) ? (var_0) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2]))) : (arr_1 [i_2 + 1])));
                /* LoopSeq 3 */
                for (short i_6 = 3; i_6 < 11; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (short)30644)) % (((/* implicit */int) (short)15772))));
                        var_21 = ((/* implicit */short) var_3);
                    }
                    arr_24 [i_2] [i_3] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) arr_12 [i_6] [i_5] [i_2] [i_2]);
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) arr_22 [4LL] [i_5] [i_5] [i_5] [(short)6])) : (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) arr_19 [i_6 - 3] [i_2 - 1] [i_2 - 1])))) : (((-193259125) / (((/* implicit */int) arr_14 [i_2])))))))));
                    var_23 = ((/* implicit */int) var_7);
                }
                for (short i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_5 - 2] [i_2 + 3]))));
                    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_2] [i_3] [i_5 - 1] [i_5]))));
                    arr_28 [i_8] [i_5] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5 + 1] [i_5 - 1])) && (var_3)));
                }
                for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    var_26 += ((/* implicit */_Bool) var_8);
                    var_27 ^= ((/* implicit */unsigned char) (-(arr_12 [i_2 + 3] [i_5 - 2] [i_5 - 2] [i_9 + 2])));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                    {
                        arr_34 [i_2] [i_2] [i_5 + 1] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2 + 3] [i_2] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_22 [i_2] [i_3] [i_5] [0] [i_5]))))) : (var_11)));
                        var_28 = ((/* implicit */unsigned char) 9443412211927152482ULL);
                    }
                    arr_35 [i_5] = (~(var_11));
                }
                var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5 + 1] [i_5]))) | (((((/* implicit */_Bool) arr_30 [i_2 + 2] [i_3] [i_5] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_8 [i_2])))));
                var_30 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)82))));
            }
            var_31 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_2] [i_2] [i_2 + 2] [i_2 + 1] [11LL] [i_2 + 3]))) * (arr_30 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((arr_26 [i_2] [6U] [i_2] [i_2 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2] [i_2 - 1] [i_2 + 4] [i_2 + 4] [i_2] [i_2 - 1]))))))));
            var_32 = ((/* implicit */short) (((((~(19U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3062474349U)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        }
    }
    /* vectorizable */
    for (long long int i_11 = 4; i_11 < 17; i_11 += 4) 
    {
        var_33 = ((/* implicit */long long int) arr_36 [i_11 - 3]);
        /* LoopSeq 3 */
        for (short i_12 = 1; i_12 < 17; i_12 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) arr_39 [i_11 - 2] [i_12 + 1]);
            var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_40 [i_11 - 2] [i_12 - 1]))));
        }
        for (short i_13 = 1; i_13 < 17; i_13 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32762)) != (((/* implicit */int) (unsigned short)511))));
            var_37 = ((/* implicit */unsigned short) ((14ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54)))));
        }
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            arr_46 [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (short)30626)) : (((/* implicit */int) (unsigned short)503))));
            /* LoopSeq 3 */
            for (short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) var_0);
                var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_11 - 2])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_48 [i_11])))) : ((~(((/* implicit */int) arr_41 [i_11] [i_11]))))));
            }
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_40 [i_11 + 1] [i_11 - 1]))));
                var_41 &= ((/* implicit */short) arr_42 [i_11]);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_42 = var_2;
                var_43 = ((/* implicit */short) ((((/* implicit */int) (short)11971)) * (((/* implicit */int) (unsigned char)230))));
                var_44 ^= ((/* implicit */unsigned char) ((arr_37 [i_11 - 1]) ^ (arr_37 [i_11 - 1])));
            }
            var_45 = (-(((/* implicit */int) arr_49 [i_11 + 1])));
        }
    }
}
