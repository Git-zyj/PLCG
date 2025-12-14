/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133880
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
    var_13 = ((/* implicit */unsigned char) (short)56);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) min((((/* implicit */int) (_Bool)1)), (-10))));
        arr_4 [8ULL] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_0 - 1]) <= (arr_0 [i_0 + 1])))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)61)) || (((/* implicit */_Bool) 4124325701U)))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((var_11) ? (-11) : (((/* implicit */int) (_Bool)1))));
    }
}
