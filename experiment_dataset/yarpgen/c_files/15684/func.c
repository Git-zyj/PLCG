/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15684
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max(((unsigned short)27533), (((/* implicit */unsigned short) (unsigned char)181))))) : (((/* implicit */int) var_8))))) ? (var_11) : (1315669290U)));
    var_16 = ((short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (_Bool)1)))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned int) 5602190667632650047LL);
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) + ((+(((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (2979298006U)))) : ((-9223372036854775807LL - 1LL))))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_3);
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
        }
    }
}
