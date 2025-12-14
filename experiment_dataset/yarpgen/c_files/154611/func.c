/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154611
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_8))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (+(((/* implicit */int) ((var_2) < (((/* implicit */int) (short)-11489))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(var_2)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (short)11488);
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (short)-11489)) + (((/* implicit */int) (short)11460))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(((max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) -493684803)))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
}
