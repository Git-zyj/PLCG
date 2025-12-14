/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107777
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
    var_11 = ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (0) : (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_0)) == (0)))))))));
                arr_5 [(unsigned short)7] = ((/* implicit */signed char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && ((!(((/* implicit */_Bool) (signed char)-76)))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)749)))))) - ((+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)67)))))))));
                                arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (max((max(((unsigned short)15613), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) max((var_0), (((/* implicit */short) (_Bool)1)))))))));
                                var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) var_2)) : (var_3)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (12054019653387031002ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (short)-751)), (var_9))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1 + 4] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) (+((~(var_8)))))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) : (3717520034U)))));
            }
        } 
    } 
}
