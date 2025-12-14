/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142444
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
    var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)16256)))) : (((((/* implicit */int) (signed char)123)) * (((/* implicit */int) (unsigned short)1023))))))) * (var_1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (unsigned short)64513)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_0 [i_1])))))));
                var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(16777215)))))) ? (((/* implicit */int) (unsigned char)3)) : ((-(((/* implicit */int) max(((unsigned char)0), ((unsigned char)20))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (var_0) : (max((max((-13), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_2 [i_0]))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_17))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) - (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) ((signed char) var_6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */int) var_6);
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)10);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_18 [i_4] [6U] [i_6]), (((/* implicit */unsigned long long int) arr_0 [i_4]))))) ? (max((var_12), (((/* implicit */unsigned long long int) ((unsigned int) (short)16254))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_4] [i_6]), (arr_14 [i_4] [i_6])))))));
                    arr_22 [8U] [i_5] [(signed char)13] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_4] [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_5] [i_6])))))));
                    var_25 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) - (arr_18 [i_4] [i_5] [i_6])));
                    arr_23 [i_5] = ((/* implicit */short) ((((unsigned int) 0U)) - (((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (4294967295U)))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) -1))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_25 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])), (var_17))))));
                                var_27 *= ((/* implicit */unsigned int) ((signed char) max((max((arr_20 [i_8] [i_7] [i_4]), (((/* implicit */unsigned long long int) -16777215)))), (((/* implicit */unsigned long long int) arr_15 [i_6])))));
                                var_28 = ((/* implicit */unsigned char) (+(4294967295U)));
                                var_29 = ((/* implicit */unsigned int) var_13);
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (max((((/* implicit */unsigned int) arr_4 [i_6])), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_7)), (arr_26 [12U] [i_4] [i_5] [i_6] [i_7] [i_8 + 1]))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (short)16253)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
