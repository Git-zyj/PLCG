/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159271
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)16])) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), (var_3))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_8), ((unsigned char)49))))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((unsigned char) (~((~(((/* implicit */int) (unsigned char)72)))))))));
                }
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_9)))) == ((+(((/* implicit */int) (unsigned char)240))))));
}
