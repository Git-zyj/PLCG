/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105693
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]);
                var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */signed char) ((((/* implicit */int) (short)12992)) != (((/* implicit */int) (unsigned char)5)))))))), (-567288868)));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    var_13 = ((/* implicit */_Bool) (short)-9939);
                    var_14 = ((/* implicit */short) min((var_6), ((signed char)12)));
                    var_15 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (short)9927)), (arr_4 [i_0] [i_1] [i_0]))), (var_8)));
                    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [(short)21] [(short)21])) : (var_5)))) || ((!(((/* implicit */_Bool) (short)9939)))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (unsigned char)8))));
    var_18 = ((/* implicit */int) var_1);
}
