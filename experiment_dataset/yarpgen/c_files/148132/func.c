/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148132
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [(unsigned short)11] = arr_0 [i_0] [i_0];
        var_18 = ((/* implicit */signed char) ((2872801724971310884ULL) * (((/* implicit */unsigned long long int) 63))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_19 *= ((/* implicit */unsigned char) max((min((((/* implicit */int) ((_Bool) var_7))), ((~(((/* implicit */int) var_14)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_5 [i_0])))))))));
            var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) var_16))))));
            var_21 = ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_16);
}
