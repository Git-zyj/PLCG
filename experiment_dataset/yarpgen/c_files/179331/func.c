/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179331
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_14 [i_1] = var_7;
                    arr_15 [1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1])) != (-4789721432352708232LL)))) >> (((((/* implicit */int) arr_11 [i_1] [i_2])) + (65)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((unsigned long long int) arr_13 [i_1] [i_1])) : ((+(arr_5 [i_1])))));
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((unsigned long long int) var_2))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned long long int) -23LL)))));
        arr_20 [i_4] [i_4] = ((/* implicit */signed char) ((_Bool) arr_17 [i_4]));
        arr_21 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_4]))));
        arr_22 [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_17 [i_4]));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        arr_25 [i_5] = ((unsigned int) (short)1261);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            arr_29 [i_5] [14ULL] = ((/* implicit */long long int) ((unsigned long long int) arr_28 [i_6 + 1] [i_6 + 1]));
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 + 1]))) : (1519791296U)));
                var_19 = ((/* implicit */unsigned char) var_14);
            }
            for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_9 = 3; i_9 < 19; i_9 += 3) 
                {
                    arr_38 [i_5] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) (((-(arr_28 [i_8] [i_9]))) - (((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) (unsigned short)9139)) : (((/* implicit */int) var_6))))));
                    var_20 += (!(((/* implicit */_Bool) arr_24 [i_8 - 1])));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((unsigned long long int) arr_37 [i_5] [16LL] [i_8] [i_5]))));
                }
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_37 [i_5] [i_6 - 1] [i_6 - 1] [i_8]))))) ? (arr_35 [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_28 [i_5] [i_5])) <= (4451764211131843235LL))))))))));
            }
        }
    }
    var_23 = ((/* implicit */short) (~((~(((/* implicit */int) ((signed char) (short)-23676)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 4) 
    {
        arr_42 [i_10] [i_10] = ((/* implicit */short) ((long long int) arr_17 [i_10 + 3]));
        arr_43 [i_10] = ((/* implicit */long long int) 1152358554653425664ULL);
        arr_44 [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_10 - 2]))));
    }
}
