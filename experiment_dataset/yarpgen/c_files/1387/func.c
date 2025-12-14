/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1387
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
    var_15 = var_7;
    var_16 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)19430))))));
        arr_2 [i_0] [16ULL] = ((((((/* implicit */_Bool) (+(1830711908U)))) ? (((((/* implicit */_Bool) 1830711908U)) ? (2147483647) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((176871974U) > (865935849U)))))) << ((((~(var_4))) - (13778390992620853582ULL))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_9 [i_0 - 1] [i_0] [i_1] [i_2] [i_1] [1U] = ((/* implicit */unsigned int) (((-(((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_8 [i_1]))))))) - (((/* implicit */int) var_10))));
                        var_18 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (-(var_4)))) ? (((((/* implicit */_Bool) var_14)) ? (996016914) : (((/* implicit */int) var_8)))) : (-996016915))));
                    }
                } 
            } 
        } 
    }
}
