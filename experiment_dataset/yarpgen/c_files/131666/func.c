/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131666
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
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) (signed char)-116))) : (((/* implicit */int) var_3))))) ? (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (1640066136))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) ((unsigned char) 0U))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]);
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (arr_5 [i_0])))) ^ (max((((/* implicit */unsigned int) var_11)), (229661316U))))));
                }
            } 
        } 
    }
    for (int i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((min((((/* implicit */unsigned int) (unsigned short)48408)), (229661336U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (min((((/* implicit */unsigned int) (unsigned short)58083)), (1500896513U))))))));
        var_21 = ((/* implicit */unsigned short) var_4);
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 24; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_3]);
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? (((/* implicit */int) arr_12 [i_3] [24LL])) : (((/* implicit */int) var_3))))), ((-(((((/* implicit */unsigned long long int) var_5)) + (arr_17 [i_3] [i_3])))))));
                    arr_19 [i_3 - 1] [i_3] [i_3 - 1] = ((/* implicit */short) arr_10 [i_3 - 1] [i_5]);
                    arr_20 [i_3] = min((((/* implicit */short) ((((/* implicit */_Bool) 4065305979U)) && (((/* implicit */_Bool) 0U))))), (arr_14 [i_3] [i_4 - 1] [i_4 + 1]));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_18 [i_3] [i_3 + 1])), (((/* implicit */unsigned long long int) ((int) arr_18 [i_3] [i_3 - 1])))));
        arr_21 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 + 3] [i_3])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32753)))) : (((((/* implicit */_Bool) arr_18 [i_3] [(short)24])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_3] [(unsigned char)11]))))))), (min((((/* implicit */unsigned long long int) arr_18 [i_3 - 2] [i_3 + 2])), (arr_10 [i_3 - 2] [i_3 + 2])))));
    }
    for (int i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
        {
            arr_27 [i_6 + 2] [i_6 + 2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((((/* implicit */short) arr_16 [i_6 - 1] [i_7] [(_Bool)1])), (var_9))))) ? ((+(((/* implicit */int) arr_23 [i_7 + 2])))) : ((-(((/* implicit */int) arr_26 [i_6] [i_6 - 1]))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6 + 2])) ? (((((/* implicit */_Bool) arr_23 [i_7 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7 - 2] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [(unsigned char)11])))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */short) arr_16 [i_6] [i_8] [5U]);
            arr_32 [i_6] [i_8] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_6] [i_6]))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_0))))))));
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_8]))));
        }
    }
    var_29 = ((/* implicit */short) var_8);
    var_30 |= ((/* implicit */unsigned char) var_5);
}
