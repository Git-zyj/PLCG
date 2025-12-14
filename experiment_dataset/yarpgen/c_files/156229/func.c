/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156229
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_11 = (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (short)-18328))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */int) ((unsigned short) 1011736279U))) : ((+(((/* implicit */int) arr_1 [i_1]))))));
            arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1]))));
            arr_5 [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) 16956257396269211701ULL))))) > ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1] [i_0 - 3])) : (((/* implicit */int) arr_3 [i_0] [i_1])))));
        }
        arr_6 [i_0] = ((/* implicit */signed char) (!((_Bool)1)));
    }
    var_13 = (((+(((/* implicit */int) (_Bool)1)))) ^ (1926089958));
    var_14 = ((/* implicit */long long int) 2470614247U);
    var_15 = ((/* implicit */unsigned short) var_0);
}
