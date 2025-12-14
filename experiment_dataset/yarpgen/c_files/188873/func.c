/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188873
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
    var_20 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((6040784444967478925ULL) * (1853851739319833665ULL)));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) var_10)) + (((/* implicit */int) ((short) arr_0 [5] [7U]))))), (((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_3 [i_1] [i_1])))) % (((/* implicit */int) var_0))))));
        arr_7 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)72))))), (6040784444967478925ULL)))) || (((/* implicit */_Bool) 1826211622946301839LL))));
        var_23 = ((/* implicit */unsigned long long int) var_10);
    }
    var_24 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 6040784444967478934ULL)) || (((/* implicit */_Bool) var_3)))))))));
}
