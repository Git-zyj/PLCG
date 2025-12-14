/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147349
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
    var_11 = ((/* implicit */unsigned char) (_Bool)1);
    var_12 ^= ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */_Bool) 13176791073866575957ULL);
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 -= ((/* implicit */long long int) ((int) arr_1 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1609693910)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))) : (((arr_2 [i_0]) ? (9223372036854775793LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) (unsigned short)26790)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 9223372036854775793LL))));
            var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
        }
    }
}
