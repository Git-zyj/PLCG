/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176481
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
    var_19 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min(((+(var_16))), (max((11034444483593559888ULL), (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned long long int) var_13)) : (var_2)))))));
                            var_21 = ((/* implicit */unsigned short) ((((long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) << ((((~(((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_3)))))) + (114)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (short)-19955)) || (((/* implicit */_Bool) max((var_17), (((/* implicit */short) arr_8 [i_0])))))))));
            }
        } 
    } 
}
