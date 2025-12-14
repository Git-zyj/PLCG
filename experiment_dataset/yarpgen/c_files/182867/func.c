/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182867
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */int) 2365393881552580434ULL);
                var_13 = ((/* implicit */unsigned short) ((signed char) ((long long int) arr_3 [i_0])));
                var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) arr_2 [1U])) ? (var_2) : (arr_0 [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), ((short)-2000))))))));
                var_15 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
                var_16 ^= ((/* implicit */long long int) min((((5714072648266948636ULL) | (12732671425442602981ULL))), (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned int) ((int) (_Bool)1)));
    var_18 &= ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */int) var_3);
}
