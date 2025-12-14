/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119404
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(2162973585812103637ULL))))));
    var_17 -= ((/* implicit */signed char) (+(((unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (2162973585812103637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((3758096384U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))))));
                var_19 = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) >= (2162973585812103637ULL))))))));
}
