/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173519
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(unsigned char)12])) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) var_2)))) : (((/* implicit */int) var_3)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (arr_2 [(unsigned char)6])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_3), (((/* implicit */short) var_2)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (signed char i_3 = 4; i_3 < 24; i_3 += 2) 
        {
            for (unsigned short i_4 = 3; i_4 < 24; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((max((-1233519627), (((/* implicit */int) (signed char)-23)))) * (((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (((((/* implicit */int) arr_12 [i_2] [i_2] [i_4 - 3])) * (((/* implicit */int) var_0)))) : (((/* implicit */int) var_15))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_0))));
                    var_20 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) ((signed char) (signed char)-31))), ((~(((/* implicit */int) var_6))))))), ((+(((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_3])))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_20 [i_6] [i_3] [i_4] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_6] [i_4])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2])) && (((/* implicit */_Bool) (signed char)-80))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_11 [i_3 - 3] [i_3]))))))) : (((/* implicit */int) var_6)));
                                var_21 = ((/* implicit */long long int) (+((((!(var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_2]))))))));
                                var_22 = ((/* implicit */unsigned char) max(((signed char)-46), ((signed char)-12)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_4);
}
