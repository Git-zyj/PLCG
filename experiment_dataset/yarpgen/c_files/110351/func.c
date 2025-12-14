/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110351
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (var_1)))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_7)))) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-22466))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) ((int) ((-101857574) / (((/* implicit */int) (short)-22466)))));
                arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))), ((+(((-1158914833) / (16383)))))));
                var_14 -= (((+(((/* implicit */int) var_6)))) - (((/* implicit */int) (unsigned short)41395)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+((+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)331)) : (-1)))) ? (min((1158914832), (-60780900))) : (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((var_7), (((/* implicit */short) var_5))))))))));
                arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */int) ((short) (unsigned short)4096))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)19993)) : (((/* implicit */int) (unsigned short)3126))))))) ? (min((min((1158914832), (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)45543)) : (203429550))))) : ((+(-1922176771)))));
                var_17 += max((min((((/* implicit */int) (short)0)), (-1422720005))), ((~(((/* implicit */int) var_3)))));
            }
        } 
    } 
}
