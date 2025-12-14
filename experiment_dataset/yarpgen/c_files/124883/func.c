/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124883
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_2 [(unsigned char)8] [(unsigned char)16] = ((/* implicit */unsigned char) max((((/* implicit */signed char) var_16)), (var_14)));
        var_19 = var_3;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((max((63243467102896595ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (arr_4 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [(unsigned char)0] [i_1] [i_2] [i_3] [i_4] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * (((/* implicit */int) min((((/* implicit */short) (signed char)3)), (var_4))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-112))))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_5)))));
                        arr_13 [i_2] = ((/* implicit */signed char) ((max((18383500606606655021ULL), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_2] [i_1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) && ((!(((/* implicit */_Bool) var_3))))))))));
                        var_21 = ((/* implicit */short) var_1);
                        arr_14 [i_2] [i_4] [i_3] [9ULL] [i_2] [i_2] = ((_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_3]))));
                        arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)16), (((/* implicit */unsigned char) var_10))))) << (((var_7) + (733005547)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        arr_26 [i_7] [i_6] [i_7] [i_8] = (signed char)(-127 - 1);
                        arr_27 [i_7] [i_6] [i_7] [(unsigned char)16] = (+(arr_16 [i_5 + 1] [i_5 - 1]));
                        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_5)));
                    }
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_14))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */unsigned char) ((_Bool) var_13));
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max(((~(((((/* implicit */int) var_17)) * (((/* implicit */int) var_0)))))), (((/* implicit */int) arr_30 [i_9]))));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            arr_43 [i_9] [i_10] [(unsigned char)8] [(unsigned char)8] [i_12] [i_13] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_10]))) : (max((var_8), (((/* implicit */unsigned long long int) arr_25 [i_10] [i_11] [2ULL] [i_13]))))))) ? (max(((~(var_8))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)0)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (var_9)))) + (((((/* implicit */int) (signed char)36)) * (((/* implicit */int) (_Bool)1))))))));
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_17);
                            var_27 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)162)), (((((/* implicit */_Bool) arr_40 [(_Bool)1] [i_11] [i_12] [i_14])) ? (((/* implicit */int) arr_29 [i_14])) : (((/* implicit */int) arr_40 [i_9] [i_9] [i_12] [i_14]))))));
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_4), (((/* implicit */short) arr_41 [i_15 - 1] [i_15 - 1])))))));
                            var_29 ^= ((/* implicit */unsigned char) var_14);
                        }
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_36 [(_Bool)1] [i_10] [i_11] [i_9])))) ? (((((/* implicit */_Bool) (short)3)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (max((((/* implicit */int) arr_1 [i_9])), (var_13))))) : (((/* implicit */int) (short)19239))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min((var_6), (((/* implicit */short) max((var_12), (((/* implicit */unsigned char) var_14))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_16 = 3; i_16 < 20; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 23; i_17 += 3) 
        {
            {
                arr_56 [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_54 [i_16 - 2] [i_16 - 2] [i_17])) ? (746839033414757345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_11))))), (max((((/* implicit */unsigned short) var_17)), (var_3))))))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((_Bool) max((((/* implicit */short) var_12)), (arr_55 [i_17] [i_16 + 2]))))));
                var_33 &= ((/* implicit */_Bool) arr_55 [i_16] [i_17]);
                arr_57 [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) min((var_12), (var_12)))) | (((var_13) | (((/* implicit */int) arr_51 [i_16]))))));
            }
        } 
    } 
    var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_3)) % (((/* implicit */int) var_4))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (min((((/* implicit */unsigned long long int) var_17)), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
