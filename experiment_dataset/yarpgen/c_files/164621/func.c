/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164621
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0 - 3]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [(unsigned char)16]);
        arr_5 [i_0] = ((/* implicit */signed char) (~(((-1LL) | (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_17 = ((int) ((((5318450571649667623ULL) % (5318450571649667639ULL))) ^ (((/* implicit */unsigned long long int) -3979281014811417331LL))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? ((~(var_14))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))));
        var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [16ULL])) ? (((/* implicit */int) arr_1 [6ULL])) : (((/* implicit */int) arr_1 [16ULL])))) * (((/* implicit */int) ((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8]))))))));
    }
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_3) : (var_3))))))) ? (-783363767) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (7624011399202358407ULL) : (((/* implicit */unsigned long long int) var_3)))) >= (13128293502059883993ULL)))))))));
    var_20 ^= ((/* implicit */unsigned long long int) var_13);
    var_21 -= ((/* implicit */unsigned char) var_7);
}
