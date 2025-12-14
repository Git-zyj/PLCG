/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13690
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
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_2)), (min((9594259688274540302ULL), (9594259688274540297ULL)))));
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max(((unsigned char)194), (var_3)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_15)) : (3471330894686722527ULL))) : (min((8852484385435011306ULL), (var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (1848730542)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)194)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [(short)10] &= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (((var_18) / (((/* implicit */unsigned long long int) 2171451360U)))))), ((!(((((/* implicit */_Bool) arr_0 [i_0])) || ((_Bool)0)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((130944) ^ (((/* implicit */int) var_8))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(max((1506795972U), (4294967295U)))))))))));
        arr_6 [i_1] = ((/* implicit */long long int) max((((unsigned char) 1329981907U)), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_12))))) == (2036015431U))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                var_23 = ((/* implicit */signed char) (short)2581);
                arr_15 [i_3 - 1] [i_2] [i_2] [i_1] = (((~(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3]))) <= (4294967295U)))));
                arr_16 [i_1] = ((((unsigned long long int) (short)-29144)) + (((/* implicit */unsigned long long int) var_15)));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_4] [i_5 + 1])) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((arr_14 [(short)17] [i_2] [i_4] [i_5]) + (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            arr_23 [i_1] [i_2] [i_6] [(signed char)12] [7U] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_22 [i_1] [i_2] [i_4] [i_4] [i_5 - 2] [i_4] [i_6])))) <= ((~(arr_18 [i_4] [11U] [i_6])))));
                            arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_6 + 2])));
                            arr_25 [i_1] [3U] [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            var_25 = ((((((/* implicit */int) var_16)) & (((/* implicit */int) arr_7 [i_2])))) > ((-(((/* implicit */int) (unsigned char)244)))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_19 [(short)17] [(short)0] [(short)0] [i_5]))));
                            arr_29 [i_1] [i_2 + 3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_18 [i_1] [i_2] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_2])) : (((/* implicit */int) ((signed char) var_9)))));
                            arr_30 [i_2] [(short)9] [i_5 - 1] [i_7] = ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) arr_27 [i_7 + 1] [i_1])) : (((/* implicit */int) ((unsigned char) (short)24826)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_35 [i_1] [13U] [i_4] [(_Bool)1] [i_8 + 1] &= arr_28 [i_1] [i_2] [i_4] [i_5];
                            var_27 -= ((/* implicit */short) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_20 [(unsigned char)2] [i_2 - 1] [i_4] [i_5 - 1]))));
                            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-924))) : (1871621952U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : ((-(var_15)))));
                        }
                        var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_4] [i_4])) ? (((/* implicit */int) (short)-924)) : (((/* implicit */int) arr_32 [(signed char)20]))))) ? (((((/* implicit */_Bool) 130966)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (10372028989311368617ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_1]))) * (arr_18 [i_2] [i_2] [i_1])))));
                        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_26 [21ULL] [i_4] [(short)21])) ? (((/* implicit */unsigned long long int) var_15)) : (var_18))) >> (((((((/* implicit */int) (signed char)12)) * (-130944))) + (1571378)))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                } 
            } 
        }
        var_32 = min((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1])) : (var_10))), (((/* implicit */unsigned long long int) ((arr_14 [i_1] [i_1] [i_1] [i_1]) | (arr_14 [i_1] [i_1] [i_1] [i_1])))));
    }
    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_9] [i_9]))) ? (((/* implicit */int) (short)1920)) : (((/* implicit */int) var_6))));
        /* LoopSeq 2 */
        for (signed char i_10 = 1; i_10 < 18; i_10 += 2) /* same iter space */
        {
            arr_43 [i_10] [i_9] [i_9] = ((/* implicit */short) ((1058880902U) | (((/* implicit */unsigned int) ((/* implicit */int) (!(var_16)))))));
            arr_44 [i_9] [i_10] [i_9] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26734)) ? ((~(((/* implicit */int) arr_21 [i_10] [i_10 - 1] [i_9] [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) min((arr_34 [i_10 + 1] [i_10] [i_10 - 1] [i_9]), (((/* implicit */short) arr_10 [i_9] [17LL])))))))), (((var_10) | (((/* implicit */unsigned long long int) arr_14 [i_10] [i_10 + 3] [i_10] [i_10 + 2])))));
        }
        for (signed char i_11 = 1; i_11 < 18; i_11 += 2) /* same iter space */
        {
            arr_47 [i_11] [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_16)))) & (((((526979007U) << (((((/* implicit */int) (unsigned short)53699)) - (53684))))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (0U)))))));
            var_34 = ((short) 8074715084398182999ULL);
        }
    }
    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((((unsigned long long int) (-(((/* implicit */int) var_12))))), (min((((/* implicit */unsigned long long int) arr_48 [i_12] [i_12])), (arr_19 [0U] [i_12] [i_12] [i_12]))))))));
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            for (int i_14 = 3; i_14 < 8; i_14 += 3) 
            {
                for (signed char i_15 = 2; i_15 < 9; i_15 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 3; i_16 < 9; i_16 += 3) 
                        {
                            var_36 *= ((/* implicit */unsigned int) (short)-9080);
                            var_37 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                            arr_61 [i_14] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (11827681319680088724ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) var_7)))))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            arr_64 [i_12] [i_14] [i_14 - 2] [(short)2] [i_17] [i_14] [4ULL] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-32))))) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)11517)))))))));
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((short) min((arr_27 [i_14 - 3] [i_14 - 1]), (var_9)))))));
                            var_39 += ((/* implicit */short) ((_Bool) (-(((unsigned long long int) arr_13 [i_17] [(signed char)13] [i_14] [i_12])))));
                        }
                        arr_65 [i_12] [i_13] [i_14] [9LL] = ((/* implicit */unsigned int) (~(((long long int) ((((/* implicit */_Bool) 3767988288U)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))))));
                    }
                } 
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned int) var_6);
}
