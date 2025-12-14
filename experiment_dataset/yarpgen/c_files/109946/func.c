/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109946
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_1 - 1] [(signed char)0])))) ? ((~(((/* implicit */int) arr_4 [i_1 - 2])))) : (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1])) : (((/* implicit */int) var_0))))));
                arr_7 [i_0] = (signed char)-20;
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)19)) * (((/* implicit */int) (signed char)-98))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_11 -= ((/* implicit */signed char) (short)32767);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
        var_12 = (signed char)-19;
        arr_12 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_2])))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_8))))));
    }
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_3 - 1]))))), (min((((/* implicit */unsigned short) (short)27259)), (arr_15 [i_3 + 2])))))));
        var_14 |= ((/* implicit */signed char) (-((-((+(((/* implicit */int) (signed char)-52))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) min((var_6), (((/* implicit */short) arr_13 [i_3]))))) - (((/* implicit */int) arr_13 [i_3]))));
        arr_17 [i_3] = ((/* implicit */signed char) (((-(((/* implicit */int) min((arr_14 [i_3]), (arr_15 [(unsigned short)9])))))) == (((/* implicit */int) min((arr_14 [i_3 + 1]), (arr_15 [i_3 + 1]))))));
    }
    var_15 |= ((/* implicit */signed char) var_4);
}
