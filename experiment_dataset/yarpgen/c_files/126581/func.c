/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126581
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
    var_14 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = var_6;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((((int) arr_4 [i_0])), (((/* implicit */int) var_3))));
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) var_6);
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((_Bool) 2678440543U));
                    var_15 = ((/* implicit */_Bool) arr_0 [i_1]);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)51))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-1)), (var_7)))))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_25 [i_6] [i_6] &= ((/* implicit */unsigned int) max((((((unsigned int) var_5)) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) max((arr_22 [i_6] [i_5] [i_4] [i_3]), (((/* implicit */short) var_4))))) && (((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5] [i_6]))))));
                        arr_26 [i_4] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 + 1] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_22 [i_4 + 1] [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4 + 1]))) : (((((/* implicit */_Bool) arr_23 [i_4])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        var_17 *= ((/* implicit */signed char) ((short) (_Bool)1));
                        var_18 = ((/* implicit */unsigned short) max((max((arr_14 [i_4 + 4] [i_4 + 4]), (arr_14 [i_4 - 1] [i_4 - 2]))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)-16222))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_4] = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)64)) - (61))))))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((max((min((arr_23 [(_Bool)1]), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_16 [i_3] [i_4] [i_5]))))))), (((/* implicit */unsigned int) 2114163538)))))));
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-27546))));
                        var_21 = ((/* implicit */unsigned long long int) ((short) (signed char)77));
                        var_22 = ((/* implicit */int) arr_16 [i_4] [i_5] [i_8]);
                        arr_34 [i_3] [i_4] [i_4] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) arr_18 [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_4]))))) : (((unsigned int) (signed char)51)))) <= (1935923494U)));
                    }
                }
            } 
        } 
        arr_35 [i_3] = ((/* implicit */_Bool) 3726591806U);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_23 = ((/* implicit */signed char) ((_Bool) var_8));
            var_24 = ((/* implicit */int) arr_30 [i_9]);
        }
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_10] [i_10])) ? (((/* implicit */int) arr_16 [i_10 + 1] [i_10] [i_10])) : (((/* implicit */int) min((var_1), (((/* implicit */signed char) var_13))))))))));
        var_25 = ((/* implicit */unsigned long long int) var_9);
    }
}
