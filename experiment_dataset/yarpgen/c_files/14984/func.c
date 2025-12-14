/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14984
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
    var_18 = ((/* implicit */_Bool) min((var_18), (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) 1444868351);
                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_5 [i_0 + 3] [i_1] [(unsigned short)9])) & ((~(var_17))))), (((((/* implicit */_Bool) (unsigned char)126)) ? (1444868351) : (1444868351)))));
                var_21 = ((/* implicit */unsigned char) (unsigned short)14142);
                arr_6 [8] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) -1444868351))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_22 -= ((((/* implicit */_Bool) min(((short)0), ((short)9992)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_5), (min((var_5), (var_7)))))));
}
