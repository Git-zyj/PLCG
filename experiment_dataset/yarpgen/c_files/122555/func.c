/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122555
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
    var_10 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((unsigned long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)28772)))))))));
        arr_3 [i_0] = ((/* implicit */short) ((-1536164577) / ((~(((/* implicit */int) (short)-15990))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_1 [i_0] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))))) * (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)28022)) >= (((/* implicit */int) (unsigned short)59081))))))));
        var_12 = ((/* implicit */unsigned long long int) (~((((+(arr_0 [i_0]))) << (((/* implicit */int) ((_Bool) (unsigned short)6459)))))));
    }
    var_13 = ((/* implicit */_Bool) (-((-(((int) var_6))))));
}
