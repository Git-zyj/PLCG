/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116230
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
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (+(((/* implicit */int) (signed char)3))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */unsigned long long int) (+(var_9)))) + (var_10))) + (var_10))))));
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((0), (-1824445060)))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16))))))) : ((~(((/* implicit */int) var_8))))));
                var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */int) (-(max((((/* implicit */long long int) (signed char)-89)), (862991101575592998LL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
}
