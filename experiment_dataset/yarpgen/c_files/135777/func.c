/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135777
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) max(((~(((var_10) | (var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-983))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8388607))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */long long int) arr_5 [i_4 + 1])) : (var_10));
                            var_12 = ((/* implicit */int) (~(((-6528700228687950217LL) ^ (5706671625920519207LL)))));
                        }
                        var_13 = ((((/* implicit */_Bool) 1854370780)) ? (arr_0 [i_1 + 3] [i_1 + 1]) : (arr_0 [i_1 + 2] [i_1 - 2]));
                    }
                } 
            } 
        }
        arr_16 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (((int) ((((/* implicit */_Bool) var_6)) ? (var_4) : ((-2147483647 - 1)))))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_14 = ((/* implicit */signed char) arr_9 [i_5] [i_0]);
            arr_19 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_5]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))) : (var_7)));
        }
        for (short i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (long long int i_8 = 4; i_8 < 17; i_8 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_9 = 2; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [(unsigned char)11] [i_6] [i_0] = ((/* implicit */int) max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
                            arr_33 [i_6] [i_6] = ((/* implicit */long long int) ((max((var_0), (((var_10) ^ (((/* implicit */long long int) arr_18 [i_0])))))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_0] [i_6 - 1] [i_0] [i_8] [i_8 - 2] [i_8] [i_9 + 4]))))));
                        }
                        for (signed char i_10 = 2; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            var_15 = ((((/* implicit */_Bool) min(((-(arr_0 [i_0] [i_10]))), (max((((/* implicit */int) arr_11 [i_0] [i_6 + 2] [i_7] [i_8] [i_10 - 1])), (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_10]) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (min((((/* implicit */long long int) arr_31 [i_6] [i_6 + 1] [i_8] [i_8])), (var_0))))) : (((/* implicit */long long int) var_4)));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)20322), (((/* implicit */short) (signed char)-107))))))))) ^ (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [(short)16] [i_6] [i_6] [i_6] [(unsigned char)0] [i_6 + 1] [1]))))) : (((arr_10 [i_0] [i_6] [i_7] [i_8] [i_10] [i_0]) / (var_7)))))));
                            var_17 = ((/* implicit */int) arr_4 [16] [i_6 + 2] [i_6]);
                            arr_36 [i_6] [i_6] [i_6 + 2] [i_6] [i_8] [i_6] [i_10] = arr_4 [i_0] [(short)14] [i_0];
                        }
                        for (int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [i_7] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((var_11) / (((/* implicit */long long int) -843407153)))) * (((/* implicit */long long int) var_8)))) == (((/* implicit */long long int) (-(arr_29 [i_0] [i_6] [i_7] [i_8 + 2] [i_8] [i_11]))))));
                            arr_40 [i_0] [i_6] [i_6] [i_6] [i_8] [i_6] = max((((/* implicit */int) (unsigned char)196)), ((~(((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_8])) : (((/* implicit */int) var_5)))))));
                        }
                        for (int i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [0] [i_7])) : (arr_12 [i_8] [i_8 - 4] [i_8 + 2] [i_6 + 1] [i_6 + 2]))) % (((min((((/* implicit */int) (unsigned char)0)), (-191265128))) / (((/* implicit */int) arr_14 [i_0] [i_6 + 1] [i_0] [i_8 + 1] [i_0] [i_6 + 2] [i_8 + 1]))))));
                            var_19 = ((/* implicit */long long int) ((arr_21 [i_6]) > ((~(max((var_7), (var_2)))))));
                            arr_45 [i_0] [i_6 + 1] [i_6] [i_0] [i_7] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_0] [i_8 - 1]))));
                        }
                        var_20 = ((/* implicit */long long int) ((short) max((((/* implicit */int) arr_14 [i_0] [i_6 + 2] [i_8] [i_8] [i_8] [i_8] [i_8 + 2])), (var_6))));
                    }
                } 
            } 
            var_21 = var_8;
        }
    }
    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (arr_46 [i_13] [i_13]) : (((/* implicit */int) (signed char)-26)))) | (((/* implicit */int) var_3))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_48 [i_13]) & (arr_48 [i_13])))) ? ((+((~(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((arr_46 [i_13] [i_13]) == (((/* implicit */int) arr_47 [i_13])))))));
    }
    for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        arr_51 [i_14] [i_14] = ((/* implicit */signed char) -981330097859327394LL);
        var_24 = ((/* implicit */unsigned char) arr_47 [i_14]);
    }
    /* LoopSeq 2 */
    for (int i_15 = 2; i_15 < 17; i_15 += 4) 
    {
        arr_55 [i_15] [i_15 - 1] = ((/* implicit */int) var_7);
        var_25 = ((/* implicit */signed char) var_5);
        /* LoopNest 2 */
        for (unsigned char i_16 = 2; i_16 < 16; i_16 += 4) 
        {
            for (unsigned char i_17 = 1; i_17 < 18; i_17 += 2) 
            {
                {
                    var_26 &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((arr_57 [i_16 + 3] [i_16] [(unsigned char)9]) & (arr_35 [i_15])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -616835819663981179LL)) ? (((/* implicit */int) arr_56 [0] [i_17 - 1])) : (var_6))))))));
                    arr_62 [i_17] [i_17 - 1] [i_16] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_15] [i_17])) ? (((/* implicit */int) arr_37 [i_16 + 3] [i_16] [i_17] [i_15 - 1])) : (((/* implicit */int) var_9)))) & (((/* implicit */int) ((signed char) 1979841807)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (short)12758)) ^ (var_6)))) | (min((var_0), (var_11))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) arr_35 [i_15])) : ((-(arr_10 [i_17] [i_16] [i_16] [i_15] [i_15] [i_15])))))));
                }
            } 
        } 
    }
    for (signed char i_18 = 1; i_18 < 7; i_18 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_49 [i_18] [i_18]), (((/* implicit */long long int) arr_38 [i_18]))))) ? (arr_5 [i_18]) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)70)) : (arr_46 [i_18 + 1] [i_18 + 3]))))))));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_18])) ? (max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [(signed char)2] [i_18 + 3])) ? (((/* implicit */int) arr_2 [i_18] [i_18])) : (((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18 - 1]))))))) : (max((min((var_2), (((/* implicit */long long int) (unsigned char)168)))), (((/* implicit */long long int) max((arr_22 [i_18]), (var_4)))))))))));
        var_29 = arr_44 [14LL] [i_18 + 1] [i_18 - 1] [i_18] [i_18];
    }
}
