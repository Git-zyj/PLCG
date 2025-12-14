/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152613
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
    var_18 = ((/* implicit */short) (signed char)-64);
    var_19 = ((/* implicit */unsigned short) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65090)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (signed char)66)))))));
        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_16))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), ((signed char)64)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))), (((arr_3 [(signed char)21]) * (arr_3 [i_1])))));
        arr_7 [i_1] = ((/* implicit */short) var_15);
        var_23 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (unsigned short)65521))))), (min((var_12), (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 1671010873U))) ? (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) arr_11 [i_2] [i_4])) : (((/* implicit */int) (signed char)-80)))) : (((/* implicit */int) (unsigned short)33351))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) (unsigned short)65510)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_4] [i_5]))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_2] [i_2] [(unsigned short)16] [(unsigned short)16] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 466758784U)) ? (var_5) : (((/* implicit */unsigned long long int) arr_3 [i_4]))));
                            arr_23 [i_2] [i_3] [i_4] [21U] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-22438))));
                        }
                        for (short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            arr_28 [i_2] [i_3] [i_2] [i_3] [i_7] = ((/* implicit */short) (+(var_8)));
                            var_25 = (+(((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_5])));
                        }
                        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_4] [i_5] [i_2]))));
                    }
                } 
            } 
        } 
        arr_29 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
        arr_30 [i_2] [i_2] = var_8;
    }
}
