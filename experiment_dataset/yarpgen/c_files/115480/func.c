/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115480
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512))) <= (18ULL))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2093232712))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (short)7168);
                        var_22 -= max(((~(((/* implicit */int) (unsigned short)24576)))), (((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((max((((16777212) | (((/* implicit */int) var_11)))), (1591331161))) >> (((((((/* implicit */_Bool) min((((/* implicit */int) (short)-6391)), (arr_0 [i_1] [i_1])))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_1]))))) + (16))))))));
            var_24 = ((unsigned int) min(((_Bool)1), (((((/* implicit */int) var_8)) == (-16777213)))));
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_25 = -16777213;
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((short) arr_11 [i_6]));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) ^ (16777212)))) ? (((/* implicit */int) (unsigned short)1268)) : (((/* implicit */int) var_2)))))));
                            var_29 = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64268)))) > (((/* implicit */int) (unsigned short)64267)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)6144)) - (6135)))));
                var_31 -= arr_11 [i_5];
                var_32 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_4] [i_0] [i_4] [i_4] [i_5])) : (var_0))));
            }
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                var_33 -= ((/* implicit */short) ((_Bool) ((unsigned short) arr_14 [11LL] [11LL] [i_8])));
                var_34 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)20))));
                arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (short)-1)))), (((((((/* implicit */_Bool) 2013265920)) ? (2147483634) : (((/* implicit */int) var_4)))) % (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (_Bool)0))))))));
            }
        }
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            arr_28 [12] [i_0] = ((/* implicit */unsigned long long int) max((1712452612U), (((/* implicit */unsigned int) ((int) 626007618U)))));
            arr_29 [i_0] = var_16;
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_33 [i_0] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) (unsigned char)236)))))));
            arr_34 [i_0] [9LL] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (11621414368254300704ULL)))))));
            var_35 ^= ((/* implicit */signed char) ((arr_14 [i_0] [i_0] [13LL]) ? (((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (10586975278084881760ULL))) : (var_12)));
            var_36 += ((/* implicit */unsigned long long int) ((signed char) (unsigned char)202));
            var_37 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)44)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_3 [i_10])))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_12 = 4; i_12 < 14; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0])) - (arr_23 [(_Bool)1] [2ULL] [i_12 + 1]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)65))))))))));
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (unsigned char)203))));
                    var_40 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 2761598621U)) ? (arr_13 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                }
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) arr_23 [i_0] [(_Bool)1] [i_12 + 2])))) : (((unsigned long long int) var_5))));
                var_42 = ((((/* implicit */int) arr_10 [i_12 - 3] [i_11])) | (((/* implicit */int) (_Bool)1)));
            }
            var_43 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_0])) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190)))));
            /* LoopNest 3 */
            for (unsigned short i_14 = 3; i_14 < 15; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        {
                            var_44 |= ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-37))));
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) -1)) : (16999802715694885272ULL))))));
                        }
                    } 
                } 
            } 
            var_46 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) (unsigned short)15872)) : (((/* implicit */int) arr_17 [i_0]))));
        }
        /* vectorizable */
        for (short i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_17])) ? (((/* implicit */int) arr_17 [i_0])) : (arr_6 [i_17] [i_0] [i_0])));
            var_48 = ((/* implicit */unsigned short) arr_0 [i_17] [i_0]);
            var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1008)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        var_50 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(arr_31 [i_0] [(unsigned short)6] [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50081))) >= (17406913662056713970ULL)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65528)))))) & (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65519)))))));
    }
    var_51 = ((/* implicit */unsigned long long int) (unsigned char)209);
    var_52 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)50081))))));
    var_53 = ((/* implicit */int) (unsigned char)208);
}
