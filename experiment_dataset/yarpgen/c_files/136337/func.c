/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136337
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (signed char)29)) - (26)))));
    var_14 = ((/* implicit */short) ((var_4) | (var_7)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((unsigned char) ((((/* implicit */int) ((signed char) (unsigned char)230))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]))) != (var_5)))))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-11))))) >= (((unsigned int) (short)-11)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_1))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < (var_8))))));
                    arr_15 [(short)15] [i_1] [4] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]))) < (var_7)))) << (((((((/* implicit */int) (short)-11)) - (0))) + (18)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) < (((/* implicit */int) var_10)))) && (((/* implicit */_Bool) var_8))));
}
