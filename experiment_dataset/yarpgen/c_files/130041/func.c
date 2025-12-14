/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130041
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
    var_15 = ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_13 [i_3 - 2] [i_2] [i_1 - 1] [i_0] [i_0] = ((((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2])))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (((((_Bool)1) ? (17849246889560401427ULL) : (((/* implicit */unsigned long long int) arr_12 [(unsigned short)5] [(unsigned short)5] [i_2] [(unsigned short)5])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3] [i_0 - 2])))))));
                        arr_14 [i_0] = ((/* implicit */signed char) max((((_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 4]))) * (arr_10 [i_0 - 3] [i_1 + 2] [i_2 - 3] [i_2] [i_3]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_3 - 1])))))))));
                        arr_15 [i_1 + 2] [i_1 + 2] [i_3] = ((/* implicit */signed char) ((min((arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3]), (arr_8 [i_3 - 2] [i_3] [i_3] [i_3 - 2]))) ? (((unsigned int) arr_8 [i_3 - 1] [12U] [i_3] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1])))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) 4294967295U);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_19 [i_4] [i_4] |= ((_Bool) arr_17 [i_4]);
        arr_20 [i_4] = ((unsigned int) arr_18 [i_4] [i_4]);
    }
    var_18 = ((/* implicit */_Bool) ((signed char) max((var_14), (((/* implicit */unsigned long long int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
}
