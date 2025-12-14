/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151085
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17602))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) (unsigned short)12770)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) < (-8629587422291326924LL))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((long long int) ((unsigned char) (signed char)-51))))));
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */long long int) 15637111885839585062ULL);
    var_15 = ((/* implicit */int) ((((1884113377) < (((((/* implicit */int) (signed char)-50)) & (((/* implicit */int) (signed char)-51)))))) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)50942)))));
}
