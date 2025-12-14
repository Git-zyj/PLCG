/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15206
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
    var_17 = ((/* implicit */unsigned long long int) var_14);
    var_18 = ((/* implicit */int) (~(4156271324052075586ULL)));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)24260)) | (var_1)))))), (((((/* implicit */_Bool) -1014318302)) ? (min((((/* implicit */unsigned long long int) -1075653820)), (16357133963981252520ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_10))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((((/* implicit */unsigned long long int) 1139937124)) == (8189469153863405358ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 427191184)))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) ((unsigned short) arr_3 [i_0]))))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (unsigned short)27215)))))) > (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)29046), ((unsigned short)65529)))) <= (((/* implicit */int) ((234726658678081092ULL) > (((/* implicit */unsigned long long int) -689347129))))))))));
    }
    var_21 = ((/* implicit */unsigned char) (-((+(((((var_4) + (2147483647))) >> (((2147483647) - (2147483646)))))))));
}
