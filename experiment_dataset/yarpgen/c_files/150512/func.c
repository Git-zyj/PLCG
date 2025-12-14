/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150512
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_6;
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [(short)9] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_1)))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                var_17 |= ((/* implicit */short) ((unsigned long long int) arr_6 [i_1]));
                var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                arr_8 [i_1] = ((/* implicit */short) (~(((var_4) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [14ULL] [(unsigned short)12])))))))))));
            }
            arr_9 [(short)6] [(short)6] &= ((/* implicit */unsigned short) var_11);
        }
        for (short i_3 = 3; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_3] [(short)16])) | (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (var_8))) << (((/* implicit */int) arr_10 [i_0]))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_16))));
        }
    }
    for (short i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) == (((/* implicit */int) var_4))))), (var_15))))));
        arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((10013430210658427611ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551613ULL)))))))) ? (var_9) : (var_13)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_9)) < (min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4 - 1] [i_4 - 1])))))))));
    }
    var_23 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) != (var_5))))) - (((var_0) >> (((var_13) - (1503595724U))))))), (((/* implicit */unsigned long long int) var_9)));
    var_24 = ((/* implicit */unsigned int) ((((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 10013430210658427606ULL)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_14))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8)))))));
    var_25 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)19850))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (var_15))), (((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5]))))))) / (var_8)));
                    var_28 = ((/* implicit */short) ((((/* implicit */int) arr_10 [(short)16])) | (((/* implicit */int) var_3))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((var_3) ? (arr_25 [i_8]) : (arr_24 [i_8]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))))))));
        var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10331238459208958210ULL)) || (((/* implicit */_Bool) arr_24 [i_8]))));
    }
}
