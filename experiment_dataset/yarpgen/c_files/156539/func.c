/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156539
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9819557)) ? (((/* implicit */int) var_12)) : (9819558))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-30338))))) ? ((~(((/* implicit */int) arr_8 [i_2 + 1])))) : ((~(-9819557))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23177))))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2 + 1] [i_3 - 1] [i_2] [i_3] [i_4] [i_1] [i_0])))))));
                                var_20 &= (~((~(var_17))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            }
        } 
    } 
    var_21 = (-((-((+(((/* implicit */int) var_3)))))));
}
