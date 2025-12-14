/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177650
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)16383))))) * (((((/* implicit */int) (short)-16384)) * (((/* implicit */int) arr_3 [i_0])))))) == (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)128)))) == ((~(((/* implicit */int) (short)-9090)))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(((((arr_2 [1U]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) + (var_6)))))))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12))))))) % ((((+(((/* implicit */int) arr_3 [i_0])))) + ((-(((/* implicit */int) var_4))))))));
    }
    var_17 = ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23072)) && (((/* implicit */_Bool) -569864288)))))))));
}
