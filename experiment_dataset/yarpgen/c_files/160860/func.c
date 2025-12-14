/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160860
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_10)) | (((/* implicit */int) var_9))))));
        arr_4 [i_0 + 3] = ((/* implicit */long long int) (~((-(((/* implicit */int) var_0))))));
        arr_5 [i_0] [i_0 + 3] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_10))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((((((/* implicit */int) var_4)) * (((/* implicit */int) var_5)))) / ((~(var_11))))))))));
        var_17 = ((/* implicit */signed char) (~((+((~(var_3)))))));
        var_18 = ((/* implicit */signed char) ((min(((-(var_12))), (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_5), (((/* implicit */short) var_2))))) & ((~(((/* implicit */int) var_4)))))))));
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_6)))) >= (min(((-(((/* implicit */int) (unsigned char)80)))), (((/* implicit */int) (signed char)-109)))))))));
}
