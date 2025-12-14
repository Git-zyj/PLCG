/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16199
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) 1225764565U);
        arr_4 [i_0] [i_0] &= ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) (~(var_11)))) : ((+(3069202749U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)23577))))));
        arr_5 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (-1160827423) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((int) arr_6 [i_1 + 1]));
            arr_10 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) var_5)) ? (-1888521439) : (((/* implicit */int) (short)28505)))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_14 [i_3] = ((/* implicit */long long int) (~(((arr_7 [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))));
            arr_15 [i_1] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1]))));
            arr_16 [i_1 - 1] = ((/* implicit */short) (!((_Bool)1)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_20 [i_4] = (+((-(3069202749U))));
            var_18 = ((int) ((((/* implicit */_Bool) (short)18698)) ? (((/* implicit */long long int) var_16)) : (5946168658482549552LL)));
            arr_21 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_6 [i_4]) : (((/* implicit */unsigned int) -1160827423))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(var_14))))));
            arr_22 [i_1] [i_4] = ((signed char) arr_11 [i_1 - 2] [i_1 - 2]);
        }
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_25 [i_5] = ((/* implicit */_Bool) (-(arr_2 [i_1 - 2])));
            arr_26 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) -4803985803439149230LL))));
        }
        arr_27 [i_1] [i_1] = ((/* implicit */short) 78267044);
        arr_28 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) (short)-28051)) - (var_1)))));
        arr_29 [i_1] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-112)) : ((-(((/* implicit */int) (short)-25357))))));
        arr_30 [i_1] = ((/* implicit */short) var_13);
    }
    /* LoopSeq 1 */
    for (short i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        var_20 *= ((/* implicit */signed char) arr_31 [i_6]);
        arr_33 [i_6] [i_6] = ((/* implicit */_Bool) max(((~(var_1))), (((/* implicit */int) var_15))));
    }
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23245))) != (3069202730U))))))));
}
