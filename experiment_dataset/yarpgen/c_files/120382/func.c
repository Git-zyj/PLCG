/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120382
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
    var_20 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_2 [i_0])))) <= (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_19)))), (arr_2 [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) var_4);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((-956391961) | (((/* implicit */int) (signed char)20)))) - (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)50370))))))));
        arr_5 [2ULL] [i_0] &= ((/* implicit */unsigned int) (short)-14544);
        var_22 = ((((/* implicit */_Bool) -956391961)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((13248774511758341147ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5784))))))) : (((unsigned long long int) 575117747106314637ULL)));
    }
}
