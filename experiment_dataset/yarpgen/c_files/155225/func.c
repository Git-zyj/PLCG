/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155225
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_0])), (0)));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min(((+((+(((/* implicit */int) arr_1 [i_0])))))), (min(((+(var_2))), (((/* implicit */int) var_7)))))))));
        arr_3 [i_0] |= ((/* implicit */short) ((_Bool) (short)-17));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) 0))));
        /* LoopSeq 4 */
        for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */int) arr_5 [i_1]);
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 1]))))))))));
                var_17 -= ((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 - 3] [i_2 + 1] [i_2 + 1])) < (((/* implicit */int) var_11))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                arr_18 [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_2 - 2]))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) (short)22))))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) arr_14 [i_2 - 2]);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2] [i_2] [i_2 - 1])) ? (arr_17 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) 1890932414))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_2] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_16 [i_6 - 2] [i_7] [i_6 - 2] [i_2 - 2]))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
            }
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_2))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
            var_25 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_8]))))), (var_0));
            var_26 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-26)) > (0))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (unsigned short)37731))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)53070)) : (((/* implicit */int) (unsigned char)255)))) : (10))) : (-1)));
            arr_33 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */short) var_7)), (min((arr_30 [i_8] [i_8] [i_8]), (arr_30 [i_1] [i_1] [i_8])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_36 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27801))) / ((-(arr_16 [i_1] [i_1] [i_9] [i_9])))));
            var_27 = (~(((((/* implicit */_Bool) ((short) arr_19 [i_9] [i_1]))) ? (((int) var_12)) : (((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_30 [i_1] [i_9] [i_1])) : (((/* implicit */int) (signed char)-6)))))));
        }
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((-9223372036854775797LL) / (((/* implicit */long long int) 1354090093U)))))));
            var_29 = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_1] [i_1])))))))), (max((((short) arr_23 [i_1] [i_1])), (((/* implicit */short) arr_13 [i_1] [i_1] [i_10]))))));
        }
        var_30 = ((/* implicit */unsigned int) var_2);
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))), (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (arr_22 [16U] [16U]) : (((/* implicit */int) var_11)))))) <= (min((arr_22 [i_1] [(unsigned char)10]), (arr_22 [i_1] [(unsigned char)6]))))))));
    }
    var_32 = max((730180881594688044ULL), (((/* implicit */unsigned long long int) var_8)));
    var_33 -= ((/* implicit */short) (+(((/* implicit */int) (short)29004))));
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > ((~((~(((/* implicit */int) var_7))))))));
}
