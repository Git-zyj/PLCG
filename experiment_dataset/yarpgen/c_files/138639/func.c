/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138639
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)0) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)32767)), (127U)))) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_21 = min((((/* implicit */unsigned long long int) var_16)), (12733786987647437060ULL));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)13637), (((/* implicit */unsigned short) (short)-32742)))))) > (-6881744984266287642LL)));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+((+((~(((/* implicit */int) (signed char)-88)))))))))));
        /* LoopSeq 2 */
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) & (6881744984266287638LL))) * (17179869183LL)));
            var_23 -= ((/* implicit */unsigned int) arr_3 [i_0]);
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (short i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_1 + 2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32750)) ? (((/* implicit */int) max((arr_11 [i_1 - 3] [i_1] [i_3] [i_2] [i_4 + 2]), (arr_11 [i_1 + 2] [i_1] [i_3] [i_3] [i_4 + 2])))) : (((/* implicit */int) ((unsigned short) max((var_3), ((signed char)127)))))));
                            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 12733786987647437044ULL)) ? (((/* implicit */unsigned long long int) var_19)) : ((~(var_10)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (-((+(((((/* implicit */long long int) arr_4 [i_5])) + (-8815709246184277710LL)))))));
            arr_17 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_18);
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_0 + 2]))))))) ? (((/* implicit */int) (short)29400)) : (((/* implicit */int) (_Bool)1))));
        arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -8815709246184277728LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))) ? (min((5712957086062114568ULL), (12733786987647437060ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25030)))));
    }
    for (int i_6 = 2; i_6 < 15; i_6 += 4) /* same iter space */
    {
        arr_21 [i_6 + 2] [i_6] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned int) (signed char)114)), (((((/* implicit */_Bool) var_9)) ? (arr_9 [(short)9] [i_6] [i_6 + 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6 - 2])) ? (arr_13 [i_6] [i_6 + 2] [(signed char)2] [i_6 + 1] [i_6 + 1]) : (arr_13 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [(short)14]))), (arr_13 [7LL] [i_6] [i_6] [i_6 - 1] [i_6 - 1])));
        arr_23 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)215)))), (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]))))) == (((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_6])) ^ (((/* implicit */int) var_13))))) ^ ((~(arr_5 [7LL])))))));
    }
}
