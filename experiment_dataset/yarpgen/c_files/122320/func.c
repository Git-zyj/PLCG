/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122320
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] = ((signed char) max((((/* implicit */unsigned long long int) ((unsigned short) var_8))), (max((((/* implicit */unsigned long long int) (unsigned short)42432)), (12772631774987729977ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62009))) : (max((max((arr_7 [i_2] [(unsigned short)12]), (((/* implicit */unsigned long long int) 2147427863U)))), (((/* implicit */unsigned long long int) var_0))))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_3] [i_4] = ((((/* implicit */_Bool) max((arr_6 [i_2] [i_3] [i_4]), ((unsigned short)4401)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1383328017U)) : (244196179324261240ULL))) : (((((/* implicit */unsigned long long int) var_6)) / (var_3))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]);
                    arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5968768550266165984ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (18446744073709551606ULL)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_9))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3147225397U)) < (14751994130878112991ULL)));
    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)195)), (18446744073709551606ULL)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31452))) | (var_6))), (var_6)))));
}
