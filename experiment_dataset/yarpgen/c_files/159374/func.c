/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159374
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
    var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (var_5))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))))) && (((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))) >= (arr_6 [i_0] [i_0])))))) : ((-(((/* implicit */int) ((_Bool) (unsigned char)6)))))));
                var_15 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */int) (unsigned char)183)) >> (((((/* implicit */int) (short)32767)) - (32750)))))) ? (5109886457902235694LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / ((-(max((((/* implicit */unsigned long long int) -4845561332061738902LL)), (15710121954233815120ULL)))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((arr_1 [i_0] [i_1 + 1]) != (arr_1 [(_Bool)1] [(_Bool)1])))) : (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)183))))))) > (((long long int) arr_1 [(unsigned short)3] [i_1 + 1])))))));
            }
        } 
    } 
}
