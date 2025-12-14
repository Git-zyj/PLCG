/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156550
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
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    var_16 = var_10;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) var_10);
        var_18 = ((/* implicit */signed char) 4973236148734495230ULL);
    }
    /* LoopSeq 4 */
    for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (_Bool)1)))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) (unsigned char)108)))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) var_13)), ((-(((((/* implicit */int) arr_0 [i_1])) + (arr_1 [i_1])))))));
        arr_5 [i_1 + 1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((signed char) (~(((/* implicit */int) (short)-28259))))));
        arr_6 [i_1] = ((/* implicit */short) ((unsigned int) (short)-1));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-28996)) : (((/* implicit */int) arr_2 [i_2]))))) ? (((/* implicit */int) ((signed char) var_1))) : ((~(((/* implicit */int) (_Bool)1))))))));
        arr_10 [(signed char)2] = ((/* implicit */signed char) arr_8 [i_2]);
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_21 &= ((/* implicit */unsigned char) (~(((1698012352U) & (268435456U)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (var_7) : (4294967295U)))) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) min((((/* implicit */signed char) var_2)), (((signed char) var_2)))))));
        var_23 = ((/* implicit */short) var_11);
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned int) (short)32754)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967292U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((unsigned short) (signed char)-16))) : (((/* implicit */int) (short)28996))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_6))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])), (arr_16 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) (signed char)75))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4]))))) : (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29003))))) / (arr_16 [i_4])))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)81))))))))))));
    }
}
