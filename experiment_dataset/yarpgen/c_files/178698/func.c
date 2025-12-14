/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178698
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
    var_15 = ((/* implicit */signed char) ((unsigned int) var_1));
    var_16 = ((/* implicit */long long int) var_3);
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 += ((/* implicit */_Bool) ((signed char) var_7));
        var_19 = ((/* implicit */unsigned char) var_12);
        var_20 ^= ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1065353216U)) || (((/* implicit */_Bool) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) var_6)), (7754823334602640571ULL)))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_21 += ((unsigned int) ((int) (-(((/* implicit */int) var_4)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2]))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) (unsigned char)100)) | (((/* implicit */int) (signed char)(-127 - 1))))))));
                arr_9 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) var_11);
                arr_10 [i_3] [i_3] [i_2] [i_1] = ((/* implicit */signed char) (((+((-(2643161242U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_8 [i_3] [i_2] [i_2] [i_1]))))))));
                var_24 ^= (-(((((arr_3 [i_1]) / (var_10))) - (arr_6 [i_1]))));
                var_25 = ((/* implicit */unsigned char) ((min((arr_6 [i_1]), (arr_6 [i_1]))) | (((unsigned int) arr_6 [i_1]))));
            }
            for (signed char i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
            {
                arr_13 [i_1] [i_2] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) (unsigned char)227))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_4]))) / (arr_6 [i_1]))) : (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */unsigned int) var_11)) : (arr_3 [i_1]))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_12 [i_1] [i_2] [i_4] [i_4 - 1])))) ? (arr_3 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_1))))))))));
                var_26 = ((/* implicit */short) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4 + 1])) ? (3641953604708248471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) : (arr_7 [i_1] [i_1] [i_1]))) : ((-(var_5)))))));
                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)22899))));
            }
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
            {
                var_28 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_5 + 3] [i_5 + 2] [i_1]));
                arr_16 [i_1] [i_2] [i_5] = ((/* implicit */_Bool) (-(var_1)));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_19 [i_1] [i_2] [i_5] [i_6 + 1] [i_6] [i_6] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_1)))));
                    var_29 += ((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_5 + 2] [i_5 - 1] [i_6 + 1])) | (((long long int) var_2))));
                    var_30 ^= ((/* implicit */unsigned int) ((6338863995039057096ULL) | (((/* implicit */unsigned long long int) (~(arr_8 [i_1] [i_2] [i_5] [i_6]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        arr_22 [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned int) (unsigned char)159);
                        var_31 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_7 + 1])) && (((/* implicit */_Bool) 5891165888044594322ULL)))));
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((1726161766U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_6 + 1]))))))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) 1726161766U))));
                    }
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_5 + 3] [i_5] [i_5 + 2] [i_6 + 1] [i_6 + 1])) << (((((/* implicit */int) arr_21 [i_5 + 1] [i_5] [i_5 + 2] [i_6 + 1] [i_6 + 1])) - (5804)))));
                }
                for (short i_9 = 1; i_9 < 16; i_9 += 3) 
                {
                    var_35 -= ((/* implicit */_Bool) ((unsigned int) arr_11 [i_1] [i_5 - 1] [i_5] [i_9]));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5 + 3] [i_9 + 1])) ? (((unsigned long long int) 16U)) : (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_37 = ((2183935146U) << (((((/* implicit */int) (unsigned char)108)) - (82))));
                            arr_35 [i_1] [i_2] [i_5] [i_10] [i_11] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_5 + 1] [i_5 + 3]))));
                            arr_36 [i_1] [i_2] [i_5] [i_5] [i_11] [i_11] = ((/* implicit */long long int) var_14);
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_5] [i_5 + 1]))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_1] [i_2] [i_5] [i_10] [i_11])) / (((/* implicit */int) (short)31215))))) < (((var_2) / (((/* implicit */unsigned int) var_13)))))))));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned int) ((2292010512U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))));
            var_41 ^= (!(arr_34 [i_2] [i_2] [i_2] [i_1] [i_1] [i_1]));
        }
        arr_37 [i_1] = ((/* implicit */unsigned int) (short)-18838);
    }
}
