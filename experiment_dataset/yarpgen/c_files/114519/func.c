/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114519
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [1LL] = arr_2 [i_0];
        var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (4781600143907729622LL) : (arr_2 [i_0])));
    }
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), ((signed char)15)))))))) > (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-81)), (var_7)))))))));
    var_13 = ((((var_5) << (((((-4787402480608006307LL) + (4787402480608006341LL))) - (28LL))))) << (((((var_1) + (8848880105666809690LL))) - (42LL))));
    var_14 = (+(((/* implicit */int) (_Bool)0)));
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-61))));
}
