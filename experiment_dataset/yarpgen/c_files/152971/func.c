/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152971
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
    var_15 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)30009)), (0ULL)));
    var_16 += ((/* implicit */unsigned char) min((((/* implicit */signed char) var_8)), (var_4)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_2 [(unsigned char)9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13938))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) | (max((((/* implicit */int) arr_3 [(short)16] [i_0])), ((-(-449343098)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
        var_18 *= ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
    var_19 = ((/* implicit */unsigned short) (signed char)-16);
}
