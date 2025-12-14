/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160728
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
    var_12 = (unsigned char)80;
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max(((-(((/* implicit */int) max(((unsigned char)176), (var_11)))))), (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (unsigned char)104)))))))));
    var_14 = (unsigned char)158;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = arr_5 [i_2] [i_2] [i_2];
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)105))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)106))))))))))));
                    var_17 = var_11;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211))))) : (((/* implicit */int) (unsigned char)176)))) | (((/* implicit */int) var_10))));
}
