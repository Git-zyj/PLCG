/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175134
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((6572849379432402637ULL), (((/* implicit */unsigned long long int) (unsigned char)14))));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) var_8)), (min((((((/* implicit */_Bool) arr_1 [15ULL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) var_9))))))));
        arr_3 [i_0 - 1] |= ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) var_14)), (var_2))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((((/* implicit */int) arr_0 [i_1 - 1])) * (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_14))))));
        var_19 = ((/* implicit */int) arr_1 [i_1 - 1]);
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_0 [i_1]))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((int) arr_6 [i_1 - 1])))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) : (var_1)));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        arr_12 [i_2] = var_9;
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_2 - 1])) * (((/* implicit */int) arr_11 [i_2 - 1]))));
        arr_13 [i_2] [i_2] = ((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2])))));
    }
    var_22 += var_15;
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_1))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_19 [i_3])))), ((~(((/* implicit */int) arr_23 [i_4 - 1] [i_3 + 1] [i_3]))))));
                    var_25 = ((/* implicit */signed char) ((unsigned short) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) arr_10 [i_4]))))))));
                }
                for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    arr_28 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_3] [i_6 + 1])), (max((((/* implicit */int) arr_26 [i_6 + 1] [i_6] [i_4 - 1] [6LL])), (var_11)))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_22 [i_3] [i_3])) & (((/* implicit */int) arr_10 [i_4])))) != (((/* implicit */int) arr_25 [i_6 + 1]))))) : (((/* implicit */int) max((arr_26 [i_3] [i_3 + 1] [i_4] [i_4 - 1]), (((/* implicit */unsigned short) arr_11 [i_3 + 1])))))));
                    var_26 = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (max((arr_18 [i_4] [i_6]), (((/* implicit */long long int) var_8)))))));
                    arr_29 [i_3] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_6);
                    arr_30 [i_3] [i_3] [i_6 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)20972)) / (((/* implicit */int) arr_20 [i_6 + 1] [i_3] [i_3])))))) + (2147483647))) << (((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1])))));
                }
                arr_31 [i_3] [i_3] [i_4] = ((/* implicit */long long int) arr_20 [i_3 + 1] [i_3] [i_4 - 1]);
            }
        } 
    } 
}
