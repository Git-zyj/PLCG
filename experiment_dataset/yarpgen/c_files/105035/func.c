/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105035
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49833))))))) ? ((+((-(((/* implicit */int) var_5)))))) : (arr_3 [i_0])));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_3] [i_4 + 1])))) ? ((~(arr_7 [i_4 - 2] [i_4 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4 - 4] [i_4] [i_4 - 4] [i_4 - 1])) && (((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 - 3])))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((~(arr_1 [(unsigned short)10]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)70)) >> (((((/* implicit */int) var_14)) - (65)))))) && (((/* implicit */_Bool) arr_3 [10])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (arr_1 [(unsigned char)11])))));
                                arr_14 [i_0] [(short)2] [i_0] [i_3] [i_4 - 4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (arr_6 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(unsigned char)1] [7ULL])))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_7 [i_4 - 2] [i_4 - 2])) : (var_13)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 2) 
    {
        for (signed char i_6 = 3; i_6 < 8; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */int) (((-(arr_15 [i_6 + 2]))) ^ (((/* implicit */unsigned long long int) var_7))));
                arr_20 [i_6] = ((/* implicit */unsigned char) var_6);
                var_21 = ((/* implicit */unsigned char) (((((((!(((/* implicit */_Bool) var_0)))) ? (((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((arr_9 [i_6] [i_6] [i_6] [i_6]) + (1506974345))) - (29))))) : ((-(((/* implicit */int) (unsigned short)14678)))))) + (2147483647))) >> ((((-(((/* implicit */int) var_10)))) + (35)))));
            }
        } 
    } 
    var_22 = (+(var_12));
}
