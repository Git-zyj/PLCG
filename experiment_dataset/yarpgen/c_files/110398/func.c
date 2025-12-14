/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110398
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
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        var_18 = ((/* implicit */long long int) var_14);
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) arr_2 [(short)4]);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1])))) ? (((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) var_3))));
        var_21 = ((/* implicit */short) ((signed char) min((arr_1 [i_1]), (arr_1 [i_1]))));
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) ((var_10) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [3U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [(short)5])))))))), ((+(((/* implicit */int) arr_4 [i_1]))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [4] = ((/* implicit */long long int) (((!(arr_6 [i_2]))) && (((/* implicit */_Bool) ((int) arr_6 [i_2])))));
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            arr_12 [i_3] [i_2] [i_2] = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-22)))) % (var_7)));
            arr_13 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3] [i_2])) ? ((-(((/* implicit */int) var_3)))) : (arr_11 [i_3 - 3] [i_3 - 1] [10LL])));
            var_23 = ((/* implicit */short) max((var_23), (arr_1 [i_3 + 1])));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_24 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_3 - 2]))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_3 - 3])) : (((/* implicit */int) arr_5 [i_3 + 1]))));
            }
        }
        var_26 = ((/* implicit */short) ((_Bool) arr_14 [i_2] [i_2] [i_2] [i_2]));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) ((unsigned short) arr_18 [i_5]))) : (((/* implicit */int) arr_16 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(arr_24 [4] [i_6] [20]))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)20875), (((/* implicit */short) arr_17 [i_5]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) ((short) (+(((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_16 [i_9] [i_7])))))));
                                var_30 = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((int) var_11)))))));
    var_32 = max((((/* implicit */short) var_3)), (max(((short)20896), (var_5))));
}
