/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185460
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
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (short)3;
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14376959007473459930ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10422)) ? (var_11) : (((/* implicit */int) (short)-27171))))) ? (1528360016U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 4; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) -422922561);
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 24)) ? (var_10) : (((/* implicit */int) (signed char)0))));
                                arr_26 [i_3] [i_4] [i_4] [i_5] [i_7] = (((!(((/* implicit */_Bool) -18)))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) 499597630)) : (var_7))));
                                arr_27 [(unsigned short)3] [(unsigned short)3] [i_5 - 2] [i_6] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(1960601646048150755ULL))))));
                            }
                        } 
                    } 
                    arr_28 [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_4)))) ? ((~(-2082820389))) : (((/* implicit */int) (short)4095))));
                    arr_29 [i_5] [i_5] = (unsigned short)59035;
                }
            } 
        } 
    } 
}
