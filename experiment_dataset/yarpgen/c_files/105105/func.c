/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105105
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_6))));
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) (+(var_7)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-1)), (297566613U)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))));
                                var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3997400683U) : (460616162U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_3])) == (((/* implicit */int) var_12))))) : (var_7))), (((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_8))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((-(((/* implicit */int) var_9)))) : (var_7))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) ((((/* implicit */_Bool) (signed char)-20)) ? (arr_10 [(signed char)20] [i_1] [(signed char)20]) : (((/* implicit */long long int) 214594857U)))))));
                }
            } 
        } 
    } 
}
