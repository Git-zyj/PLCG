/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110185
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((long long int) (~(arr_1 [5ULL] [5ULL])))) : (((/* implicit */long long int) ((int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 2023764016))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0])))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)203))) ? (1748791423U) : (((/* implicit */unsigned int) 2023764038))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((long long int) (+(max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (1287650586U))))));
    }
    var_20 = ((/* implicit */signed char) min((((unsigned char) (+(((/* implicit */int) var_11))))), (((/* implicit */unsigned char) var_0))));
    var_21 = ((/* implicit */unsigned int) -2023764020);
}
