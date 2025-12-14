/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177491
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) ((1708627848) <= (arr_2 [i_0])))))), (57018555)));
            var_11 = (+((+(57018555))));
            arr_7 [i_0] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned char) (~((((~(57018563))) % (((((/* implicit */_Bool) (unsigned char)8)) ? (57018546) : (((/* implicit */int) var_10))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_10 [i_2] = ((int) var_8);
            arr_11 [i_0] [i_2] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)176)))))));
        }
        var_12 ^= ((int) (~(1288222393)));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? ((~((-(var_2))))) : (((/* implicit */int) ((unsigned char) 57018546)))));
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_14 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)67)) : (arr_4 [i_3] [i_3] [i_3]))), (arr_3 [i_3] [i_3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (var_7) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) -689143509)) ? (((/* implicit */int) arr_14 [i_3])) : (arr_15 [i_3]))) : (min((-174513658), (((/* implicit */int) arr_0 [i_3])))))) : ((~((~(-57018562))))));
        var_15 = arr_2 [i_3];
        var_16 &= min((2147483636), ((~(((/* implicit */int) var_5)))));
    }
    var_17 = var_0;
}
