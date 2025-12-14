/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120166
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
    var_18 = ((/* implicit */short) min((max((min((((/* implicit */int) var_3)), (var_2))), (var_2))), (((((/* implicit */int) var_13)) / (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_15)))))))));
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((min((((3ULL) - (33ULL))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned int) var_2))))))), (min((min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (short)-15796)))), (((/* implicit */unsigned long long int) arr_4 [14U] [i_1]))))));
                    arr_6 [i_1] [i_1] [i_2 + 2] = ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))), (((var_15) / (((/* implicit */int) var_3))))))) != (min((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) == (arr_0 [(short)11])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_13 [i_3] [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((var_17) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) & (arr_11 [i_3] [i_3 + 1] [i_4]))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_4])) ? (arr_3 [i_6] [i_5] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */int) arr_20 [i_6] [i_4] [5LL] [i_6])))))));
                        var_22 = ((/* implicit */unsigned short) arr_10 [16U] [i_4] [i_3 + 1]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) arr_11 [i_4] [i_4] [i_3]);
            var_24 -= ((/* implicit */int) var_8);
        }
        for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
        {
            arr_24 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [(unsigned char)6] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) var_3))))) < (var_17)));
            arr_25 [19U] [i_7] [6U] = ((/* implicit */signed char) arr_21 [i_7 + 2]);
        }
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_0))))) * (var_6)));
        arr_26 [i_3 + 1] = ((/* implicit */long long int) var_15);
        arr_27 [i_3] = ((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [3])));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_2)))) ? (((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_3 + 1] [19ULL]) <= (var_1)))))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 16; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (short i_10 = 3; i_10 < 19; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_27 |= ((/* implicit */signed char) arr_23 [i_10 + 1] [11LL]);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_4 [i_10 - 3] [i_9 + 2]))));
                        arr_38 [i_11] [i_9] [(short)0] [i_11] [i_11] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) var_8)), (min((arr_35 [(short)8] [i_9] [i_8]), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) var_2))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) min((min((((/* implicit */int) arr_37 [(short)16] [(short)16])), (((((/* implicit */_Bool) arr_5 [i_9 + 2])) ? (((/* implicit */int) arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_28 [i_8 + 1])))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_8] [2U])), (var_11)))) || (((/* implicit */_Bool) arr_29 [i_8 + 1])))))));
            arr_39 [i_8] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_16)), (min((arr_37 [i_8 + 1] [i_9 + 4]), (arr_8 [i_9 + 1])))))), (min((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)190)))), (536868864)))));
        }
        arr_40 [(unsigned short)1] [i_8 + 1] = ((/* implicit */short) min((arr_32 [i_8 + 1] [(unsigned char)10]), (((/* implicit */unsigned long long int) arr_18 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
    }
}
