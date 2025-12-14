/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134617
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned char)22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 968887309)) ? (-1204714610) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((unsigned short) min((arr_1 [i_0]), (var_3))))) : ((~(arr_1 [i_0])))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (-1265415605)));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            {
                var_15 = (-(max((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) var_11)))), (((arr_5 [i_2]) ? (var_3) : (var_5))))));
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_2 [i_2]);
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_0)))) : (min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((_Bool) (unsigned short)65535)))))));
    var_17 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_1)) ? (min((2147483647), (((/* implicit */int) (short)26878)))) : (max((var_3), (((/* implicit */int) var_10)))))));
}
