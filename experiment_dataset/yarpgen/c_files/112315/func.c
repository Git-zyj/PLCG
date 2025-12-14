/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112315
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((-1) <= (((((/* implicit */_Bool) 10)) ? (20) : (-10))));
                    var_19 = ((/* implicit */short) max(((+(arr_3 [i_1 - 1] [i_1 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -20))))) == (((((/* implicit */_Bool) -20)) ? (20) : (-20))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_21 *= ((/* implicit */short) var_7);
    }
    var_22 = ((/* implicit */long long int) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (+(var_17)))) ? (-41) : ((+(((/* implicit */int) var_7))))))));
}
