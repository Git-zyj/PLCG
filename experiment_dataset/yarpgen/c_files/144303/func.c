/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144303
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
    var_11 = (~(max((((/* implicit */unsigned long long int) 2147483643)), (127ULL))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (2312512835U)))) ? (((/* implicit */int) min(((unsigned short)58463), ((unsigned short)65535)))) : ((-(((/* implicit */int) (_Bool)1))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_5))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((max(((-(369839524))), (((/* implicit */int) (unsigned short)46794)))), (max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) 1982454461U)), (-7714489739380076020LL))), (((/* implicit */long long int) (unsigned short)65528)))))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_1))));
}
