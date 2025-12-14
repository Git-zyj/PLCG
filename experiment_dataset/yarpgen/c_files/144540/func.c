/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144540
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */unsigned int) max((((_Bool) arr_3 [13] [i_1] [i_1])), (min((var_10), (var_6)))));
                var_12 = ((/* implicit */int) var_8);
                arr_5 [i_0] = ((/* implicit */long long int) ((signed char) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1746894114U)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_2))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((max((min((2548073182U), (((/* implicit */unsigned int) (_Bool)1)))), ((~(1746894114U))))), (((unsigned int) max((var_5), (((/* implicit */unsigned char) (signed char)96))))))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (var_1)));
    }
}
