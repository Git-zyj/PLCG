/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163801
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
    var_20 = var_16;
    var_21 = ((/* implicit */unsigned char) min((((unsigned int) (short)8026)), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) (unsigned char)171)) - (161))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)6] = ((/* implicit */short) ((((((((/* implicit */int) (short)4095)) / (arr_5 [(signed char)11] [(signed char)11] [(unsigned short)8]))) < (((/* implicit */int) arr_1 [(unsigned short)2])))) ? (((((/* implicit */unsigned long long int) var_17)) - (min((arr_0 [(short)9]), (((/* implicit */unsigned long long int) 3780320319U)))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))) - (((/* implicit */int) ((unsigned short) var_7))))))));
                var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (-((~(arr_5 [11U] [11U] [12U])))))), (var_3)));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4945343604063678755LL)) | (6619020988307389675ULL)));
}
