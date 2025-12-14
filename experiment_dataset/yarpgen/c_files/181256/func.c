/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181256
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
    var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) max((var_7), (((/* implicit */short) var_0))))))) & (max(((~(((/* implicit */int) (short)16382)))), ((~(((/* implicit */int) (signed char)33))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) (short)-32744)), (50331648)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-19)) == (((/* implicit */int) (signed char)7)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)245), (((/* implicit */unsigned char) (signed char)20)))))))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)-14))))), (var_16)))) : (((/* implicit */int) min((var_2), (((/* implicit */short) min(((unsigned char)118), (((/* implicit */unsigned char) (signed char)-117))))))))));
}
