/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17816
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)125)) : (2)))) ? ((-(var_9))) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
        var_19 = (+(((/* implicit */int) arr_0 [i_1] [i_1])));
        var_20 &= ((/* implicit */_Bool) ((signed char) arr_3 [i_1]));
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)20110))))) ? (4) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))))));
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) (signed char)-90))), (3221225472U)));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((signed char) var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5)))) : (var_9)));
    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
    var_25 |= ((/* implicit */unsigned int) var_16);
}
