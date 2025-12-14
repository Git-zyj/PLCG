/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102840
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
    var_19 = ((/* implicit */int) var_9);
    var_20 = ((/* implicit */_Bool) (signed char)48);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
            arr_6 [i_1] [(short)4] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
        }
        arr_7 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_16))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_21 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_2 - 1]));
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (var_12))) > (((/* implicit */int) (unsigned short)58951))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_3]))) : (((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26833)))))));
                /* LoopSeq 1 */
                for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                {
                    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_4 - 3]) : (var_10)));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (((_Bool)1) ? (arr_0 [i_3 - 2]) : (((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_3 - 2] [i_4 + 1] [i_4 - 2])));
                    arr_15 [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)102)) ? (57605694) : (57605694)))));
                }
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_25 += ((/* implicit */long long int) ((_Bool) (short)0));
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_4 [2U] [i_2 - 1] [i_2 - 1]));
                var_26 = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_2 - 1] [i_2 - 1]));
                arr_20 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) var_18));
            }
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_23 [i_6] = ((/* implicit */long long int) arr_17 [i_0]);
            arr_24 [i_0] [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0] [i_6] [i_0]))));
        }
        var_27 = ((/* implicit */long long int) (-(arr_3 [i_0] [i_0])));
        arr_25 [i_0] [i_0] = ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_7]));
        arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5117)))))));
        arr_30 [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_7]))));
    }
}
