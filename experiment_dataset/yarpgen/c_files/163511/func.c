/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163511
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 += ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63519))));
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-1))));
        var_20 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) -1845591387);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) var_11);
                        arr_11 [i_1] [i_4] [i_3] [i_4] = ((/* implicit */signed char) (~(1845591408)));
                        var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_17)), (((var_7) * (((/* implicit */unsigned long long int) -1845591387))))));
                        arr_12 [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned long long int) ((long long int) ((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1845591390)) ? (((/* implicit */int) var_0)) : (1845591386)))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) (~(1845591388)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-1845591386))))));
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (max((1845591360), (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_0))))))) : (min((min((-1845591388), (-1845591387))), (1845591386)))));
        /* LoopNest 2 */
        for (long long int i_6 = 4; i_6 < 20; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) max((1845591386), (-1845591387)));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((1845591386), (max((min((-1845591386), (1845591387))), (-1845591361))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) -1845591386))))) ? (((/* implicit */int) min((var_3), (((/* implicit */signed char) var_6))))) : ((-(((((/* implicit */_Bool) var_13)) ? (1845591377) : (((/* implicit */int) var_0)))))))))));
        var_26 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 1845591371)), (var_7))) <= (((/* implicit */unsigned long long int) min((-1845591396), (-1845591387))))));
    }
    var_27 = ((/* implicit */unsigned short) (~(((((-1845591361) + (2147483647))) >> (((1845591386) - (1845591366)))))));
    var_28 |= ((/* implicit */signed char) max((((/* implicit */int) var_15)), (max((min((-1845591387), (1845591386))), (((((/* implicit */_Bool) -1845591361)) ? (-1845591386) : (((/* implicit */int) var_16))))))));
}
