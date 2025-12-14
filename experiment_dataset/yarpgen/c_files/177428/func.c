/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177428
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
    var_16 = ((/* implicit */unsigned int) max((min((((-7980089246323440052LL) | (1136192267610666243LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)15))))))), (((/* implicit */long long int) (-(((var_15) * (((/* implicit */unsigned int) var_6)))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_7))));
    var_18 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */int) ((short) arr_2 [i_0 + 3] [i_0 + 2]));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(15379339858529134LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (-7980089246323440031LL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        arr_7 [(short)8] [i_1 + 1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)960))));
        arr_8 [(signed char)10] [i_1 + 1] = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1 - 1] [i_1 + 1]));
    }
    var_20 = 8790219722339702681ULL;
}
