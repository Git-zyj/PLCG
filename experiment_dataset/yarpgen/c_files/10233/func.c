/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10233
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) max(((unsigned char)255), ((unsigned char)0)))), (arr_0 [i_0]))), (((/* implicit */long long int) max((arr_1 [i_0]), ((unsigned char)246)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((unsigned char) (unsigned char)246))), (-8459970235271464783LL))) + (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)233))))))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) (unsigned char)9)));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_8))));
    var_19 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (signed char)28)), (16775168LL))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) var_2)) : (((var_12) ^ (((/* implicit */unsigned long long int) var_6)))))))));
}
