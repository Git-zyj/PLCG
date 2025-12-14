/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160074
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
    var_10 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_6)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3738785569U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 3] [i_4] [i_4 - 2]))))) - ((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_11 [(unsigned char)10] [i_3] [i_2] [(_Bool)1]))))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((13150594178130893058ULL), (((/* implicit */unsigned long long int) ((-1960968581) | (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) 341177740)) : (max((arr_9 [i_4 - 1] [i_4] [(short)1] [i_4 - 4] [2] [0]), (((/* implicit */unsigned long long int) var_0))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)3])) << (((((/* implicit */int) ((unsigned short) arr_9 [i_2] [i_1 + 1] [(short)6] [i_1 + 2] [i_1 + 2] [i_1]))) - (56005)))));
                    var_14 = ((/* implicit */long long int) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) arr_12 [7ULL] [i_1 - 1]))))));
                }
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    arr_18 [1ULL] [i_1] [(signed char)6] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)231)) <= (((/* implicit */int) (short)22847))));
                    arr_19 [i_1] [0] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_20 [i_0] [i_1] = ((/* implicit */short) ((signed char) ((((((/* implicit */unsigned int) 191081106)) | (var_9))) >> (((4294967282U) - (4294967267U))))));
                    arr_21 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1539464050329618281LL)) ? (((/* implicit */int) (signed char)1)) : (var_2)))) ? (((/* implicit */unsigned long long int) 556181726U)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18428))) : (arr_9 [(short)8] [i_1 + 3] [i_5] [5] [i_1] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)184)) << (((6565578622075809364LL) - (6565578622075809364LL)))))) ? (((((((/* implicit */int) arr_12 [(signed char)1] [(unsigned char)9])) + (2147483647))) >> (((arr_17 [i_1] [(signed char)10] [i_1] [i_1]) - (4294536732970330928LL))))) : (((/* implicit */int) (signed char)121)))))))) : (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1539464050329618281LL)) ? (((/* implicit */int) (signed char)1)) : (var_2)))) ? (((/* implicit */unsigned long long int) 556181726U)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18428))) : (arr_9 [(short)8] [i_1 + 3] [i_5] [5] [i_1] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)184)) << (((6565578622075809364LL) - (6565578622075809364LL)))))) ? (((((((/* implicit */int) arr_12 [(signed char)1] [(unsigned char)9])) + (2147483647))) >> (((((arr_17 [i_1] [(signed char)10] [i_1] [i_1]) - (4294536732970330928LL))) - (262611487085492836LL))))) : (((/* implicit */int) (signed char)121))))))));
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */int) arr_16 [4ULL] [8] [8])), (var_8)))))) ? (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [i_1])) : (min((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_23 [(unsigned char)8] [i_1 + 3] [6ULL]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        arr_26 [10LL] [i_1 + 1] [3LL] [0U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32699)) ? (3738785569U) : (((/* implicit */unsigned int) -341177767))))) ? ((~(-353196457882869939LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [(signed char)4] [(signed char)7] [i_6])) + (var_2)))) > (arr_9 [i_0] [i_1] [i_6] [i_1 - 1] [i_6] [(_Bool)1])))))));
                        arr_27 [i_6] [i_0] [i_0] &= ((/* implicit */unsigned char) max((arr_13 [i_7 - 1] [10ULL] [i_6] [i_6] [i_0] [i_0]), ((short)1)));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_6] [i_7])) ? (((/* implicit */long long int) (-(var_2)))) : (arr_4 [i_0] [i_1 + 2] [(unsigned char)4]))))));
                        arr_28 [i_0] [4] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_7 + 1] [i_6] [i_7 - 1]) : (arr_7 [(unsigned char)1] [i_7 + 1] [9LL] [(unsigned char)1])))) ? (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65487), (((/* implicit */unsigned short) (signed char)-112)))))) / (6565578622075809351LL))) : (((/* implicit */long long int) var_9))));
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_17 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [(signed char)6] [i_1 + 3] [i_1 + 1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 2]))) : (arr_9 [i_0] [i_8] [i_8] [i_1 + 3] [i_8] [(unsigned char)9])))));
                        arr_31 [i_0] [i_1 + 1] [i_6] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_25 [i_1 + 3] [i_1 + 1] [2ULL] [i_1 + 2] [i_1 - 1])))) % ((~(((/* implicit */int) (unsigned char)228))))));
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [2ULL] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [(signed char)4] [i_6] [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1030923735)) || (((/* implicit */_Bool) 2871391335171355223ULL))))))))));
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) (unsigned short)18426))));
                        arr_34 [i_1] [i_6] [5LL] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((((_Bool) arr_16 [i_9] [6] [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-2709)))) : (min((arr_1 [(signed char)2] [9LL]), (((/* implicit */unsigned int) var_8)))))) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)141)))))) : (arr_17 [i_1] [(_Bool)1] [i_6] [i_1 - 1]))) - (4294536732970330924LL)))))) : (((/* implicit */unsigned char) ((((((_Bool) arr_16 [i_9] [6] [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-2709)))) : (min((arr_1 [(signed char)2] [9LL]), (((/* implicit */unsigned int) var_8)))))) >> (((((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)141)))))) : (arr_17 [i_1] [(_Bool)1] [i_6] [i_1 - 1]))) - (4294536732970330924LL))) - (262611487085492857LL))))));
                        var_20 = ((unsigned char) (~(((/* implicit */int) arr_13 [(unsigned short)10] [i_0] [(unsigned short)10] [i_1] [(short)8] [i_9]))));
                    }
                    arr_35 [i_1] [i_1 - 1] [i_1 - 1] [(short)0] = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) arr_9 [(signed char)8] [(signed char)8] [(unsigned short)9] [4] [i_6] [0ULL])) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-46)))) : ((~(((/* implicit */int) (unsigned char)47))))))));
                }
                for (short i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))) : (arr_15 [i_1 + 3] [8LL] [i_0]))))))));
                    var_22 -= (~(((2577608190U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10 - 3] [i_10 - 1]))))));
                    arr_39 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (var_2)))), ((~(arr_8 [i_1 + 2] [i_1])))));
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            arr_44 [4U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122))))) ? (((arr_37 [i_1 + 1]) ? (((/* implicit */int) arr_37 [i_1 - 1])) : (1018711614))) : (((/* implicit */int) min((arr_37 [i_1 - 1]), (arr_37 [i_1 + 2]))))));
                            /* LoopSeq 4 */
                            for (int i_13 = 0; i_13 < 11; i_13 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_0] [(short)8] [i_12] [5] [(short)2]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)18426)) == (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)-120)))))))))));
                                arr_47 [i_0] [3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-16)) && (((/* implicit */_Bool) (unsigned char)44))));
                                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_33 [i_12] [i_12]))) ? (((/* implicit */int) max((arr_33 [i_12] [(signed char)3]), (arr_33 [i_11 + 2] [i_13])))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-12)), (arr_33 [8ULL] [i_11 + 2]))))));
                            }
                            for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                            {
                                arr_51 [(unsigned char)2] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_11 [i_0] [i_0] [10] [i_0]));
                                var_25 = ((/* implicit */unsigned int) ((((2902051741509623388ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned char)0] [i_1])) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)0] [i_11] [5] [(signed char)10])) << (((arr_36 [(short)6] [(short)6] [(signed char)5]) - (822111528793375213ULL))))))) : (((/* implicit */int) (_Bool)1))));
                                arr_52 [i_14] [i_1] [(_Bool)1] [i_1] [(signed char)9] = ((/* implicit */short) (~(arr_7 [(unsigned char)5] [(short)6] [(_Bool)1] [(unsigned char)5])));
                            }
                            for (unsigned char i_15 = 3; i_15 < 10; i_15 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned int) var_7);
                                arr_55 [i_0] [i_1] [i_1 + 3] [i_1] [i_12] [3LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [(short)1] [(short)1] [i_1 + 1] [2LL] [i_12] [i_15 + 1])) ? (arr_32 [i_0] [1ULL] [i_1 + 1] [i_1 + 1] [i_1 + 1] [1]) : (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [0U] [(_Bool)1] [i_11 - 1] [i_0] [i_11 - 1] [0U])) ? (arr_48 [i_11]) : (((/* implicit */int) (unsigned char)91))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) - (arr_7 [i_0] [i_1] [i_11] [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            }
                            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                            {
                                var_27 += max((min((arr_1 [i_1 + 1] [i_1]), (((/* implicit */unsigned int) (short)17248)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8819846870903774233ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [(signed char)1])))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_56 [4LL] [i_12] [(unsigned short)9])) | (((/* implicit */int) (short)-2712))))))));
                                var_28 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_3 [i_0] [i_0])))) ? (arr_23 [i_11] [5U] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_6))));
                                var_29 ^= ((/* implicit */short) var_0);
                            }
                            arr_58 [(signed char)10] [i_1] [i_1] [i_1] [(short)6] [i_12] = ((/* implicit */int) (signed char)95);
                        }
                    } 
                } 
            }
        } 
    } 
}
