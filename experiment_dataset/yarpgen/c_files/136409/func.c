/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136409
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
    var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_4))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)5421), (((/* implicit */unsigned short) (short)32766))))) ? (((((/* implicit */_Bool) var_4)) ? (-9223372036854775807LL) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-32736)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)28)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-23923))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (990083312) : (((/* implicit */int) var_3)))))));
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 1674326195U))))), ((signed char)-102))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0 + 3] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) (unsigned short)4022)))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 3]))))) : (((/* implicit */int) arr_6 [i_1]))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)1]))) | (((((/* implicit */_Bool) var_10)) ? (4783471215231241140LL) : (((/* implicit */long long int) arr_1 [i_0 + 3]))))));
            var_22 = ((/* implicit */unsigned short) ((3817903898U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4022)))));
        }
        var_23 = ((/* implicit */unsigned int) arr_6 [(unsigned short)16]);
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-4783471215231241140LL)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)-32364))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) arr_0 [i_2]))))) : (((/* implicit */int) ((unsigned short) max((arr_2 [i_2]), (((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_2]))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (-990083311) : (((/* implicit */int) (short)32766))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)14)))))))));
            var_26 = ((/* implicit */unsigned short) arr_11 [i_2] [i_3]);
            var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_3])), ((-(((unsigned int) arr_2 [i_2]))))));
        }
    }
}
