/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127313
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(min((2147483647), (-514941303)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)255)))) | (((((/* implicit */int) (short)-32764)) * (((/* implicit */int) (short)-26129))))))) ? (min((max((((/* implicit */unsigned long long int) (unsigned short)3882)), (3018426742457823053ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10035))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -514941308)) ? (((/* implicit */int) (short)10024)) : (((/* implicit */int) (short)-13248))))) ? (((((/* implicit */_Bool) 1649235484U)) ? (((/* implicit */int) (short)26129)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((short) -233967991))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_16);
}
