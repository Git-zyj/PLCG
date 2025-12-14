/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153179
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_12);
                    var_19 = ((/* implicit */unsigned long long int) (short)-20952);
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 3302106590U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0]))))))) || ((!(((var_14) && (((/* implicit */_Bool) arr_1 [i_0])))))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3687547139U))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5 - 2] [i_3]))) ^ (arr_12 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_4]))))))));
                        var_23 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_6 [i_0] [i_4] [i_4])))) < ((~(((/* implicit */int) ((short) var_7)))))));
                    }
                } 
            } 
        } 
        var_24 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(unsigned char)0] [i_0] [(unsigned char)0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_16 [(unsigned short)4] [(unsigned short)4] [1LL] = ((/* implicit */_Bool) arr_0 [i_0]);
            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) % (((unsigned long long int) (_Bool)1))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_11 [i_7] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)4]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0]))))))))));
            var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [2U]) - (((/* implicit */int) (_Bool)1))))) ? (((arr_11 [i_0] [i_7] [i_7]) ? (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_0])) : (arr_14 [i_0] [i_0] [i_0]))) : ((+(arr_14 [1ULL] [i_7] [i_0])))));
            var_28 = ((/* implicit */short) ((int) arr_3 [i_0] [i_0]));
            var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 1332646224U)) || (arr_11 [0U] [0U] [i_7]))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_7])) < (((/* implicit */int) var_13))))) << (((((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8ULL]))) : (2962321073U))) - (4294952059U))))) : ((-(((/* implicit */int) (_Bool)0))))));
        }
        arr_19 [i_0] [4ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_0])) ? (arr_15 [i_0]) : (arr_15 [i_0])))));
    }
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                {
                    var_30 = ((/* implicit */signed char) var_14);
                    var_31 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(871552901)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_9]) && (((/* implicit */_Bool) arr_27 [i_8] [i_8])))))) : (arr_26 [i_9])));
                    var_32 = ((/* implicit */long long int) arr_26 [i_8]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 19; i_12 += 2) 
                        {
                            {
                                arr_35 [i_12] [i_9] [i_9] [i_9] [i_12] [i_10] [i_9] &= ((/* implicit */long long int) (-(1332646222U)));
                                var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_33 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12] [i_12] [i_12 - 2]) ? (((/* implicit */int) ((short) (unsigned char)105))) : (((/* implicit */int) arr_32 [i_12 + 4] [i_12 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 2] [i_10 + 2]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1332646224U)))), (arr_31 [(short)3] [i_12] [i_12] [i_12 + 1] [i_12] [i_12])))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_10]))));
                }
            } 
        } 
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))));
        var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_8] [i_8]))))) ? ((~(((/* implicit */int) arr_29 [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_29 [i_8] [12LL])) ? (((/* implicit */int) arr_29 [i_8] [i_8])) : (((/* implicit */int) arr_29 [i_8] [i_8]))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            for (short i_14 = 4; i_14 < 21; i_14 += 4) 
            {
                {
                    arr_42 [i_8] [i_8] [13] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_14 - 2]))));
                    arr_43 [i_14] &= ((/* implicit */_Bool) (~(((arr_38 [i_14 + 2] [i_14 + 1] [i_14 + 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14 + 1])))))));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        var_37 *= ((/* implicit */_Bool) var_10);
                        var_38 = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
                    {
                        arr_48 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_14 - 2] [i_14 - 1]))) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_14 + 1])) != (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_0)))))))));
                        var_39 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_14] [i_16]))))) & (arr_40 [16LL] [(_Bool)1] [(unsigned short)21]))) >> (((((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_16)), (arr_31 [i_13] [i_8] [i_14 - 4] [i_13] [i_8] [i_8]))))) - (39)))));
                        arr_49 [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */_Bool) (~(((unsigned int) ((unsigned char) arr_40 [i_8] [i_13] [i_13])))));
                    }
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
                    {
                        var_40 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / ((+(((((/* implicit */unsigned long long int) 1332646224U)) + (arr_23 [i_14]))))));
                        var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_51 [i_14 - 4] [i_14 - 1] [i_14 + 2] [(unsigned short)21] [i_17]) + (9223372036854775807LL))) >> (((arr_51 [i_14 - 4] [i_14 - 4] [i_14 - 1] [i_14] [i_17]) + (4289361820506476083LL)))))) ? (max((((/* implicit */long long int) 4095U)), (-2251799813685248LL))) : (arr_38 [14ULL] [i_8] [(short)16])));
                        var_42 = ((/* implicit */unsigned short) var_8);
                    }
                }
            } 
        } 
    }
    for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        var_43 = ((/* implicit */long long int) (_Bool)1);
        var_44 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_52 [i_18]))))));
        arr_55 [i_18] [i_18] = ((/* implicit */int) var_14);
        arr_56 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_52 [i_18]);
        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) arr_53 [i_18] [i_18]))));
    }
    var_46 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
}
