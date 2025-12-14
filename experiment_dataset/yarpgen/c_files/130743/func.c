/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130743
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) (+(((((arr_2 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (short)-15885))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : ((-(var_5)))))));
        arr_4 [16U] [i_0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))));
    }
    var_16 |= ((/* implicit */unsigned short) (~(var_4)));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 244135666)) ? (12654514829127090603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (1320388821873281362LL) : (((/* implicit */long long int) (+(1920206105)))))), (((/* implicit */long long int) ((unsigned char) var_12))))))));
}
