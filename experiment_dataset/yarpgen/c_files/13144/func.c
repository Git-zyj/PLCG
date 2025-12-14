/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13144
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_3))));
    var_19 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)84))))))) | (((/* implicit */int) var_0))));
        var_21 ^= min((max((min((633046999U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) 76766591)))), (((/* implicit */unsigned int) ((unsigned short) min((var_11), (-1903743336620339262LL))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-10053))));
        var_22 = ((/* implicit */signed char) var_16);
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */short) (_Bool)0)), ((short)(-32767 - 1))))), (((min((((/* implicit */long long int) var_16)), (var_11))) - (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (_Bool)0))))))))));
    }
    var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)13716))));
}
