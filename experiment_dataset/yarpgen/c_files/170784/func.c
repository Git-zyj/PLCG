/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170784
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
    var_18 = ((/* implicit */short) (+(var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [7U])) ? (((arr_3 [7U] [(unsigned short)3]) << (((arr_2 [i_0]) - (388244746))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16198)))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((((+(arr_4 [i_0] [3LL]))) > (((((/* implicit */_Bool) (short)-13413)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23707))) : (4439200273785083720LL))))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1895792716)) && (((/* implicit */_Bool) (short)20028)))))) == (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */int) var_12);
}
