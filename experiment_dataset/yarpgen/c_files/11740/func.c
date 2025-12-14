/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11740
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
    var_13 = ((/* implicit */signed char) var_4);
    var_14 = ((/* implicit */short) (~(15450066577199231664ULL)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 += ((/* implicit */signed char) arr_1 [i_0]);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)16)) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65526)) && (((/* implicit */_Bool) 2996677496510319948ULL))))))))));
        var_18 = ((/* implicit */unsigned short) arr_3 [i_1]);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */int) (unsigned char)222))))) ? (((/* implicit */int) ((unsigned char) 2996677496510319957ULL))) : (arr_3 [i_1])));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_3])))), (((/* implicit */int) arr_4 [i_1])))))));
                    var_21 = ((/* implicit */unsigned long long int) ((int) (unsigned char)245));
                }
            } 
        } 
    }
}
