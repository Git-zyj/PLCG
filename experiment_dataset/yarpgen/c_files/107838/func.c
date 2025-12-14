/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107838
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
    var_17 ^= ((/* implicit */signed char) min((3884475310U), (((/* implicit */unsigned int) max((((((/* implicit */int) var_15)) - (((/* implicit */int) var_11)))), (((/* implicit */int) min(((unsigned short)52781), ((unsigned short)12755)))))))));
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)12764);
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12755))))) ? (((((/* implicit */_Bool) (unsigned short)52792)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-22440)))) : (((/* implicit */int) arr_2 [i_2] [i_0])))) << ((((-(((/* implicit */int) var_9)))) + (62)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        arr_10 [(_Bool)1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((short) (unsigned short)52780))))) ? (((/* implicit */int) ((((var_14) ? (((/* implicit */unsigned int) 1079491972)) : (arr_5 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52781)))))) : (var_7)));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_15))))));
}
