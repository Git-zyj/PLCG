/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107864
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
    var_16 = ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((var_5) * (((/* implicit */unsigned long long int) -1179092150)));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (0LL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 7; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_19 = ((((/* implicit */_Bool) 4992840268483414423LL)) || (((/* implicit */_Bool) (short)(-32767 - 1))));
                arr_9 [i_3] = ((/* implicit */unsigned short) ((arr_3 [i_1 - 2] [i_1 + 2]) || (((((/* implicit */int) var_11)) != (((/* implicit */int) var_13))))));
                arr_10 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (_Bool)0);
            }
            arr_11 [i_2] [(_Bool)1] = ((/* implicit */long long int) ((arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 2]) % (arr_4 [i_1 + 1] [i_1 + 3] [i_1 - 2])));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 4992840268483414407LL)) ? (((/* implicit */int) (unsigned short)19898)) : (((/* implicit */int) (unsigned short)45638))));
            var_21 -= ((/* implicit */short) (_Bool)1);
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1 + 3] [i_4])) - (((/* implicit */int) arr_3 [i_1] [i_1 + 3]))));
            arr_14 [i_4] [(unsigned char)4] = ((((/* implicit */int) arr_6 [(signed char)3] [(signed char)3] [i_4] [i_4])) << (((((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1])) - (101))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 7; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        {
                            arr_22 [i_1] [3ULL] [i_5] [5U] [i_4] = ((/* implicit */unsigned int) (-(19)));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4])) ? (arr_7 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            arr_23 [i_1 - 2] [i_1 - 2] [i_6] [0LL] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((/* implicit */int) ((_Bool) arr_4 [i_1] [i_1] [i_6]))) : (((/* implicit */int) arr_18 [i_7 + 2] [i_7] [1] [i_4] [(_Bool)1]))));
                        }
                    } 
                } 
                var_24 += ((/* implicit */_Bool) ((arr_3 [i_1] [i_1 + 1]) ? (arr_4 [(_Bool)1] [i_4] [i_1 + 2]) : (((/* implicit */int) arr_21 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1]))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_26 [i_1] = (~((~(((/* implicit */int) arr_3 [i_1] [i_1])))));
            var_25 &= ((/* implicit */short) (+(-120544953)));
            arr_27 [i_1] [i_1 + 1] [0] = arr_6 [i_1 + 2] [i_1] [i_8] [0];
            var_26 = (!(((/* implicit */_Bool) arr_13 [(unsigned short)4] [i_8] [i_1])));
        }
        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */_Bool) (~(arr_5 [i_1 + 1])));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */short) (~(arr_8 [i_9] [i_9])));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 3] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_13)) ? (14842902267464907730ULL) : (var_0)))));
                        /* LoopSeq 4 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_30 [(_Bool)0] [i_9]);
                            var_32 = ((/* implicit */long long int) -4);
                            var_33 = ((/* implicit */short) ((arr_3 [i_1 + 3] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19913))) : (arr_29 [i_1 + 1] [i_1 + 1])));
                            arr_40 [i_11] [i_1] [i_9] [i_11] [i_10] = ((/* implicit */short) 1849741331);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_34 -= ((/* implicit */unsigned short) ((-4992840268483414423LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19895)))));
                            var_35 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19898)) ^ (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2] [i_10] [7U]))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */signed char) ((arr_17 [i_1 + 2] [i_1 - 2] [i_9]) ? (((((/* implicit */_Bool) 17937898176865411491ULL)) ? (arr_8 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9] [i_1 + 2])) ? (arr_29 [i_9] [i_1 + 1]) : (arr_29 [i_11] [i_1 - 2])));
                            arr_45 [i_1] [i_9] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */short) var_15);
                        }
                        for (short i_15 = 3; i_15 < 7; i_15 += 2) 
                        {
                            arr_48 [i_9] = ((/* implicit */_Bool) (~(arr_47 [i_1 + 3] [i_9] [i_10] [7LL] [i_15 - 3])));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1 + 1] [i_10] [i_9])) % (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)63419)))) : (((/* implicit */int) var_4))));
                            arr_49 [i_11] [i_11] [i_9] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) -20)))));
                            var_39 = ((/* implicit */long long int) (+(((/* implicit */int) arr_42 [i_1 - 2]))));
                        }
                        var_40 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2]))));
                    }
                    arr_50 [i_1 - 2] [i_1] [i_9] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_31 [8U] [i_1 - 2] [i_1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            {
                                arr_57 [i_1] [i_1] [i_9] [i_10] [i_16] [i_9] = ((/* implicit */unsigned char) arr_2 [1]);
                                arr_58 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63412)) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7)))) : (arr_37 [7] [i_1 + 3] [i_1 - 2] [(unsigned char)1] [i_1 + 1] [i_1 + 3] [i_1 - 2])));
                                arr_59 [i_1] [i_1] [i_10] [(short)4] [i_9] = ((/* implicit */_Bool) var_4);
                                var_41 = (unsigned short)65532;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_18 = 2; i_18 < 7; i_18 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((((-2087497255) + (2147483647))) << (((((-7782211555595018373LL) + (7782211555595018393LL))) - (20LL)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (short)32767))) | (((/* implicit */int) arr_6 [i_18] [i_18] [i_18 + 3] [i_18]))))) : (((((/* implicit */_Bool) arr_56 [i_18 - 2] [i_18 + 3] [i_18] [i_18 - 1] [i_18])) ? (arr_56 [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 3] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_18 + 2] [i_18 + 2] [i_18])))))));
        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (40)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)124)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8013176490935607030LL)))));
    }
    /* LoopNest 2 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        for (short i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_21 = 1; i_21 < 18; i_21 += 4) 
                {
                    var_44 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_1 [i_21 + 1] [i_21 + 1])))));
                    var_45 = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_22 = 1; i_22 < 18; i_22 += 1) 
                    {
                        arr_74 [i_20] [i_21] [i_20] [i_20] = ((/* implicit */short) max((min((((unsigned long long int) arr_70 [i_22] [i_20] [i_20] [i_19])), (((/* implicit */unsigned long long int) arr_64 [i_19] [i_19])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)11))))) : ((-(var_5)))))));
                        arr_75 [i_19] [i_20] [i_20] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_19] [i_19])), (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3475496456254733871LL)) ? (((/* implicit */long long int) arr_69 [i_22] [i_22] [i_22])) : (-7782211555595018373LL)))) : (((var_5) / (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))) ? (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))))) : (((/* implicit */unsigned long long int) max((max((-7987330862339477775LL), (((/* implicit */long long int) (unsigned char)114)))), (((/* implicit */long long int) min((-763956301), (1369399201)))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 4) 
                        {
                            var_46 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2087497255)) ? (arr_76 [i_19] [i_20] [i_21 + 1] [i_22 - 1] [i_23] [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) (_Bool)1))))), ((-(var_1)))));
                            arr_79 [i_19] [i_19] [i_19] [10U] [i_20] [i_19] = ((/* implicit */signed char) (~(max((((/* implicit */int) (_Bool)1)), (arr_76 [i_20] [i_20] [i_22] [i_22] [i_22 - 1] [i_22 + 1] [(unsigned short)9])))));
                        }
                        for (signed char i_24 = 0; i_24 < 19; i_24 += 3) 
                        {
                            arr_83 [14] [i_22] [i_22] [i_21] [i_20] [i_20] [14] &= ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (min((max((-7813322689109231068LL), (((/* implicit */long long int) arr_1 [(_Bool)1] [(_Bool)1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_69 [i_20] [i_20] [i_20])))))))));
                            arr_84 [i_19] [i_20] [i_21] [i_21] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_67 [i_19] [i_20] [i_19] [i_24]) : (arr_67 [i_19] [i_20] [i_21] [i_22 + 1])))) ? ((~(((/* implicit */int) arr_72 [i_19])))) : (((var_7) ? (((/* implicit */int) arr_72 [i_24])) : (((/* implicit */int) arr_72 [i_22]))))));
                        }
                    }
                }
                arr_85 [i_20] [(short)3] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((short) arr_77 [i_20] [i_20] [(unsigned char)11] [i_19])))));
                var_48 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_82 [14ULL] [i_20] [(signed char)18])) ? (((/* implicit */int) arr_82 [18LL] [i_20] [i_20])) : (((/* implicit */int) arr_82 [12] [i_19] [i_20]))))) + (((((/* implicit */_Bool) 6638794133603056826LL)) ? (((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) 1209601975))))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_19] [(short)16] [(short)16]))) - (max((((/* implicit */unsigned int) max(((signed char)-12), (((/* implicit */signed char) (_Bool)1))))), (4294967295U)))));
            }
        } 
    } 
    var_50 -= ((/* implicit */signed char) var_11);
}
