/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123706
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) -3387299030525251537LL);
                    arr_6 [4U] = 2251797666201600LL;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(-1518251886))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 2])) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3387299030525251540LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [(unsigned short)3] [i_1] [i_1] [i_2] [(unsigned short)11] [i_3] [i_4])) : (((/* implicit */int) var_11))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned short)2047))) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_4 + 1] [i_4 - 2])))))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)236)), ((unsigned short)29622))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_9 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2])))) ? (arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]) : ((+(arr_9 [i_0] [i_1] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
