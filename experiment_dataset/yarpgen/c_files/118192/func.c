/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118192
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_11))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) (((-(-3565576055442608765LL))) < (((/* implicit */long long int) var_11))))))))));
    var_22 = ((/* implicit */unsigned int) (unsigned char)3);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((3565576055442608764LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1601133005)) ? (4294967295U) : (4294967283U)));
        var_24 -= ((/* implicit */unsigned long long int) arr_0 [(short)4]);
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((3565576055442608755LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)74))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_26 = var_13;
        var_27 = ((/* implicit */unsigned int) (unsigned char)253);
    }
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((var_3) > (((/* implicit */long long int) ((arr_7 [i_2 - 2]) >> (((var_5) - (1263840259)))))))))));
        var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -3565576055442608769LL)) == (3901511309340909422ULL)));
        arr_8 [i_2] = ((/* implicit */int) arr_1 [(_Bool)1]);
    }
}
