/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171562
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) min((var_16), (((/* implicit */long long int) var_18))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) * (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (unsigned char)101)))))));
    var_21 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)61))))));
    var_22 &= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_8)) : (-1493581805)))) + (max((2716719915727177661ULL), (((/* implicit */unsigned long long int) -9223372036854775803LL))))))));
}
