/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101941
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [3ULL] &= ((/* implicit */unsigned long long int) ((8972160001332324865LL) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) * (((arr_1 [i_0]) << (((arr_0 [i_0 + 1] [1]) - (1011057693)))))));
    }
    for (short i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 -= max((((/* implicit */short) (signed char)0)), (arr_3 [i_2]));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_4] [i_1] [(_Bool)0] [(_Bool)0] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((short) arr_11 [i_4]))))));
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)72))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_4 [i_3] [i_1]))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (short)166)) && (((/* implicit */_Bool) (short)-167))))) + (((/* implicit */int) arr_10 [(_Bool)1] [i_4] [i_4] [i_4] [i_1])))) : (((/* implicit */int) var_5))));
                        arr_13 [i_3] [i_1] [i_3] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_1] [i_3]), (((/* implicit */int) arr_4 [i_1 + 3] [i_1]))))) ? (max((var_14), (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) min((var_0), (var_2))))))) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_0))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) | (708555348U)));
                        var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((unsigned char)188), (arr_7 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) arr_8 [i_1] [(unsigned char)0] [(unsigned char)0] [i_1])) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))))));
                        var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))) - (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2]))) <= (arr_16 [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5] [i_1])))) - (((/* implicit */int) var_3)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) (~(964463602U)));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_8)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 3; i_7 < 14; i_7 += 1) 
                    {
                        arr_22 [i_1] [i_1] [i_7 - 3] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((var_4) <= (((/* implicit */unsigned long long int) ((arr_6 [i_2 + 2] [i_7 + 1]) - (((/* implicit */int) arr_19 [i_1] [i_2] [i_3])))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_11 [i_1 - 1]))));
                        arr_23 [i_7] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_1] [i_1 + 3] [i_1])) ^ (((/* implicit */int) arr_19 [i_1] [13U] [i_1]))));
                        arr_24 [11LL] [i_2] [i_1] [(unsigned char)14] = ((/* implicit */int) var_8);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1])) % (((/* implicit */int) arr_14 [i_1 + 4] [i_1] [i_1] [i_1] [2] [i_1]))))))));
    }
    var_27 = ((/* implicit */unsigned int) ((((var_9) == (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (short)654)) : (((/* implicit */int) var_8))));
}
