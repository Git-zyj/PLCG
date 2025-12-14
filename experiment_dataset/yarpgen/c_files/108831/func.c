/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108831
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1441654282)))) ? (((var_5) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((int) (unsigned short)34419)))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (3538373526U) : (1314700106U)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) (!(((_Bool) (unsigned char)183))));
        var_14 -= var_8;
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */short) arr_8 [i_3] [i_3]);
        arr_13 [i_3] |= ((/* implicit */unsigned short) var_0);
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 3707718119U))));
    }
    var_16 = ((/* implicit */_Bool) var_9);
}
