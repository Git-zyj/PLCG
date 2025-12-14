/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161365
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_5);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-49))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)82)) / (((/* implicit */int) min(((signed char)20), ((signed char)-18)))))))));
        var_12 -= ((/* implicit */unsigned short) ((5169801770111151799ULL) < (((/* implicit */unsigned long long int) -1935903007))));
    }
    var_13 = ((/* implicit */int) -1573070074518500640LL);
}
