/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144826
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
    var_20 = var_3;
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 508)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(-860904084)));
        arr_3 [(short)6] &= (((!(((/* implicit */_Bool) (short)6642)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (var_5))))) : ((~(2009361941251587416ULL))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            var_22 += ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned int) arr_6 [i_1] [i_2 - 1] [i_2 - 1])), (3189852289U))));
            var_23 = ((/* implicit */int) 3446221866U);
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_12 [i_1] = ((/* implicit */long long int) var_4);
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2828561448U)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
            arr_13 [18LL] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64001))) : (3189852289U))));
            arr_14 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 860904084)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2]))) % (-2913298899339034425LL)))) ? (min((1531195025U), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5 + 1] [i_5 - 1])))));
                            arr_28 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_10))) % (((((((/* implicit */_Bool) (unsigned short)54318)) ? (((/* implicit */int) var_16)) : (-860904084))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) < (var_12))))))));
                        }
                    } 
                } 
            } 
            var_26 = ((((/* implicit */_Bool) var_4)) ? (((1U) >> (((((/* implicit */int) var_15)) - (39269))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1 + 2])))))));
        }
        var_27 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
    }
}
