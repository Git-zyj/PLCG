/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143879
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
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-2))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (max((2097151U), (((/* implicit */unsigned int) (unsigned short)63527))))))))));
    var_20 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)0)), (((long long int) (unsigned char)87))));
                    arr_10 [i_2] [(short)11] = ((/* implicit */unsigned int) max(((+(arr_1 [i_2 + 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1 - 2] [i_2 - 2] [i_2 - 1])))))));
                }
                for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) (unsigned char)200))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (var_2)));
                    var_23 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1] [i_1 - 3])) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_3 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1] [i_1 - 3]))))));
                }
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned char) var_6)), ((unsigned char)240))))))))));
            }
        } 
    } 
    var_25 -= ((/* implicit */short) ((int) max(((unsigned short)2008), (((/* implicit */unsigned short) (short)-1153)))));
}
