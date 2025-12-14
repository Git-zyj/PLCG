/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182869
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
    var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_17))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_0 [i_0]))), ((~(max((((/* implicit */long long int) arr_1 [(unsigned char)0])), (var_16)))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((unsigned int) var_12))));
        arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_12)))))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned int) arr_9 [i_2] [i_2])) : (arr_8 [i_2] [i_2])))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned int) arr_9 [(signed char)0] [(signed char)0]))))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned int i_4 = 3; i_4 < 22; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (-((+(arr_17 [i_2] [i_3 + 2] [i_3 + 1] [i_4 + 2])))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) (-(arr_14 [i_2])))) : ((~(var_5)))))) ? (((/* implicit */unsigned long long int) (~(arr_13 [i_2] [i_3 + 2] [i_4 + 3])))) : ((~(var_17)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -437824782)) ? (502314848915447991ULL) : (((/* implicit */unsigned long long int) 1483244277913945638LL))))) ? (((((/* implicit */_Bool) -1483244277913945654LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4918757796602354226ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 66060288)) ? (66060268) : (((/* implicit */int) (!(((/* implicit */_Bool) -1483244277913945655LL))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    arr_23 [i_2] [i_6] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_17 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_6 + 1] [i_7]))) : (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) : (arr_8 [i_6 - 2] [i_6 - 1])))) ? (max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_12)))))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (short)-14047)), (17944429224794103619ULL)))))));
                        arr_26 [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) min((max((1084456390358241508ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12264474771202224936ULL)) ? (((/* implicit */int) (unsigned short)40983)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_17)))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (var_6))))))))));
                        var_27 ^= ((/* implicit */int) (-(min((((/* implicit */unsigned int) (short)-16919)), (arr_8 [i_6 - 1] [i_6])))));
                        arr_27 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16067)) ? (16639819721897573590ULL) : (((/* implicit */unsigned long long int) arr_14 [i_2]))))) ? (((/* implicit */int) ((short) arr_8 [i_2] [i_6]))) : (((var_12) ? (arr_14 [i_6]) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_6 - 2] [i_6 + 1] [i_6])), (var_6))))));
                    }
                    arr_28 [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~((~(var_18)))));
                    var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (2561989868U) : (3011694840U))))));
                    arr_29 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 24; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5405229590384878835LL)) ? (((/* implicit */int) (short)12484)) : (-1478382097)))) ? (((/* implicit */unsigned long long int) (~(arr_25 [i_10 - 2] [i_2] [0U])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_2] [i_9] [i_9] [i_9] [i_10 - 2] [i_2] [i_9]))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_38 [i_10] [20] [i_10] [i_9] [i_9] [i_10])))))));
                            var_31 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_9)))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))))));
                        }
                        arr_39 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_38 [i_2] [i_10] [i_10 + 1] [i_11] [i_10] [7]);
                        arr_40 [i_2] = ((/* implicit */unsigned short) (((-(arr_36 [i_10 + 1] [i_2] [i_2] [i_10 - 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12))))));
                        arr_41 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_36 [i_10 + 1] [i_2] [i_2] [i_9]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_9] [i_10 - 1] [i_11] [i_9] [i_10 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))) : (max((arr_36 [i_2] [i_2] [i_10 - 2] [i_2]), (arr_18 [i_11] [i_11] [i_11])))));
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10 + 1] [i_9] [i_11])) ? (arr_12 [i_10 - 2] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) : ((~(arr_12 [i_10 - 1] [i_10 - 1] [i_9])))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (short i_15 = 2; i_15 < 10; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    {
                        arr_55 [i_14] [i_14] [8LL] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) var_13)))));
                        var_33 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)5202)) : (((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            for (unsigned int i_18 = 1; i_18 < 10; i_18 += 2) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) min((((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (var_17)))), (((/* implicit */unsigned long long int) var_11))));
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 2) 
                        {
                            var_35 = ((/* implicit */_Bool) var_14);
                            var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_12 [i_13] [i_18 + 1] [i_17]))) != (3933598065U)));
                        }
                        var_37 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_17] [i_17] [i_18 + 2] [i_19] [i_18] [i_17])))))));
                        arr_65 [i_17] [i_17] [i_18] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (signed char)-70)), (8957649012037420438ULL)))));
                        arr_66 [3] [(_Bool)1] [i_18 - 1] [i_17] = ((((/* implicit */long long int) ((((((/* implicit */int) arr_35 [i_19])) + (2147483647))) << (((arr_8 [i_18 - 1] [i_18 - 1]) - (1901627134U)))))) - (arr_46 [i_13] [i_17]));
                        arr_67 [i_13] [i_13] [6ULL] [i_17] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(arr_14 [8U])))) + (arr_38 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9489095061672131172ULL)) ? (arr_25 [i_19] [i_17] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * ((~(arr_59 [i_17] [i_17] [i_17] [i_19]))))))));
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_11)) / (((/* implicit */int) arr_42 [i_13]))))));
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 12; i_23 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_6))));
                        var_40 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_13), (var_13)))), (min((1814667444375540839LL), (((/* implicit */long long int) -1743525976))))))), (max((((/* implicit */unsigned long long int) ((int) arr_68 [i_13] [i_13] [i_13]))), ((-(var_0)))))));
                    }
                } 
            } 
        } 
    }
    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) var_17))));
}
