/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152642
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [(_Bool)1] [i_0] |= ((/* implicit */_Bool) (-(arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((min((arr_1 [i_1]), (((/* implicit */int) var_12)))), (((((/* implicit */int) (signed char)-56)) * (((/* implicit */int) arr_5 [i_1])))))))));
        arr_7 [(_Bool)1] [i_1] = ((arr_1 [9ULL]) >> ((((+(((/* implicit */int) ((short) 12060322701474967118ULL))))) + (20923))));
        var_15 = ((/* implicit */short) ((_Bool) ((var_2) >> (((unsigned int) var_12)))));
    }
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((_Bool) (signed char)-56)))));
    var_17 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) var_3);
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((_Bool) ((var_13) ? (((/* implicit */int) arr_10 [(short)0] [i_2] [i_3])) : (((/* implicit */int) (short)7680)))));
            }
        } 
    } 
}
