/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175036
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((var_8) ^ (((((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) arr_3 [i_0] [i_0])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1301639873U))))))))))));
            var_18 = ((/* implicit */short) var_11);
        }
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_1 [i_2]))) << ((((((+(((/* implicit */int) arr_5 [(_Bool)1])))) >> (((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) - (41757))))) - (7553)))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((+(1301639873U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0] [i_2 - 2])), (arr_9 [i_3])))))))) != (((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2]))))) : (((var_6) / (((/* implicit */long long int) var_13))))))));
                            var_19 += ((/* implicit */short) 1301639893U);
                        }
                    } 
                } 
            } 
            var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_11 [i_2] [i_2 - 1] [i_0] [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_2] [16U] [16U] [i_2])), (1301639873U))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) -6288011150773358109LL)))))) : (((((unsigned long long int) (signed char)28)) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [4ULL])), (-4593888421399717548LL))))))));
        }
        arr_17 [(short)17] = ((/* implicit */signed char) 1301639873U);
        arr_18 [i_0] = ((/* implicit */signed char) 6288011150773358109LL);
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_15))))))));
                    var_22 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_5))));
    }
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_31 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_9]), (arr_5 [i_9])))) ? (((/* implicit */int) max((((/* implicit */short) arr_14 [i_9] [i_9] [i_9])), (var_9)))) : (((/* implicit */int) var_12))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            arr_36 [i_10] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)671)) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9] [i_10] [i_10]))) : (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_9] [i_10]))))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 17; i_11 += 4) 
            {
                arr_40 [(unsigned char)4] [(unsigned char)4] [i_10] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2]))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) - (arr_34 [i_11 - 2])));
            }
            arr_41 [i_9] [i_9] = ((/* implicit */unsigned char) arr_10 [i_9]);
        }
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            arr_45 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) arr_3 [i_9] [i_9])), (arr_13 [i_12] [7LL]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)-682)))))))))));
            /* LoopNest 3 */
            for (unsigned short i_13 = 1; i_13 < 15; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            arr_54 [i_9] [i_9] [(unsigned char)7] [i_12] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_1)))), (var_15)))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) max((-6288011150773358100LL), (((/* implicit */long long int) (signed char)102))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 4593888421399717536LL)) : (var_3))) : (((/* implicit */unsigned long long int) arr_11 [i_9] [i_12] [i_13 + 2] [i_12]))))));
                            arr_55 [i_9] [i_12] [i_13] [i_12] [0] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_10 [i_14]))))));
                            arr_56 [i_9] [i_14] [i_12] = arr_8 [i_12] [i_12] [i_15];
                            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_11 [i_9] [i_9] [i_9] [i_9])))), (max((min((((/* implicit */unsigned long long int) var_15)), (var_5))), ((~(var_3)))))));
                        }
                    } 
                } 
            } 
            var_26 -= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((-6288011150773358096LL) | (((/* implicit */long long int) -1135960159))))) ^ (max((((/* implicit */unsigned long long int) var_9)), (var_3)))))));
        }
        for (signed char i_16 = 2; i_16 < 17; i_16 += 2) 
        {
            var_27 = var_16;
            var_28 = ((/* implicit */unsigned short) var_10);
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_8))));
            var_30 ^= ((/* implicit */signed char) var_5);
            arr_59 [i_9] [i_9] [i_16] = ((/* implicit */signed char) var_12);
        }
    }
}
