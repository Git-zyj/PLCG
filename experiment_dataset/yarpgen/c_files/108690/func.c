/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108690
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
    var_11 = ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (7831763536563439039LL));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */int) ((unsigned char) arr_0 [i_1]));
                arr_6 [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */int) (~(min((max((7831763536563439039LL), (((/* implicit */long long int) arr_3 [i_0])))), (min((-7831763536563439039LL), (((/* implicit */long long int) arr_3 [i_0]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) min((var_6), (((/* implicit */short) var_2)))))) * ((+(((/* implicit */int) ((unsigned short) var_3)))))));
}
