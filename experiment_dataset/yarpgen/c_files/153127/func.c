/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153127
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
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_10 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_11 = ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_4))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((-6343400686015004255LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-325)))))) : (min((((/* implicit */unsigned long long int) ((unsigned short) var_1))), ((+(arr_2 [i_1]))))))))));
            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) -8524877500490835631LL)) ? (((/* implicit */int) (short)305)) : (-1161313690))) == (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)-325))))));
            var_15 = ((/* implicit */_Bool) min((var_15), ((((~(((/* implicit */int) (short)-325)))) >= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-316)) : (-1711932689)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2] [i_0])) ^ (((/* implicit */int) var_6))));
            arr_9 [i_0] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (arr_2 [i_2])))));
            var_16 *= ((/* implicit */unsigned char) arr_0 [i_2]);
        }
        arr_10 [6ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_1 [i_0 + 3] [i_0 - 1])))));
    }
    var_17 = ((/* implicit */unsigned short) var_0);
}
