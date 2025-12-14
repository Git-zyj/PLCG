/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114225
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
    var_12 *= ((/* implicit */_Bool) (+(965792308)));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)140), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0] [i_0])))) % (((((/* implicit */_Bool) (unsigned short)9698)) ? (((/* implicit */int) (unsigned short)55838)) : (((/* implicit */int) (short)-23810)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) max(((-(arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_1]) <= (arr_3 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_9 [i_4 - 4] [i_3 - 1] [i_3] [i_3 + 2] [i_3] [i_3])), (arr_4 [i_3] [i_3 - 1] [i_3 - 2] [i_1])))), (max((3767574149U), (((/* implicit */unsigned int) arr_4 [i_3 + 2] [i_3 + 2] [i_0] [i_0]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) (~(arr_8 [i_4] [i_4] [i_0] [i_0] [i_4])));
                                var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 3; i_5 < 24; i_5 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_5])), (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_15 [i_5] [i_5])))))) ? (((/* implicit */long long int) ((arr_17 [i_5 - 1]) / (((/* implicit */int) ((unsigned short) var_10)))))) : (((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? (((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_15 [i_5] [i_5]) : (((/* implicit */long long int) arr_18 [i_5])))) : (((/* implicit */long long int) var_0))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((signed char) ((int) ((arr_15 [i_5] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) max((((arr_17 [i_5 - 1]) / (arr_17 [i_5 + 1]))), (((/* implicit */int) (((-2147483647 - 1)) != (((/* implicit */int) (unsigned char)116)))))));
        arr_20 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (arr_15 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_15 [i_5] [i_5 - 3])))) : (((/* implicit */unsigned long long int) max((arr_18 [i_5]), (-15)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    }
    for (int i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
    {
        var_19 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_6 [i_6 - 1] [i_6 - 1] [i_6 - 1]))) && (((/* implicit */_Bool) ((signed char) arr_12 [i_6])))))), (max((((/* implicit */unsigned short) ((arr_22 [i_6]) < (((/* implicit */int) (unsigned char)28))))), (arr_10 [i_6] [i_6 + 1]))));
        var_20 = ((/* implicit */_Bool) arr_18 [i_6 + 1]);
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((unsigned short) var_1));
                        arr_29 [i_9] [i_7 - 1] [i_7 - 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_6 + 1])), (arr_16 [i_6 + 1]))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) var_10);
        }
    }
    for (int i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10])) ? (arr_22 [i_10]) : (((/* implicit */int) arr_1 [i_10 + 1] [i_10 + 1]))))) : (((arr_15 [i_10] [i_10 + 1]) ^ (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((_Bool) arr_3 [i_10] [i_10 - 1])))))) : (3767574176U)));
        arr_33 [i_10] = arr_7 [i_10] [i_10] [i_10 - 1] [i_10] [i_10];
    }
    var_24 |= var_3;
    var_25 = ((/* implicit */_Bool) ((unsigned int) 3584U));
}
