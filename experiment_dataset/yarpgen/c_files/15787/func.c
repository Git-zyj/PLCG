/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15787
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) <= (arr_0 [i_0 + 1])))) == (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (((/* implicit */int) arr_1 [i_0 + 1]))))))))));
        var_15 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_0 - 1])) << (((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) arr_1 [i_1]);
                    arr_10 [i_1] [i_1] [12LL] [i_3] = ((/* implicit */unsigned short) ((arr_3 [i_1]) & (arr_3 [i_1])));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [13LL])) : (arr_0 [i_1]))))));
                }
            } 
        } 
        arr_11 [i_1] = ((short) arr_6 [i_1]);
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)14705))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)27684)) & (var_0))))))));
    var_20 = ((/* implicit */short) var_5);
}
