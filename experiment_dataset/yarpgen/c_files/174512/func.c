/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174512
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0 + 2]);
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)49))))));
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_18 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)103)) + (((/* implicit */int) var_9)))));
        var_19 = ((/* implicit */unsigned short) var_12);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) >> ((((-(arr_4 [i_1] [i_1]))) + (137502815)))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)36058)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_3), (((/* implicit */long long int) 340214927U))));
                    var_22 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)88)), (arr_7 [i_3])))) ? (((/* implicit */int) ((unsigned short) 2U))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4])))))))));
                    arr_14 [i_2] [i_3] [i_2] = max((-5065204713512366665LL), (0LL));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((-(arr_10 [i_2] [i_2] [i_2]))) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))))))));
    }
    var_24 -= ((/* implicit */unsigned short) var_10);
    var_25 = ((/* implicit */unsigned char) var_6);
    var_26 |= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) % ((-(max((((/* implicit */long long int) (_Bool)1)), (var_3)))))));
    var_27 = ((0LL) + (((/* implicit */long long int) ((unsigned int) var_4))));
}
