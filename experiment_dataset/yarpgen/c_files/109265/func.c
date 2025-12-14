/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109265
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)27215)) ? (7024630391528754283LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1325282871))))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((_Bool) (~(((/* implicit */int) (unsigned char)27))));
                    var_15 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 3] [i_0 - 2] [i_0 - 2])))) ? (min((((((/* implicit */int) (short)-1)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)63)) / (((/* implicit */int) (unsigned char)9))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_7), (((/* implicit */int) (_Bool)1))));
}
