/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172209
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (signed char)123))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) arr_1 [i_1]);
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */signed char) (unsigned short)29861);
                            var_18 = ((/* implicit */_Bool) var_9);
                            var_19 = ((/* implicit */unsigned int) (unsigned short)2225);
                            var_20 *= ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            var_21 |= arr_0 [i_0] [i_0];
            var_22 = ((/* implicit */_Bool) var_8);
        }
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_13 [i_0] [0U] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2232))) : (((((/* implicit */_Bool) var_3)) ? (arr_3 [(unsigned char)14] [i_6]) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2225))));
            var_23 *= ((/* implicit */unsigned int) var_6);
        }
        var_24 = ((/* implicit */unsigned long long int) ((_Bool) var_2));
        var_25 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) (unsigned short)35675)) ? (((/* implicit */int) (unsigned short)8130)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_11))));
    }
    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 4) /* same iter space */
    {
        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2225)) > (((/* implicit */int) (unsigned short)8153))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_8))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) (+(arr_8 [i_7 - 2])));
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((var_14) ^ (var_6))) : (var_6)));
        }
        var_30 = ((/* implicit */int) ((unsigned char) arr_10 [(unsigned char)23] [i_7 - 1] [i_7 - 2] [(_Bool)1] [i_7 - 2] [i_7 - 1]));
    }
    for (unsigned int i_9 = 2; i_9 < 23; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9 + 1] [i_9 - 2] [i_9 - 1]))) : (arr_6 [i_9 + 1] [5ULL])))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((int) arr_21 [i_9 + 1])))));
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
        {
            arr_36 [i_11] [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) arr_18 [i_9] [13ULL] [i_9]))));
            arr_37 [i_11] [i_11] [i_9] = arr_25 [i_9 + 1] [i_11] [i_11];
        }
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((min((arr_6 [i_9 - 1] [(_Bool)1]), (arr_6 [i_9 - 2] [6U]))) | (((unsigned long long int) var_6)))))));
        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63311)) ? (((/* implicit */unsigned long long int) 1407504274)) : (arr_32 [(signed char)12] [i_9])))) ? (((/* implicit */unsigned long long int) arr_23 [i_9] [i_9] [i_9])) : (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (max((arr_6 [i_9] [i_9]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1065353216U)) ? (-750976617) : (((/* implicit */int) (unsigned short)8153))))) ? (((/* implicit */int) arr_10 [(unsigned short)10] [i_9] [(_Bool)1] [i_9] [(_Bool)1] [i_9])) : (((/* implicit */int) ((_Bool) arr_26 [(unsigned short)23]))))))));
        arr_38 [i_9] = ((/* implicit */unsigned long long int) 1787642716);
    }
    var_35 += ((/* implicit */unsigned int) ((unsigned short) min(((-(var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 1787642723)) : (var_7)))))));
}
