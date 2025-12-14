/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106421
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 *= arr_11 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_3];
                            arr_13 [i_3] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((min((4294967287U), (((/* implicit */unsigned int) ((unsigned short) (signed char)-15))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (6594739772777764529ULL)))) ? (((((/* implicit */int) arr_11 [i_0] [0ULL] [i_2] [i_2] [i_4] [i_3] [i_1])) >> (((var_0) - (6227772100277630190ULL))))) : (((/* implicit */int) ((_Bool) var_5))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_17 [0ULL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))), ((-(((/* implicit */int) max((arr_2 [i_1] [i_5]), ((_Bool)1))))))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) arr_11 [i_1] [i_3] [7ULL] [i_2] [i_1] [i_0] [i_1])) * (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((_Bool) var_10))))));
                            arr_20 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */_Bool) (+((-(var_0)))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-63)) || ((_Bool)1))))) & (var_2)));
                            var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            var_14 &= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_4)) << (((/* implicit */int) var_10))))));
                            var_15 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2] [i_1])), (arr_8 [i_0] [i_1] [i_1])))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */int) max((var_16), ((-(((/* implicit */int) (!(arr_11 [i_3] [i_3] [0U] [(_Bool)1] [0U] [i_0] [i_3]))))))));
                            arr_27 [i_7] [i_1] [(_Bool)1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_3 [i_7] [i_1]));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1 - 2] [i_0] [i_3 - 3] [i_7]))));
                            arr_28 [i_0] [i_1] [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) var_7);
                            var_18 = ((/* implicit */unsigned short) ((arr_21 [i_1 + 1] [4ULL] [i_1 + 1] [i_1 + 1] [i_1 + 4] [i_1 - 2]) >> (((arr_21 [i_1 + 4] [i_1] [i_1] [i_1 + 2] [i_1 + 3] [i_1 - 3]) - (10288129857413607945ULL)))));
                        }
                        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), (2310110309U)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        for (unsigned short i_9 = 1; i_9 < 7; i_9 += 3) 
        {
            {
                arr_34 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_7)))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_0 [i_8] [(unsigned short)7]))))))));
                var_21 = ((unsigned long long int) ((_Bool) arr_26 [i_9 + 2] [i_9 + 2] [8] [i_9 + 2] [i_9 + 2]));
                var_22 = ((/* implicit */int) var_9);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) 18446744073709551615ULL)))), ((_Bool)1)));
        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (var_2))) ^ (((/* implicit */unsigned long long int) (~(261888))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_10])) + (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) != (var_0))))))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) / (min((((/* implicit */unsigned int) arr_35 [i_10])), (arr_36 [i_10] [7])))))));
        arr_37 [i_10] [i_10] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10]))) + (var_9))) : (min((((/* implicit */unsigned long long int) var_8)), (var_9))))))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)0)))))) * (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3865985254U)))), (17702750472040310248ULL)))));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            {
                                arr_52 [i_11] [i_12] [i_13] [i_14] [i_11] = ((((/* implicit */_Bool) (~(17702750472040310248ULL)))) ? (((min((arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_39 [i_11] [i_15])))) % (((((/* implicit */_Bool) arr_41 [i_12] [i_12])) ? (var_5) : (arr_47 [i_11] [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) 428982042U)));
                                var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -2147483637)) && (((/* implicit */_Bool) 16776704U)))) ? (((/* implicit */int) ((signed char) ((_Bool) var_3)))) : (((/* implicit */int) ((unsigned short) (unsigned short)17804)))));
                                arr_53 [i_11] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) var_10);
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_46 [i_11] [i_11] [i_11] [i_11]) / (arr_46 [i_12] [i_12] [i_11] [i_11])))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)-38))))));
                            }
                        } 
                    } 
                    var_28 = (!(((/* implicit */_Bool) arr_48 [i_11] [i_12] [12] [i_11] [i_11] [i_11])));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 4; i_17 < 14; i_17 += 4) 
                        {
                            {
                                arr_58 [i_11] = ((_Bool) 4913227913294975685ULL);
                                arr_59 [i_17] [i_12] [i_17] |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)2071)) : (-145509909)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            {
                                arr_65 [(signed char)5] [i_11] [i_13] [i_18] [i_19] = ((/* implicit */signed char) ((int) ((arr_64 [i_11] [i_11] [i_11] [i_18] [i_11]) + (((/* implicit */unsigned long long int) ((((var_6) + (2147483647))) << (((/* implicit */int) var_10))))))));
                                var_29 = ((/* implicit */_Bool) (+(min((((var_3) ? (arr_38 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_11] [i_11] [i_13] [i_18]))))), (((/* implicit */unsigned long long int) arr_54 [i_13] [i_12] [i_12] [i_18]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
