/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1592
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
    var_12 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)55284)))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [23] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */unsigned char) (short)-32764);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) ^ (((((/* implicit */_Bool) min((1628881271), (((/* implicit */int) (unsigned char)234))))) ? (1628881282) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1053)) && (((/* implicit */_Bool) (short)-32767)))))))));
            var_15 = ((/* implicit */int) 4467570830351532032LL);
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_1))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_17 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
            var_18 = ((/* implicit */short) arr_0 [i_0]);
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((var_7) - (((/* implicit */int) ((_Bool) max((((/* implicit */int) (short)3858)), (-2045359045))))))))));
        }
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
}
