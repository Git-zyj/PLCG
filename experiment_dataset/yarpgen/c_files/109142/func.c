/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109142
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
    var_19 = ((/* implicit */long long int) max((16773932782447800701ULL), (min((min((10574409254417331185ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */short) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) 1770477200930824265LL)) ? (((/* implicit */int) (unsigned char)250)) : (arr_2 [i_0 - 1])));
    }
    var_21 -= ((/* implicit */long long int) 11810638879917997500ULL);
    var_22 += ((/* implicit */unsigned short) max((((unsigned long long int) min((var_7), (((/* implicit */unsigned short) (signed char)111))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
}
