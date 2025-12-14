/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129195
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
    var_11 = ((/* implicit */unsigned char) (+((~((-(1538609127U)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [(short)18] = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2 - 1] [i_1] |= ((/* implicit */short) ((((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 3]))) : (4294967295U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) >= (((/* implicit */int) var_0))))))));
                        arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 16080819522609907988ULL)) || (((/* implicit */_Bool) arr_5 [i_1 + 1]))))));
                        var_12 = ((/* implicit */unsigned int) var_4);
                        arr_12 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned short) ((arr_7 [i_1]) >= (((((/* implicit */_Bool) arr_5 [i_2])) ? ((((_Bool)1) ? (1950931138618478763LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                        arr_13 [(_Bool)1] [i_2 + 2] [i_0] = 1U;
                    }
                    var_13 -= ((/* implicit */unsigned long long int) arr_2 [20LL] [i_1]);
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_3)) : ((-((~(((/* implicit */int) arr_0 [i_1] [i_2]))))))));
                }
            } 
        } 
    }
}
