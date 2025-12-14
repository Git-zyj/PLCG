/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100775
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45336))) >= (-5472587324242682865LL)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) max((((unsigned short) var_7)), (((/* implicit */unsigned short) var_2))))) * (((int) (+(((/* implicit */int) var_5)))))));
                    arr_12 [6ULL] [i_1] [i_1] [(short)8] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_14) : (arr_10 [i_2])))) ? (-12) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)9090))) == (var_11))))))), (min((12866971992821711396ULL), (((/* implicit */unsigned long long int) 11))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_0] [i_0]))) >= (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= ((+(((/* implicit */int) (signed char)96)))))))));
    }
    var_17 = ((/* implicit */int) var_11);
}
