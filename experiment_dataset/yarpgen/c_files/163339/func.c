/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163339
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((((int) arr_1 [i_0] [i_1])), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0])))))));
            var_17 |= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((unsigned long long int) -780189961)))))));
            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
            arr_8 [i_0] [i_0] |= ((/* implicit */unsigned char) (-(((unsigned int) (-(arr_2 [i_1]))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned long long int) (-((+(min((((/* implicit */int) (_Bool)0)), (780189961)))))));
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_0]), (arr_6 [i_0])))) && ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    var_20 &= ((/* implicit */short) min((((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_12)))))))), (min((min((var_3), (((/* implicit */int) (short)656)))), (((/* implicit */int) ((_Bool) var_0)))))));
    var_21 = ((/* implicit */short) ((_Bool) ((short) var_9)));
}
