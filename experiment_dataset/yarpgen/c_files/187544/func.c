/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187544
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-2904))))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) var_15)))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned int) -784071236)))) : (((/* implicit */unsigned int) var_12))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
        var_18 = ((/* implicit */unsigned long long int) 3116331863U);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1124295498967747919LL)) ? (-1) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */_Bool) -1124295498967747922LL);
        arr_13 [i_3] |= (~(((unsigned int) var_5)));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) 2112917391U))), (min((((/* implicit */unsigned long long int) (short)-29867)), (17264940279251280076ULL)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_3 [i_3 - 1]))))) ? (((/* implicit */int) (short)11219)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))));
    }
    var_23 = ((/* implicit */short) var_2);
}
