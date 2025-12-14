/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149201
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
    var_16 = ((/* implicit */long long int) ((unsigned char) (~(((((/* implicit */_Bool) 1144624176)) ? (((/* implicit */int) (unsigned short)30)) : (1144624176))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 ^= max((var_5), (((/* implicit */int) var_2)));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) ((short) (-(1083497577U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            for (signed char i_4 = 4; i_4 < 14; i_4 += 3) 
            {
                {
                    var_18 += ((/* implicit */short) var_3);
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1144624176)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_14))) : (((((/* implicit */int) var_14)) + (((/* implicit */int) var_12)))))) : (1144624181)));
                    arr_19 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_4 - 4] [i_2])) && (((/* implicit */_Bool) (short)26407))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_2] [i_4 - 1] [i_3])) : (((/* implicit */int) arr_15 [i_2 - 3] [i_4 + 1] [i_2 - 3]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_13 [(signed char)6] [i_5]))))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 7148809222877382840ULL)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (unsigned short)56444))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_22 = min((arr_7 [i_6] [i_6] [i_9]), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_3))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_8 + 1] [i_6 + 1])) ? (arr_7 [i_5] [i_8 - 1] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) (~(arr_7 [i_6] [i_8 + 1] [i_6 + 1])))) : (((((/* implicit */_Bool) arr_7 [14ULL] [i_8 + 2] [i_6 + 1])) ? (7148809222877382840ULL) : (((/* implicit */unsigned long long int) 2097152U))))));
                                var_24 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((min((4755559146577289469ULL), (4755559146577289469ULL))) >= (((((/* implicit */_Bool) var_5)) ? (18018955069950227196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))))))))));
                                arr_33 [8U] [8U] [8U] [i_7] = ((/* implicit */signed char) (-(((long long int) var_9))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
