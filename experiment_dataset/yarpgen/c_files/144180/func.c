/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144180
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
    var_14 = ((/* implicit */unsigned long long int) max((4086875055882743048LL), (((/* implicit */long long int) (unsigned short)65535))));
    var_15 = ((/* implicit */unsigned char) var_9);
    var_16 = ((/* implicit */unsigned int) ((short) (short)-6));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_1)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((-(((var_11) << (((((/* implicit */int) var_7)) - (198))))))) & (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) < (((/* implicit */int) var_0))))))))));
                var_19 = ((/* implicit */unsigned short) 15447584451377925262ULL);
                arr_6 [i_0] &= ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (signed char)-60)) + (80))) - (20))))), (((((/* implicit */int) (short)5)) | (((/* implicit */int) arr_0 [i_0 - 4] [i_1 - 1]))))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((16017638392051791137ULL) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)-15368)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (72057594037923840LL))) : (((/* implicit */long long int) max((1804544603), (((/* implicit */int) (short)15367)))))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1598778233U))))), ((+(11781739507871195891ULL))))))))));
            }
        } 
    } 
}
