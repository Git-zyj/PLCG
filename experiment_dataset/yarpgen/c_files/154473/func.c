/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154473
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
    var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-47)) || (((/* implicit */_Bool) -1887204824))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    var_17 = ((/* implicit */int) max((var_13), (((/* implicit */long long int) ((((unsigned long long int) (signed char)99)) >= (((/* implicit */unsigned long long int) max((var_10), (-1070311218)))))))));
    var_18 = ((/* implicit */signed char) 1073737728ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) arr_5 [i_0]);
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)9))));
                arr_7 [i_0] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-1)), (1073737708ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (3471248618U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */long long int) 4203991866U)) - (var_12))))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_14))));
            }
        } 
    } 
    var_22 |= var_13;
}
