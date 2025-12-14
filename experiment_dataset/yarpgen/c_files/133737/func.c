/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133737
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
    var_12 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_13 = var_6;
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-17498)) & (((/* implicit */int) var_7))))), (arr_3 [(_Bool)1] [i_1])))) * (((unsigned long long int) ((((/* implicit */long long int) arr_2 [(_Bool)1])) > (arr_3 [i_1] [i_1]))))));
        var_16 -= ((/* implicit */short) var_11);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_3]))))));
                    var_18 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17481)) ? (((/* implicit */int) arr_4 [i_2] [(_Bool)1])) : (var_5)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) var_6);
                        arr_19 [(_Bool)1] [i_5 + 2] [i_4] [i_7] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 2])) ? (((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 2])) : (((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 2]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_8 = 3; i_8 < 15; i_8 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [i_4] [(short)15])) ? (arr_7 [1] [i_4] [i_4]) : (((/* implicit */int) (unsigned char)164))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) : ((+(var_1)))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_8] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-17497)))) : (((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_4])) ? (var_11) : (arr_6 [i_4] [i_4] [i_4] [i_8 - 3])))));
            var_22 = ((/* implicit */int) ((_Bool) arr_9 [i_4]));
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_7))));
            var_24 = ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_4]));
            arr_24 [i_4] [i_4] = ((/* implicit */short) var_8);
            arr_25 [i_4] [i_9] = ((/* implicit */long long int) var_9);
        }
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            arr_30 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_22 [15ULL] [1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)17509)), (arr_2 [i_10]))))))) ? (((((/* implicit */_Bool) max((arr_21 [i_10] [i_11]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) min((var_10), (var_10)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (8991741561249130099ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
            var_25 = ((/* implicit */signed char) max((((8991741561249130086ULL) >> (((((/* implicit */int) (short)17509)) - (17454))))), (var_4)));
        }
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) arr_15 [i_10] [i_10]);
            arr_35 [i_10] [i_12] [i_12] = ((/* implicit */long long int) ((arr_23 [8] [i_12 - 1]) >= (arr_23 [i_10] [i_12 - 1])));
            arr_36 [i_12] = ((/* implicit */short) var_2);
            var_27 = ((/* implicit */unsigned long long int) (short)20627);
        }
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8419160218917685188LL)) ? (((/* implicit */int) arr_27 [i_10])) : (((/* implicit */int) var_0))))) | (arr_2 [i_10])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (var_11)))));
    }
}
