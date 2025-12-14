/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184186
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
    var_14 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) (unsigned short)756)) || (((/* implicit */_Bool) var_2))))))), (max((((/* implicit */unsigned int) -192886899)), (max((((/* implicit */unsigned int) 1532385077)), (var_12)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_16 = ((/* implicit */int) min((var_16), ((~(max((192886876), (arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned long long int) (((+(min((arr_2 [i_0] [i_0]), (((/* implicit */int) var_0)))))) / (arr_1 [i_0])));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((133979324U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1407))))))))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46712))));
}
