/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117333
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 1438057892U))) ? (min((2856909404U), (2856909406U))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2856909403U)))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 2856909394U)))))) == ((~(var_9))))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((2856909396U), (3745525679U)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
}
