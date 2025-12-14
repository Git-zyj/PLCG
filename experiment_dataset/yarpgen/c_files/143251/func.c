/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143251
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
    for (int i_0 = 2; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_11 |= ((/* implicit */signed char) ((2364849855U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))));
        var_12 ^= ((/* implicit */unsigned char) ((((int) (-2147483647 - 1))) & ((~(((/* implicit */int) arr_1 [i_0 + 4]))))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (-10) : (((/* implicit */int) (signed char)(-127 - 1)))));
        var_14 = ((/* implicit */signed char) arr_2 [20U] [(short)20]);
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4194303ULL), (((/* implicit */unsigned long long int) (unsigned char)2))))) ? (arr_3 [i_1] [9]) : (((/* implicit */unsigned long long int) arr_2 [(short)17] [(unsigned short)14]))))) && (((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_1 + 1])))));
        var_16 = ((/* implicit */unsigned int) min((((12873140294308391377ULL) - (((/* implicit */unsigned long long int) 854220605)))), (((/* implicit */unsigned long long int) arr_0 [i_1]))));
    }
    var_17 = ((/* implicit */long long int) ((_Bool) var_5));
}
