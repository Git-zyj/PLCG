/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131784
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)34350)), (min((((((/* implicit */_Bool) var_17)) ? (2827194090694293706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) ((unsigned int) var_17)))))));
    var_20 = var_3;
    var_21 -= ((/* implicit */short) (+(((/* implicit */int) ((short) var_12)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) var_9);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((short) ((long long int) (-(((/* implicit */int) arr_4 [i_0])))))))));
            var_24 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((short) arr_3 [17U] [i_1] [i_1])))))));
            var_25 = 105345666U;
            arr_5 [11ULL] [i_1] [11ULL] = ((/* implicit */long long int) max((((/* implicit */int) arr_2 [3ULL])), ((-(((/* implicit */int) arr_4 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) min((max((arr_0 [i_0]), (((/* implicit */long long int) var_15)))), (min((((/* implicit */long long int) (~(arr_3 [i_0] [i_0] [i_0])))), (arr_0 [i_0])))));
            arr_8 [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) arr_1 [i_0])))), ((+((~(((/* implicit */int) arr_7 [i_0] [i_2]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) 1)), (2147483647U))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((unsigned int) var_4))))));
                var_28 = ((max((((((/* implicit */_Bool) var_18)) ? (589375606U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) arr_4 [i_0])))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_11 [i_3])))))))))));
            }
        }
        for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_11 [i_4])) + (((/* implicit */int) arr_11 [i_4]))))))));
                var_30 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [3U]))))), (max((var_1), (((/* implicit */unsigned int) arr_17 [i_5] [i_5] [i_5] [i_5])))))) == (((/* implicit */unsigned int) (+(max((((/* implicit */int) var_15)), (arr_13 [i_0] [i_0]))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
            {
                arr_21 [i_0] [(short)7] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_0] [i_4] [i_0]))))) >= (min((arr_20 [16U] [i_0] [16U] [i_6]), (((/* implicit */long long int) max((var_11), (1527047152U))))))));
                arr_22 [i_0] = ((/* implicit */long long int) ((unsigned int) (+(((arr_9 [i_4] [(short)18] [6ULL]) % (((/* implicit */unsigned long long int) 4294967284U)))))));
            }
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_4] [i_7]))))) : (min((((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */unsigned long long int) arr_23 [i_0])) : (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_8))))))));
                var_32 = (~(min(((+(arr_10 [i_0] [(short)20] [i_7] [i_0]))), (((/* implicit */unsigned int) var_7)))));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_7])) ? (-224345951) : (((/* implicit */int) ((signed char) ((arr_19 [i_0] [i_4] [2]) - (arr_15 [i_0] [i_4] [i_7])))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                arr_31 [(short)11] [i_4] = ((/* implicit */int) (~(arr_23 [(unsigned short)3])));
                arr_32 [i_0] = ((/* implicit */unsigned short) max((589375606U), (((/* implicit */unsigned int) -1099601446))));
                var_34 = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
                var_35 = ((/* implicit */int) arr_23 [i_4]);
            }
        }
    }
    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) 
    {
        var_36 = ((/* implicit */short) ((int) (+(arr_24 [i_9 - 1] [i_9 - 1]))));
        var_37 = ((short) min((arr_24 [i_9 + 4] [i_9 + 3]), (arr_24 [i_9 - 1] [i_9 + 1])));
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (+(8967587780948117543ULL))))));
        var_39 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_9]))) ? (min((((/* implicit */unsigned long long int) 5507410796211197375LL)), (12308329501092048037ULL))) : (min((arr_35 [i_9]), (((/* implicit */unsigned long long int) arr_36 [i_9])))))));
    }
    var_40 = ((/* implicit */int) (~(((unsigned int) 1152921504606846975ULL))));
}
