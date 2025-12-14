/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174517
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_11 [6U] = ((/* implicit */unsigned short) max(((-(379379847U))), (((/* implicit */unsigned int) max((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */short) var_3)))))));
                        arr_12 [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-24815)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27722))) : (var_6)))));
                        var_10 = (+(((9007061815787520LL) + (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2450007434U)) ? (((/* implicit */int) (unsigned short)55028)) : (((/* implicit */int) (_Bool)1))))) < (1758106933U))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) var_3)), (((/* implicit */short) ((signed char) var_5))))))) : (var_6)));
    }
    var_12 = ((/* implicit */unsigned short) (unsigned char)233);
    var_13 *= ((/* implicit */short) var_6);
}
