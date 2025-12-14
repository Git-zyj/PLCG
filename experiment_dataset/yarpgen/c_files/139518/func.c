/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139518
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
    var_19 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((unsigned long long int) 562996761U)) <= (max((((/* implicit */unsigned long long int) 3731970535U)), (11774233240349170125ULL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((var_10) * (((((_Bool) arr_1 [i_0])) ? ((+(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) * ((+(arr_0 [i_0]))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18318207560753381451ULL))))));
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (((((/* implicit */_Bool) (unsigned char)157)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))), (var_12)));
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)157))));
    }
}
