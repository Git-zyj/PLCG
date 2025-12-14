/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122771
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
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
    var_19 = ((/* implicit */long long int) var_8);
    var_20 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    var_21 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_3] = ((/* implicit */signed char) var_13);
                        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_16))));
                        var_23 = ((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) >> (((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        arr_12 [(unsigned short)15] [i_0] = var_13;
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_13 [i_4]))));
        var_25 &= ((/* implicit */short) var_7);
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_17)))) : ((+(((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) var_10))))))));
                        arr_23 [(unsigned short)5] [i_5] [i_6] [(unsigned short)0] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(var_8))))));
                        var_27 = ((/* implicit */int) min((((var_3) << (((((/* implicit */int) var_7)) - (16013))))), (((/* implicit */unsigned int) (~(arr_7 [(short)6] [i_5] [i_6] [i_7]))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_6] [i_4] [i_7 + 3] [i_7 + 2]))))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_7] [i_7] [i_7 + 3] [17ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_6] [i_4] [i_6] [i_6] [i_7 + 1] [i_7])))) : (((/* implicit */int) var_13))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (max((((/* implicit */unsigned long long int) var_0)), (var_4)))))) ? (((((/* implicit */_Bool) var_15)) ? (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))) || (((/* implicit */_Bool) var_2))));
                            arr_30 [i_4] [i_4] [i_6] [i_8] [(_Bool)1] [i_8] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_5])), (var_15))))))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (arr_13 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) / (((var_12) ? (((/* implicit */unsigned long long int) var_10)) : (arr_13 [i_9]))))))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3002328103U)));
                            var_32 = ((/* implicit */_Bool) ((1292639193U) >> (((/* implicit */int) (_Bool)1))));
                            var_33 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned char)191)), (0))) < (min((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_4] [(signed char)4])) || (var_0)))), (((((/* implicit */int) var_15)) / (var_10)))))));
                        }
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_16)) : (min((((/* implicit */int) arr_10 [i_4] [i_4])), (var_9)))));
                            var_34 = ((/* implicit */short) var_4);
                            arr_41 [i_6] [i_8] [i_6] [i_8] [i_11] [i_8] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((var_9) - ((-(((/* implicit */int) var_13))))))) : (var_6)));
                            var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                            arr_42 [i_11] [i_4] [i_6] [i_4] [i_4] = arr_14 [i_4] [i_4];
                        }
                        arr_43 [i_8] [i_6] [i_6] [i_4] &= ((/* implicit */unsigned char) var_8);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        arr_47 [i_12] = ((/* implicit */short) arr_5 [i_12]);
        var_36 = ((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) var_15)) - (45)))));
    }
}
