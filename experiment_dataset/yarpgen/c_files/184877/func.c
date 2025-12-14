/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184877
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [(signed char)4] [i_1] [i_1] [(signed char)4] &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [4LL] [(signed char)8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0] [6ULL]))))));
                    var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 2] [(_Bool)1]))) : (var_12)))) ? (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [(signed char)0])))) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 1] [(unsigned short)8]))))));
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-39)), (var_5))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4)))))))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_11))))) >= (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6))))) ? (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_8)) : (1151950744U))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3143016551U))))) : (((/* implicit */unsigned int) (-(((arr_5 [i_0] [i_2 - 1]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_13))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */_Bool) max(((~(arr_8 [i_2 + 1] [i_2] [i_0] [i_0]))), (((/* implicit */long long int) (((~(3760730307704608964LL))) != (((/* implicit */long long int) (~(var_0)))))))));
                }
            } 
        } 
        arr_12 [i_0 - 1] = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_0]))))) * (((/* implicit */int) arr_0 [i_0] [i_0])))) != ((((~(((/* implicit */int) var_11)))) * (((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1] [2ULL]))))));
        var_18 *= ((/* implicit */signed char) var_13);
        var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [(short)10]))))), (((unsigned long long int) max((var_4), (((/* implicit */long long int) 1151950744U)))))));
        arr_13 [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) var_9)), (((((/* implicit */int) arr_4 [i_0 + 2] [(unsigned short)2] [(_Bool)1])) % (((/* implicit */int) ((((/* implicit */_Bool) 1151950748U)) && (((/* implicit */_Bool) var_8)))))))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
    {
        var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)144))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_23 [9ULL] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4])) ? (arr_19 [i_3 - 1] [9] [3ULL] [i_3 - 1]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_0)) != (14824924550748414129ULL)))), (1151950744U))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        var_21 += ((short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33361))) : (var_6)))));
                        var_22 &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_16 [i_3] [i_4])))) ? (((((/* implicit */unsigned long long int) (~(3143016554U)))) % (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_5] [i_4] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33361)))));
                        arr_26 [5] [i_5] [i_4] [i_3 - 2] [i_3] = ((/* implicit */short) 71006200);
                        var_23 = max(((~(arr_24 [1ULL] [1ULL] [9LL] [i_6] [i_6] [i_6]))), (((/* implicit */long long int) (+(((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_14))));
                    }
                    var_25 ^= ((/* implicit */_Bool) var_15);
                    arr_27 [10ULL] [10ULL] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (unsigned short)51935)))))) && (((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_4] [i_5] [(signed char)6]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_29 [i_3] [i_3] [0] [0] [i_5] [i_7]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_33 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (var_8) : ((~(var_14)))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_30 [i_3] [i_4] [i_3] [i_7])))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_30 [i_8] [i_7] [i_4] [i_3]))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) ((signed char) arr_16 [i_4] [i_9]));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10832755072220698632ULL))))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) -71006201))));
                            arr_40 [i_4] [i_5] [i_7] [i_7 - 1] [i_10] [2LL] = ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_7 - 1] [i_4]))));
                        }
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_32 = ((/* implicit */short) 615421157957000488ULL);
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_0)) * (arr_14 [i_3])));
                            arr_43 [i_5] [i_4] [2ULL] [i_7] [i_7] [i_11] &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_11]))) != (arr_21 [i_3] [i_3]))) ? (((((/* implicit */_Bool) var_9)) ? (arr_31 [i_5] [i_4] [i_11] [i_7 - 1] [i_5]) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_7 + 1] [i_11]))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_7] [i_7 + 1] [i_5] [i_7 + 1] [8ULL] [i_7] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_7] [i_7 + 2] [i_5] [i_7 - 1]))) : (arr_24 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 2]))))));
                        }
                    }
                }
            } 
        } 
        var_35 -= ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_11)) ? (arr_22 [i_3] [2ULL] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    }
    for (signed char i_12 = 1; i_12 < 14; i_12 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -71006201)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_45 [i_12] [i_12]))))) : (((((/* implicit */_Bool) arr_45 [i_12] [i_12 - 1])) ? (var_10) : (((/* implicit */long long int) arr_44 [i_12]))))))) ? ((~(max((var_15), (((/* implicit */unsigned long long int) 1777252325U)))))) : (min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6)))))))));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (+(690272181U)))) ? (((((/* implicit */_Bool) arr_45 [i_12 + 2] [i_12 + 1])) ? (((/* implicit */unsigned int) var_14)) : (var_1))) : (var_0)));
                    arr_51 [i_12 + 2] [i_14] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((~(var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_12] [i_14])) && (((/* implicit */_Bool) (unsigned short)28997))))) : (((/* implicit */int) max((min((arr_47 [i_12] [i_14]), (((/* implicit */short) var_2)))), (((/* implicit */short) (_Bool)1)))))));
                }
            } 
        } 
        arr_52 [i_12] = ((/* implicit */unsigned short) (((-(arr_50 [i_12] [i_12] [i_12]))) ^ (((/* implicit */unsigned long long int) (~(arr_46 [i_12]))))));
    }
    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) 17060459417494062868ULL))));
    /* LoopSeq 1 */
    for (signed char i_15 = 4; i_15 < 12; i_15 += 1) 
    {
        arr_56 [(unsigned short)2] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_50 [(short)1] [(short)1] [i_15]))));
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_12))));
        var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [(short)4] [(short)4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (((((/* implicit */_Bool) arr_45 [i_15 - 4] [i_15])) ? (arr_54 [i_15]) : (arr_54 [i_15]))))))) : (-9018681334225493872LL)));
    }
}
