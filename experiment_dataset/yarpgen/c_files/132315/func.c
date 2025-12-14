/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132315
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(((/* implicit */int) var_11)))) > (((/* implicit */int) var_14))))) % (((/* implicit */int) var_3))));
    var_17 &= ((/* implicit */_Bool) var_10);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_8)) != (((/* implicit */int) ((unsigned char) 255U)))))), (var_15))))));
    var_19 = ((((/* implicit */_Bool) (((-(var_5))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (var_6))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (2456720657U)))), (var_12))) : (((((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((-1537033844) + (1537033847))) - (3)))))) & (var_6))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((((/* implicit */_Bool) 1838246625U)) && (((/* implicit */_Bool) 7242052402084886461ULL)))) || (((/* implicit */_Bool) -4190139060997011632LL))))), ((short)16383)));
}
