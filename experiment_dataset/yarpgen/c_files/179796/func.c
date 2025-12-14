/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179796
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)6144)))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) (unsigned short)6144)), (-6098145989118946699LL))));
        var_14 = ((/* implicit */signed char) ((unsigned int) ((((long long int) arr_6 [8U])) == (((/* implicit */long long int) arr_5 [i_1])))));
        var_15 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)6150))))));
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (short)-8320))));
}
