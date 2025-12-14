/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160178
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 *= arr_0 [i_0];
        var_17 = ((/* implicit */signed char) (-(1213754277)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 2]))));
            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [14ULL]))) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_7 [i_2 - 1]))));
            var_20 = (-(arr_8 [i_1] [i_1]));
        }
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_1] [i_3 + 1]))));
            arr_12 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((arr_9 [i_3 + 1] [i_1]) || (((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3 - 2]))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) ((unsigned long long int) arr_2 [i_4 + 1] [i_4 + 1]));
            var_24 |= ((signed char) (signed char)-1);
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)16] [(unsigned short)16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_9 [i_1] [(signed char)2]))))) : (arr_6 [i_1] [i_1]))))));
            var_26 += ((/* implicit */_Bool) (unsigned short)47816);
        }
        var_27 &= ((/* implicit */unsigned char) ((int) arr_4 [i_1]));
    }
    var_28 = ((/* implicit */unsigned char) var_0);
    var_29 -= ((/* implicit */unsigned short) ((unsigned long long int) var_9));
    var_30 &= ((/* implicit */_Bool) var_0);
}
