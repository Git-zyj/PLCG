/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121996
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
    var_10 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-46)) <= (((/* implicit */int) (unsigned short)65535)))))))), ((-(min((((/* implicit */long long int) (signed char)-58)), (-9223372036854775805LL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((-250547157) <= (((/* implicit */int) (short)16383))))), (max((9223372036854775804LL), (((/* implicit */long long int) 250547149))))))));
        var_11 -= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14583))) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14582)) ? (((int) 1221208970U)) : (((/* implicit */int) ((short) (signed char)-58))))))));
        var_12 += ((/* implicit */_Bool) ((long long int) (short)-14564));
    }
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((/* implicit */int) (!((!((_Bool)1)))))), (min((((((/* implicit */_Bool) (short)14563)) ? (((/* implicit */int) (short)-14578)) : (((/* implicit */int) (signed char)3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14583))))))))))));
}
