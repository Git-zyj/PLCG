/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126295
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
    var_10 -= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) arr_6 [i_0 + 2] [(short)3] [i_2 + 1] [(unsigned char)1]);
                            var_12 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((arr_4 [i_0 + 1] [i_2] [i_3]), (((/* implicit */unsigned int) var_9))))))) - (max((max((((/* implicit */unsigned long long int) var_6)), (arr_5 [i_0] [i_1]))), (((/* implicit */unsigned long long int) max((arr_3 [i_3]), (arr_1 [i_2]))))))));
                            var_13 = ((/* implicit */long long int) min((((max((arr_9 [i_3] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)3] [i_1 + 3] [i_3])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)66))))))), (min((arr_5 [i_2 - 1] [i_0 + 3]), (((/* implicit */unsigned long long int) var_8))))));
                        }
                    } 
                } 
                var_14 += ((((((var_9) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))))) > ((-(((unsigned int) arr_7 [i_0 + 1] [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) var_7)))) ? (((int) ((var_0) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_4))))))));
}
