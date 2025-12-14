/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120068
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
    var_12 = ((/* implicit */_Bool) (~(max(((~(((/* implicit */int) var_1)))), ((~(var_6)))))));
    var_13 = ((/* implicit */unsigned int) ((int) min(((+(7286380113308675932LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)226)) <= (((/* implicit */int) (unsigned char)255))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_0 [i_0])))), (var_5)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_8 [i_0] = 1541072146;
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) min(((-(max((var_11), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)255)))));
                        var_14 = (-(((/* implicit */int) min((max(((unsigned short)1996), (var_0))), (((/* implicit */unsigned short) var_10))))));
                        arr_14 [i_3] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1])) + (var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_1])), ((short)-688))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)15))) : ((~(((/* implicit */int) (signed char)127)))))))));
                        var_15 = ((/* implicit */long long int) 422892134);
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [i_0] &= max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))))), (((signed char) arr_9 [i_0] [i_0] [i_0] [i_1])));
        }
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_22 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) (-(2147483647))))), (max(((-(var_5))), (min((((/* implicit */unsigned long long int) 7356543460181131043LL)), (arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0])), (var_11))))), ((-(min((((/* implicit */unsigned long long int) arr_2 [i_4])), (var_11)))))));
                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_4])))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? ((((~(var_11))) - (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4])))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_0 [i_4])) ^ (((/* implicit */int) (_Bool)0)))))))))));
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1996)))))) ? (var_3) : ((~((~(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */int) min((((/* implicit */long long int) ((int) max((((/* implicit */unsigned short) (unsigned char)226)), (var_0))))), (((((/* implicit */_Bool) arr_21 [i_4])) ? (((long long int) var_0)) : (((((/* implicit */_Bool) (signed char)98)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (((~(((/* implicit */int) var_9)))) / (arr_7 [i_0] [i_0])))), (max(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) max((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)29)))))))));
                    var_20 *= ((/* implicit */unsigned long long int) (-(((min((((/* implicit */long long int) 1652471449)), (arr_18 [i_4]))) - (((/* implicit */long long int) ((-123100308) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                    arr_32 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (var_4))))))));
                }
            }
            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 2) 
            {
                var_21 = (unsigned char)28;
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    arr_38 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0])) || (((/* implicit */_Bool) min(((unsigned short)64794), (((/* implicit */unsigned short) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_0] [i_0]), ((unsigned char)8))))) <= (-1726230150835412290LL))))));
                    arr_39 [i_4] [i_4] = ((/* implicit */unsigned int) (~(min((((unsigned long long int) arr_10 [i_0] [i_0] [i_0])), (max((var_5), (((/* implicit */unsigned long long int) var_1))))))));
                    var_22 = ((/* implicit */unsigned long long int) 1541072147);
                }
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    arr_43 [i_4] [i_4] = ((/* implicit */signed char) ((int) (unsigned char)234));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1726230150835412290LL)))), (5404134345673021694ULL)))) ? (min((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) max((arr_17 [i_4 - 1]), (arr_17 [i_4 - 1]))))))));
                    arr_44 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) * (max((arr_23 [i_8] [i_8]), (((/* implicit */unsigned long long int) var_6)))))));
                }
            }
            for (short i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                arr_47 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) 10190160009867411736ULL);
                arr_48 [i_0] [i_0] [i_4] = ((/* implicit */int) var_9);
                var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)28)))) ? (((int) arr_25 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) min((arr_21 [i_4]), (((/* implicit */short) arr_6 [i_4 + 1])))))));
                arr_49 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) (-(((((long long int) 613636508)) << (((((/* implicit */int) var_0)) - (21605)))))));
            }
            arr_50 [i_4] [i_4] = min((((/* implicit */int) (((+(613636481))) == (((/* implicit */int) ((unsigned short) arr_34 [i_0] [i_4])))))), (((((int) arr_21 [i_4])) * (((/* implicit */int) var_0)))));
        }
        var_25 = arr_45 [i_0] [i_0] [i_0] [i_0];
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_53 [i_0] [i_0])), ((unsigned short)1996))))))), ((~(0ULL)))))));
            arr_55 [i_12] [i_12] = ((/* implicit */unsigned short) arr_42 [i_12]);
            arr_56 [i_0] [i_12] [i_0] = ((/* implicit */unsigned int) min((min((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_4))), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))), (((long long int) ((long long int) arr_45 [i_0] [i_0] [i_0] [i_0])))));
            arr_57 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) 2147483647);
        }
        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 2; i_14 < 17; i_14 += 2) 
            {
                arr_63 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_13 + 1] [i_14 - 2] [i_14 - 1])) ? (((/* implicit */int) arr_60 [i_13 - 1] [i_14 - 2] [i_14 - 2])) : (((/* implicit */int) arr_19 [i_13 - 1] [i_14 - 1]))));
                var_27 = ((/* implicit */unsigned char) min((var_27), ((unsigned char)43)));
            }
            arr_64 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned int) (unsigned char)13)), (((arr_1 [i_13 + 1] [i_13 + 1]) ^ (arr_1 [i_13 + 1] [i_13 - 1]))));
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_4) >> (((-613636509) + (613636532)))))) ? (((/* implicit */int) (unsigned short)65533)) : ((~(arr_52 [i_0] [i_0]))))) * (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_13 + 1])) > (((/* implicit */int) arr_5 [i_13 - 1] [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_29 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_65 [i_15] [i_15]) <= (-9223372036854775799LL))))) ^ (((8256584063842139882ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 23; i_17 += 2) 
            {
                for (unsigned int i_18 = 1; i_18 < 24; i_18 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) var_7);
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_15] [i_15] [i_15] [i_18 - 1])) ? (((long long int) (unsigned char)119)) : (((/* implicit */long long int) ((3245317187U) << (((((/* implicit */int) arr_74 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) - (41740)))))))))));
                        arr_77 [i_15] [i_16] [i_15] [i_16] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) arr_76 [i_16] [i_16] [i_16] [i_16])) + (((/* implicit */int) arr_73 [i_17 + 2] [i_17 + 1] [i_17 + 1]))));
                        arr_78 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */int) var_11);
                        var_32 += ((/* implicit */long long int) ((unsigned long long int) arr_75 [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_18 - 1]));
                    }
                } 
            } 
            arr_79 [i_16] [i_16] = ((/* implicit */signed char) arr_66 [i_15]);
            arr_80 [i_16] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_10)) == (arr_72 [i_16] [i_16] [i_16]))));
            var_33 = ((/* implicit */unsigned char) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_15])) && (((/* implicit */_Bool) var_6))))))));
        }
        arr_81 [i_15] [i_15] = ((/* implicit */_Bool) arr_72 [i_15] [i_15] [i_15]);
    }
    for (int i_19 = 0; i_19 < 18; i_19 += 1) 
    {
        arr_84 [i_19] = (((~(((/* implicit */int) arr_16 [i_19] [i_19])))) % (((/* implicit */int) max((arr_16 [i_19] [i_19]), (arr_16 [i_19] [i_19])))));
        arr_85 [i_19] = ((/* implicit */long long int) (unsigned char)248);
    }
    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        arr_90 [i_20] = ((/* implicit */_Bool) (((~(min((((/* implicit */unsigned long long int) arr_87 [i_20])), (var_11))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        arr_91 [i_20] = ((/* implicit */unsigned int) (-(max((var_2), (((/* implicit */unsigned long long int) var_8))))));
        var_34 -= ((/* implicit */unsigned short) var_11);
    }
}
