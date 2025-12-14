/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165766
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | ((-(((((/* implicit */int) var_12)) % (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 ^= max(((unsigned short)33981), ((unsigned short)45179));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0])) >> (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)35916)) : (((/* implicit */int) (unsigned short)34917)))) - (35913))))) > (((/* implicit */int) min((var_4), ((unsigned short)4763))))));
        var_19 -= (unsigned short)51706;
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56666)) ? (((/* implicit */int) (unsigned short)58002)) : (((/* implicit */int) (unsigned short)4746))));
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))) : (((/* implicit */int) var_7))));
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            arr_9 [i_1] [i_2] &= (unsigned short)51706;
        }
    }
    /* LoopSeq 2 */
    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_12 [i_3 + 2]), (var_7)))) ? (max(((-(((/* implicit */int) (unsigned short)14719)))), ((+(((/* implicit */int) arr_12 [i_3])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned short)37938))))) ? (((/* implicit */int) max(((unsigned short)51686), ((unsigned short)65532)))) : (((/* implicit */int) arr_11 [i_3 + 2]))))));
        var_24 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)3784)) % (((/* implicit */int) (unsigned short)4763)))) > (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) (unsigned short)13811)) : (((/* implicit */int) min(((unsigned short)37005), ((unsigned short)4750))))))));
        arr_13 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)4756), (min(((unsigned short)65522), ((unsigned short)60780)))))) >> (((((/* implicit */int) arr_10 [i_3] [i_3])) - (58875)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)4756), (min(((unsigned short)65522), ((unsigned short)60780)))))) >> (((((((/* implicit */int) arr_10 [i_3] [i_3])) - (58875))) + (33106))))));
        var_25 &= (unsigned short)55898;
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_26 -= var_15;
        arr_18 [i_4] [i_4] = var_13;
        arr_19 [i_4] [i_4] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (unsigned short)40628)) : (((/* implicit */int) arr_14 [i_4])))), (((/* implicit */int) arr_12 [i_4]))));
    }
}
