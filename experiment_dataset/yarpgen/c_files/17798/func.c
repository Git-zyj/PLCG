/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17798
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
    var_13 = (unsigned char)120;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 3] [(unsigned char)12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) ^ (((((/* implicit */int) (unsigned char)149)) << (((((/* implicit */int) (unsigned char)129)) - (109))))))) != ((((-(((/* implicit */int) arr_2 [i_0 + 3] [i_1] [i_1])))) * (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_3))))))));
                var_14 += ((unsigned char) (-(((/* implicit */int) (unsigned char)119))));
            }
        } 
    } 
}
