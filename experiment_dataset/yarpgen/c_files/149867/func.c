/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149867
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 1])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25932))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)39603)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) (short)29222))))) ? (((/* implicit */int) ((unsigned short) 1168459304908330567LL))) : (((/* implicit */int) arr_1 [i_0]))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1]))))) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])) : ((+(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1] [i_0 + 2])))))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 3])) != (((/* implicit */int) max((((/* implicit */short) arr_2 [i_1] [i_1] [i_1])), ((short)(-32767 - 1)))))))))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((signed char) (unsigned short)39613))), (((unsigned int) arr_0 [i_0 + 2]))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) min(((short)30924), (var_16))))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) var_12))))))));
        }
        for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) var_9);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_2 [i_2 + 2] [i_2 + 2] [i_0 - 1]))));
        }
    }
    for (short i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(arr_6 [(signed char)20]))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_10 [i_3 + 3] [i_3])) : (((/* implicit */int) arr_10 [i_3 + 3] [i_3]))))) - (((((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30280)))))));
    }
    var_28 = ((/* implicit */short) var_18);
}
