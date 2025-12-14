/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176992
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */int) var_12);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */int) var_18);
                    var_22 = arr_2 [i_2];
                    arr_10 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */short) arr_1 [0U] [19U]);
                    arr_11 [i_1] [i_1] [(unsigned short)18] [i_1] = ((/* implicit */unsigned char) ((((_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))))))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_16 [i_3] [i_4] = (-(((/* implicit */int) ((short) ((((/* implicit */long long int) 1891132507)) < (9223372036854775807LL))))));
                arr_17 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (~(((int) (unsigned short)24127))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((short) var_13)))));
                var_24 = ((/* implicit */unsigned long long int) ((short) arr_14 [i_0] [i_0] [i_3] [i_4]));
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                arr_21 [i_5] [i_5] [(short)11] [i_5] = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5])))));
                arr_22 [i_0] [i_5] [i_5] = arr_19 [i_0] [i_0] [i_5] [i_0];
                arr_23 [i_0] [i_5] [i_5 - 3] = ((/* implicit */unsigned char) ((long long int) var_19));
                arr_24 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) ((unsigned int) var_12));
            }
            arr_25 [i_0] [i_3] = ((/* implicit */short) ((unsigned int) var_14));
        }
    }
    for (int i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        var_25 = ((/* implicit */long long int) (!(((_Bool) ((int) var_10)))));
        var_26 = ((/* implicit */unsigned char) ((unsigned int) ((short) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)374)))))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [14] [i_6 + 1]))) : (var_3)))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */signed char) var_17);
        arr_32 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (arr_4 [i_7] [i_7])));
        arr_33 [i_7] = ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_7 + 1] [i_7 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_7 + 1] [i_7 + 1])), (arr_1 [i_7 + 1] [i_7 + 1]))))) : (var_3));
        var_27 = ((unsigned char) (!(((/* implicit */_Bool) min((var_15), (arr_4 [i_7] [i_7]))))));
    }
    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (short i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_9] [i_10 + 2])) ? (((/* implicit */int) ((1208703096U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) arr_6 [i_9] [i_9])) - (var_19)))))) ^ (arr_29 [i_9])));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (arr_4 [i_8 + 1] [3ULL]))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) < (9223372036854775807LL)))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_8 - 1] [i_8 - 1])) < (((((/* implicit */_Bool) var_18)) ? (var_19) : (((/* implicit */int) var_13))))))))));
    }
    var_31 = (((-(1891132498))) > (((/* implicit */int) var_2)));
    var_32 = ((/* implicit */unsigned short) ((max((5475237889685132419LL), (((/* implicit */long long int) (short)-175)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14)))))))));
}
