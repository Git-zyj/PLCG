/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143772
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7434393254522010221LL)) && (((/* implicit */_Bool) (unsigned char)70)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42201)) || (((/* implicit */_Bool) (unsigned char)154))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2385396373U)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)70))))) : (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned short)2016)))))) : (((/* implicit */int) (unsigned char)75))));
        var_10 = (+(((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) : (9223371487098961920LL))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_14 [i_2 + 1] [i_2] [6U] [i_1] = max(((-(min((9223372036854775807LL), (((/* implicit */long long int) var_7)))))), (min((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))), (((/* implicit */long long int) (unsigned short)4)))));
                    arr_15 [i_1] [i_1] [i_2] [i_3] = (unsigned short)21970;
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)24229)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)200))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(-9223372036854775804LL)))) ? (((((/* implicit */int) (unsigned short)34410)) & (((/* implicit */int) (unsigned short)43565)))) : (((/* implicit */int) (unsigned short)21978))))), (min(((-(var_6))), (((/* implicit */long long int) min((2793326672U), (((/* implicit */unsigned int) var_9)))))))));
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((((/* implicit */long long int) 1062572742U)), (9223371487098961912LL))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)5914)))))));
        var_14 = ((/* implicit */long long int) (+(1062572742U)));
        arr_19 [11U] [i_4] = ((/* implicit */unsigned short) ((var_5) >= (((/* implicit */long long int) var_4))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((-7284189731137648202LL), (var_5))), (((/* implicit */long long int) ((((/* implicit */long long int) 3232394553U)) < (var_5))))))) || (((/* implicit */_Bool) var_5))));
}
