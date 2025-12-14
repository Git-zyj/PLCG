/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149726
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) * (((/* implicit */int) min((((/* implicit */short) var_4)), (((short) 735235904U)))))));
    var_14 += ((/* implicit */unsigned int) (-(((((/* implicit */int) var_4)) / (var_10)))));
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 735235888U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)64997))))) ^ (var_1)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) 3559731368U);
        var_17 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) arr_1 [i_0]))))) - (((/* implicit */int) ((((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) var_0)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_1]))) / (((/* implicit */int) arr_3 [i_1]))));
        var_19 = ((/* implicit */unsigned short) (+(var_9)));
    }
}
