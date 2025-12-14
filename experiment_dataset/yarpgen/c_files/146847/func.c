/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146847
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) > (-1710440157711423942LL)))) < ((+(((/* implicit */int) arr_7 [i_2] [i_2])))))))) : (min((arr_3 [i_0] [i_0]), (arr_3 [i_2] [i_1])))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((long long int) (-(((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_3] [i_3]))));
                        var_17 = ((1139967839U) << (((((/* implicit */int) (short)-20122)) + (20127))));
                        var_18 += ((/* implicit */int) var_1);
                        var_19 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) 3665638963U)), (12LL)));
                    }
                } 
            } 
        } 
        var_20 = ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) min((((var_5) <= (((/* implicit */unsigned long long int) arr_1 [i_0])))), (var_10)))));
    }
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) (_Bool)1)), (242205359U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3215798948U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) == (max((var_2), (((/* implicit */unsigned int) var_1))))))))));
}
