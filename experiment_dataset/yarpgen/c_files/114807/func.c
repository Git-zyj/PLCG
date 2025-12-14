/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114807
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
    var_11 = ((/* implicit */signed char) (~((((~(((/* implicit */int) (short)-18925)))) | (((/* implicit */int) ((signed char) var_10)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) -4840504605347812647LL)) ? (arr_1 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (+((((!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [14U])))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)22384)))) : (((/* implicit */int) arr_7 [i_0]))))));
                        var_13 = ((/* implicit */unsigned short) 4840504605347812644LL);
                    }
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2]))) : (-4840504605347812625LL))) % (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_1]))));
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0])) == ((((((-(((/* implicit */int) (unsigned short)28025)))) + (2147483647))) >> (((((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) >> (((/* implicit */int) var_0)))) - (147)))))));
                }
            } 
        } 
    } 
}
