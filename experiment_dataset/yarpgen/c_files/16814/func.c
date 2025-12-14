/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16814
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) ? (3225530102060180743ULL) : (17968645513191540136ULL)));
        var_17 ^= ((/* implicit */unsigned short) var_13);
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((int) ((short) 18446744073709551615ULL)));
        arr_7 [i_1] = ((/* implicit */unsigned short) var_11);
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 15221213971649370873ULL))));
        arr_10 [(signed char)2] [(unsigned char)9] = ((/* implicit */unsigned char) var_4);
    }
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 841548482)), (min(((+(478098560518011459ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (var_11))))))));
}
