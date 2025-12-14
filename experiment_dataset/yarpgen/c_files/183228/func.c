/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183228
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
    var_16 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(3657170977U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)21333)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (unsigned short)38521)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))))))) : (-7084222149639601897LL)));
        var_18 = (short)-30217;
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) var_11)))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870848)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned short)5574))))) && (((((/* implicit */int) var_15)) != (((/* implicit */int) var_6)))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_20 = ((/* implicit */short) ((2735449262U) ^ (max((((/* implicit */unsigned int) 263760042)), (262143U)))));
            var_21 = ((/* implicit */long long int) var_6);
        }
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_22 ^= ((/* implicit */long long int) (+(((int) max((((/* implicit */unsigned long long int) var_10)), (var_12))))));
            var_23 ^= ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) 4025822020U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))));
        }
        arr_12 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 3LL)))) ? ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */_Bool) 536870911)) ? (((/* implicit */int) (short)32)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-54))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max(((((!(((/* implicit */_Bool) 8391942)))) || (((/* implicit */_Bool) (short)-18966)))), ((!(((/* implicit */_Bool) var_6)))))))));
    }
}
