/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178689
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
        var_11 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1))))) : (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (12059840974233961928ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((unsigned char) var_7))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                var_12 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1])) >= (((/* implicit */int) var_7)))))));
                var_13 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
}
