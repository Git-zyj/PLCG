/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157097
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)83)) ? (((arr_3 [i_1] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1] [(_Bool)1]))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) >= (max((((/* implicit */unsigned long long int) var_11)), (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */signed char) (!((_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(unsigned char)18] [(unsigned char)18] [i_2])) + (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [2ULL] [(short)14]))))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((unsigned char) -2040094375)))))), ((short)28814)));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) ((((((var_10) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_7)))))) >> ((((~(((/* implicit */int) var_1)))) + (24)))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */long long int) (~(4194048U)))) > (((long long int) arr_3 [i_4] [i_4 - 2] [(unsigned char)10]))))));
                        }
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1] [i_1] [i_1]))) ? (((/* implicit */int) arr_3 [i_1] [4ULL] [i_1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 4; i_6 < 18; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4290773249U)) ? (4290773251U) : (4194029U)))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_7] [i_0])) ? (((/* implicit */int) arr_17 [(signed char)0])) : (((/* implicit */int) var_1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (4290773247U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 511LL))))))));
                        var_16 = ((/* implicit */int) ((min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) ((int) ((short) var_7)));
                        arr_31 [i_0] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [11LL] [11LL] [(unsigned short)17] [i_5] [(unsigned short)17] [(unsigned short)17]))) : (var_7))) : (((arr_20 [i_0] [i_0]) << (((((/* implicit */int) var_11)) + (25459))))))));
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            arr_35 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */short) var_10);
                            arr_36 [i_5] [i_6] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_18 [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) -5801570178764160506LL))))))) ? (((/* implicit */long long int) max((4194048U), (((/* implicit */unsigned int) (unsigned short)4707))))) : (((long long int) ((((/* implicit */int) arr_25 [i_9 + 1] [7ULL] [(short)17] [i_5])) > (((/* implicit */int) arr_5 [i_6])))))));
                            var_18 = ((/* implicit */signed char) var_9);
                        }
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_19 *= ((/* implicit */signed char) var_3);
                            arr_39 [i_0] [i_6] [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((479217761U), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_7)))))) ? (arr_33 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) arr_2 [i_0] [i_0] [i_0])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6])))))))));
                            var_20 = ((/* implicit */long long int) ((int) ((var_2) ? (((/* implicit */int) arr_28 [i_6 - 1] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_28 [i_6 - 1] [i_6 - 1] [i_6])))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)22)), (2843796354U)))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) 3U)) ? (11668531535535180323ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))))));
                    arr_40 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (((/* implicit */short) arr_19 [i_5] [i_6] [i_5]))))) - ((-(((/* implicit */int) arr_10 [i_6] [i_5]))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) - (min((((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_6 - 3] [i_6] [i_0] [i_0])), (var_3)))))));
                }
            } 
        } 
        arr_41 [i_0] = ((/* implicit */short) (_Bool)1);
    }
    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 2) 
    {
        arr_44 [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((var_3), (arr_12 [i_11 + 1] [i_11] [i_11] [i_11] [i_11])))))) && (((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60851)) ? (-3148006976679779631LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_11])))))) : (arr_12 [i_11] [i_11] [i_11 + 1] [i_11] [i_11]))))));
        arr_45 [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11] [(signed char)12]), (((/* implicit */unsigned long long int) 15U))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_11 + 1]))))) : (((var_2) ? (arr_18 [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (arr_12 [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) var_12)))), (arr_37 [i_11 + 2] [i_11 + 2] [i_11 + 2]))))));
        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(short)17] [(short)17] [i_11])) ? (((((/* implicit */_Bool) arr_5 [6])) ? (((/* implicit */unsigned long long int) ((int) 1331677837633690723LL))) : (min((arr_26 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (arr_22 [i_11] [i_11 - 1] [i_11 - 1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1] [i_11] [i_11])))))));
    }
    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
    {
        var_23 -= ((/* implicit */unsigned char) max((min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((long long int) var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12] [(signed char)4] [i_12])) ? ((-(((/* implicit */int) arr_37 [i_12] [i_12] [i_12])))) : (((/* implicit */int) ((unsigned short) (signed char)-59))))))));
        arr_48 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_12] [i_12] [i_12])), (((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_12] [i_12] [i_12]))))) : (699263400U)));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            {
                                arr_59 [i_12] [i_12] [i_14] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_12] [9ULL] [9ULL]) <= (((((/* implicit */_Bool) var_8)) ? (var_3) : (var_3))))))) >= (((((((/* implicit */_Bool) arr_29 [i_12] [i_12] [(unsigned char)7] [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (63451904U))) << (((max((((/* implicit */unsigned long long int) var_12)), (var_3))) - (18446744073709544901ULL)))))));
                                arr_60 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_10 [i_12] [i_12])) ? (((/* implicit */int) arr_10 [i_12] [i_13])) : (((/* implicit */int) (_Bool)1))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (short)25734)) ? (511LL) : (((/* implicit */long long int) 4294967293U))));
                            }
                        } 
                    } 
                    var_25 |= ((/* implicit */short) ((((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) arr_52 [i_12] [i_13] [i_14] [i_13]))));
                    arr_61 [i_12] [i_12] [i_12] [(_Bool)1] = ((/* implicit */unsigned short) (~((+(2617194215U)))));
                    arr_62 [i_13] [i_12] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) % (min((((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) var_12)) + (6715))) - (25))))), (((/* implicit */int) ((unsigned short) var_5))))))))));
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (long long int i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            {
                arr_70 [i_17] [i_17] [i_17] = ((((/* implicit */_Bool) 7350928718794980413LL)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)63)));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? ((((+(((/* implicit */int) var_5)))) * (((((/* implicit */int) arr_9 [i_17])) & (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_17] [i_18] [i_17])) ? (arr_23 [i_17] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
            }
        } 
    } 
}
