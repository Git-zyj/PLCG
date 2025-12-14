/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18054
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    var_13 = ((/* implicit */unsigned long long int) ((_Bool) (~(((((/* implicit */int) var_6)) % (((/* implicit */int) (short)4421)))))));
    var_14 *= ((((/* implicit */int) (short)8902)) <= (697169063));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (short)8912))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_8))));
        var_16 = ((((/* implicit */_Bool) 3455526007U)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)32738)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_2] [i_2]);
                    var_18 = ((var_9) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-27432)) <= (((/* implicit */int) arr_6 [i_2] [i_2])))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_9 [i_3] = ((/* implicit */signed char) -4346411665699260446LL);
        arr_10 [i_3] = ((/* implicit */short) ((long long int) (~(((/* implicit */int) (unsigned short)65532)))));
    }
}
