/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171286
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
    var_13 = ((/* implicit */long long int) var_4);
    var_14 = ((/* implicit */_Bool) 2086647902U);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16907))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1]))), (((((/* implicit */_Bool) ((unsigned char) (short)10580))) ? (((/* implicit */int) (!(arr_3 [7U])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)83))))))));
        var_17 = ((/* implicit */_Bool) ((unsigned int) 748658358));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_0 - 1]))) ? (((/* implicit */int) max(((signed char)122), (((signed char) var_8))))) : (((((/* implicit */_Bool) ((short) (signed char)127))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8))))));
    }
}
