/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162361
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_12))))))));
                        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) ((short) arr_8 [i_3] [1] [i_1]))) ? (((((/* implicit */int) arr_2 [i_1] [i_2] [i_3])) * (((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_1 [i_0]))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]))) ? (((/* implicit */long long int) 268435455)) : (var_7))))));
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)43821)), (min(((((_Bool)0) ? (-268435469) : (((/* implicit */int) (short)30816)))), (5)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_18 [6] = ((/* implicit */long long int) ((int) (short)30816));
                    arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((1936216252) - (var_10)))) + (((((/* implicit */unsigned int) 534243659)) - (1953712361U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))) : (((long long int) arr_4 [i_0] [11] [i_5]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */long long int) arr_14 [i_5] [3] [i_0])) + (arr_12 [i_0])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            for (unsigned int i_7 = 3; i_7 < 11; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned char) -8499070000056843601LL))) && (((/* implicit */_Bool) max((-268435469), (((/* implicit */int) arr_1 [i_0]))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4356)) ? (((/* implicit */int) arr_21 [i_6] [i_6])) : (((/* implicit */int) var_4)))))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((-1936216252) & (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_8)))))) / ((((-(((/* implicit */int) (_Bool)1)))) & ((~(-268435469))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 6959433087299228987LL))));
                            arr_31 [i_7] [i_8] [i_6] [i_7] [i_6] [i_0] [i_0] = ((/* implicit */signed char) (short)-30817);
                        }
                        arr_32 [i_6] [i_7] [i_6] = ((/* implicit */long long int) (~(((((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_12 [i_7]))) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_4))))) : (max((var_10), (((/* implicit */int) (signed char)6))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_35 [i_10] [i_10]))))) ? ((+(var_6))) : ((-(((/* implicit */int) (unsigned char)184)))))))));
        /* LoopSeq 2 */
        for (short i_11 = 4; i_11 < 20; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    {
                        arr_45 [(short)9] [i_11] [i_11] [i_10] = ((/* implicit */int) (+(((long long int) (signed char)-58))));
                        arr_46 [i_11] [i_12] [9] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_42 [i_11 + 1] [i_12 - 1] [i_12 - 1])) * (((/* implicit */int) (signed char)57)))) / (max((var_11), (((/* implicit */int) (unsigned char)255))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            arr_50 [i_14] [i_14] [i_14] [i_13] = ((/* implicit */long long int) (+(max((((/* implicit */int) ((signed char) arr_47 [i_11] [i_11] [i_11] [i_11] [i_10]))), (arr_40 [i_10] [i_11] [i_11] [i_14])))));
                            arr_51 [i_10] [i_14] [i_14] [17] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_12])) ? (max((max((4294967281U), (((/* implicit */unsigned int) (short)26516)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_14] [(unsigned short)16] [(unsigned short)16] [i_10] [i_14] [i_14])) ? (var_9) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) arr_44 [i_10] [(unsigned short)5] [(unsigned short)5]))));
                            arr_52 [(signed char)3] [(signed char)3] [i_12] [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((-1936216252), (arr_36 [i_10]))), (((/* implicit */int) var_4)))))));
                            var_24 = ((/* implicit */long long int) ((int) max((((/* implicit */long long int) (-(arr_36 [i_10])))), (arr_34 [i_10] [i_10]))));
                            var_25 = ((/* implicit */short) (+(((((/* implicit */int) (short)752)) + (((/* implicit */int) arr_47 [i_14] [i_12 + 3] [i_12 + 4] [i_12 + 4] [i_11 - 3]))))));
                        }
                        var_26 = ((/* implicit */int) min((var_26), ((~(((((/* implicit */_Bool) arr_49 [i_11 - 2])) ? (var_11) : (arr_36 [i_11 - 3])))))));
                    }
                } 
            } 
            arr_53 [i_11] [i_11] = max((var_8), (((/* implicit */unsigned short) (_Bool)0)));
        }
        /* vectorizable */
        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 3) 
        {
            arr_57 [i_15 + 3] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)21712))));
            arr_58 [i_10] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_42 [i_15] [i_15] [i_15])) : (((/* implicit */int) (short)4356))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)4356)) || (arr_33 [i_10] [i_15])))))))));
        }
        var_28 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? (var_7) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) var_12))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_22 [(short)12] [(short)12] [(short)12] [(short)12]))));
        var_30 = ((/* implicit */unsigned char) ((-1411004608) == (((/* implicit */int) (unsigned char)196))));
        /* LoopSeq 1 */
        for (short i_17 = 3; i_17 < 11; i_17 += 3) 
        {
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((var_3) ? (arr_23 [i_17 - 2]) : (((/* implicit */int) (signed char)-57))))) ? (((((/* implicit */int) (short)-4444)) * (((/* implicit */int) (signed char)-90)))) : ((~(((/* implicit */int) var_1)))))))));
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_17]))));
            arr_64 [(signed char)11] [i_17] [i_17] = ((/* implicit */short) (_Bool)0);
        }
        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)43822)) : (var_9))), (((/* implicit */int) min(((signed char)56), (arr_4 [i_16] [i_16] [(unsigned short)12])))))))));
    }
    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) 
    {
        arr_68 [i_18] [i_18] = ((/* implicit */int) 7787903470871042179LL);
        var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_12))) << (((max((((/* implicit */int) (short)-4444)), (1031568622))) - (1031568622)))))) ? ((-(arr_41 [i_18] [i_18] [i_18] [i_18]))) : (arr_59 [i_18])));
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (arr_7 [(unsigned char)12] [(unsigned char)12] [i_18] [i_18]))))));
    }
    var_36 = var_11;
}
