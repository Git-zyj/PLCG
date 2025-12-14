/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128887
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 += ((/* implicit */int) var_6);
        var_16 = ((/* implicit */short) (-(((long long int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min(((short)8192), (((/* implicit */short) arr_5 [i_1])))))) <= (((min((-1975368583842551990LL), (((/* implicit */long long int) (signed char)5)))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))));
        var_18 |= ((/* implicit */short) ((((unsigned long long int) (-(1261361736)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-63)) <= (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_5 [(_Bool)1])))))))))));
    }
    var_19 = var_1;
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_13))), (min((((/* implicit */long long int) var_11)), (-1975368583842551990LL)))))) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (((short) var_14))))) : ((+(((/* implicit */int) var_4))))));
}
