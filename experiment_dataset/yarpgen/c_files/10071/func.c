/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10071
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2259842095U)) ? (((/* implicit */unsigned long long int) 5187636416013822112LL)) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) (-2147483647 - 1))), (5187636416013822112LL)))))) && (((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (_Bool)0)), (-1597643864)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~((~((-2147483647 - 1))))));
        arr_4 [(short)11] = ((/* implicit */signed char) (+(((long long int) arr_0 [i_0]))));
        var_15 |= ((/* implicit */long long int) (unsigned short)7093);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_2 [i_0])))))) < (((8217653217024996699ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned char)176))))))));
        arr_8 [i_1] = ((/* implicit */short) ((signed char) ((signed char) 4093085249U)));
    }
}
