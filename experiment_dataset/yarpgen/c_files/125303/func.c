/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125303
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
    var_18 &= ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)122))));
        arr_4 [1U] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_5 [i_0] [(signed char)6] = ((/* implicit */unsigned char) ((signed char) (-(arr_1 [(signed char)8]))));
        arr_6 [i_0 + 1] = ((/* implicit */unsigned short) ((signed char) (signed char)-83));
        arr_7 [i_0] |= ((/* implicit */_Bool) var_14);
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
        arr_12 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((min((var_6), (((/* implicit */unsigned long long int) var_8)))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767)))))))), (max((((/* implicit */unsigned short) (signed char)-29)), (arr_8 [i_1 + 2] [i_1])))));
        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_8 [i_1 - 3] [i_1]), (arr_8 [i_1] [i_1])))) | (((/* implicit */int) ((signed char) arr_8 [i_1 + 1] [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 16; i_2 += 3) /* same iter space */
    {
        arr_17 [(unsigned short)13] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [(_Bool)1])) <= (((/* implicit */int) arr_16 [i_2]))));
        arr_18 [i_2] |= ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_0 [i_2])))));
    }
}
