/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114565
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
    var_18 = ((/* implicit */unsigned long long int) (-(3588080190U)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned short) var_7)), (arr_0 [i_0] [i_0])));
        var_20 -= ((/* implicit */unsigned long long int) (short)-5744);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)5368)))))));
        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -1091349396))) ? (((var_0) ? (7066072561805227551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))))));
    }
    var_22 = ((/* implicit */short) (+(max(((-(((/* implicit */int) (short)24)))), (((((/* implicit */_Bool) (short)12263)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-12239))))))));
    var_23 = ((/* implicit */_Bool) 5895810225088740008ULL);
    var_24 -= max((((((/* implicit */int) var_7)) < (((/* implicit */int) var_9)))), ((_Bool)1));
}
