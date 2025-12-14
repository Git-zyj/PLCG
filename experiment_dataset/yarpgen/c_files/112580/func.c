/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112580
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
    var_12 = ((/* implicit */signed char) 3783465574U);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) | (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_1 [8]))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_7)) * (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) 3186680342U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
        arr_4 [i_0] [(signed char)6] = ((/* implicit */int) var_7);
    }
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */long long int) 1337242227)), (var_0))))));
}
