/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179490
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))), ((~(var_13)))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [(signed char)2] [i_0 - 1]))) ? (((/* implicit */int) arr_2 [i_0 + 2])) : ((-(((/* implicit */int) ((short) (unsigned short)528)))))));
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_1 + 2]) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 2]))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) arr_2 [i_1 + 2]))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (var_3)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)0] [i_0 - 1])) : (((/* implicit */int) var_14)))) : (((((/* implicit */int) arr_2 [i_0 + 2])) << (((((/* implicit */int) (signed char)127)) - (113))))))), (((((int) var_5)) - (((((/* implicit */_Bool) (unsigned short)16749)) ? (1032192) : (2147483647))))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 2] [i_3 + 1])) ? ((-(((/* implicit */int) arr_7 [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) max((arr_3 [i_1] [i_1]), (arr_7 [i_2 - 1] [i_1 - 1] [i_0 + 1]))))));
                        arr_12 [i_1] = ((/* implicit */int) ((signed char) ((int) (-(((/* implicit */int) arr_3 [i_1] [i_2]))))));
                        arr_13 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((int) arr_5 [i_0] [i_0] [i_1]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -258757420)) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 1])) : (arr_19 [10U] [10U] [i_6]))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)21768))))))));
                            var_23 -= ((/* implicit */unsigned char) var_2);
                            var_24 = ((/* implicit */unsigned short) var_13);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (long long int i_9 = 4; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_19 [i_9] [i_8] [i_9])) : (558551906910208ULL))))), (((/* implicit */unsigned long long int) ((arr_14 [i_0 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]) ? ((+(((/* implicit */int) arr_21 [i_7] [i_9 + 1])))) : ((~(((/* implicit */int) (unsigned short)0)))))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_23 [i_0 - 1] [i_7] [i_8] [i_9 + 1]))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_17 [i_9] [i_9] [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_9])) >= (((/* implicit */int) arr_17 [i_9] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_0 - 1] [i_9])))) ? (((((/* implicit */_Bool) arr_17 [i_9] [i_7 - 2] [i_7] [i_7 - 2] [i_7] [i_9])) ? (((/* implicit */int) arr_17 [i_9] [i_9 - 2] [i_9] [i_7 + 1] [i_0] [i_9])) : (((/* implicit */int) arr_17 [i_9] [i_7] [i_7 - 1] [i_7 + 1] [i_0 + 1] [i_9])))) : ((-(((/* implicit */int) var_14)))))))));
                        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 7323957460509487945LL)))));
                    }
                } 
            } 
            var_29 |= ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0]);
            var_30 += ((/* implicit */int) ((long long int) (_Bool)1));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_7 - 2] [i_0 + 2] [i_7 - 2]))) ? (((arr_10 [(unsigned char)18] [(unsigned char)18]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) max((var_4), (((((/* implicit */int) arr_2 [i_0])) - (var_4))))))));
            arr_27 [i_0] [i_7 + 1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (+(18446185521802641431ULL))))) ? (min((max((arr_18 [i_0] [i_0] [i_0 - 1] [i_0] [i_7 + 1] [(_Bool)1] [i_7]), (((/* implicit */long long int) arr_10 [(_Bool)1] [(_Bool)1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_6 [i_7 + 1] [i_0] [i_0])) : (arr_19 [(_Bool)1] [i_7] [i_7])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0])) : (((/* implicit */int) var_1)))))));
        }
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) var_6)) + ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1])))))))))));
        var_33 |= ((/* implicit */short) arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            for (signed char i_12 = 2; i_12 < 23; i_12 += 1) 
            {
                {
                    var_34 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_31 [i_11])))) ? (((/* implicit */int) (!((!(var_10)))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_9)))), ((!(arr_32 [i_10]))))))));
                    var_35 = (i_10 % 2 == zero) ? (((/* implicit */signed char) ((((((((((/* implicit */_Bool) arr_28 [i_10] [i_11])) ? (arr_31 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (9223372036854775807LL))) >> ((((~(arr_33 [i_10] [i_10] [i_12 + 1]))) - (1772412534))))) & (((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_5)) + (114))))))))) : (((/* implicit */signed char) ((((((((((/* implicit */_Bool) arr_28 [i_10] [i_11])) ? (arr_31 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (9223372036854775807LL))) >> ((((((~(arr_33 [i_10] [i_10] [i_12 + 1]))) + (1772412534))) + (249365060))))) & (((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_5)) + (114)))))))));
                    arr_35 [i_10] = ((/* implicit */signed char) ((long long int) (short)1008));
                }
            } 
        } 
    } 
}
