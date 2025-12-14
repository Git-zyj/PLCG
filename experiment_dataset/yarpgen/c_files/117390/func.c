/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117390
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
    var_16 &= ((/* implicit */unsigned short) min((((((/* implicit */int) var_14)) * (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_1)))))), (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-25906), ((short)26228))))) : (max((min((3782296803666294967ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 &= ((short) arr_3 [i_0]);
                    arr_8 [(unsigned char)4] [i_1 - 2] [0ULL] [(unsigned char)4] &= ((/* implicit */long long int) ((short) ((unsigned char) 4294967284U)));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_2 [(unsigned short)2]), (var_9))))))) ? (((/* implicit */int) arr_5 [i_0 + 3] [9] [i_0])) : ((+(((/* implicit */int) (short)26253)))))))));
                    arr_9 [(unsigned short)6] [i_1] [i_0] = ((short) max((748400770), (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        arr_14 [i_3 - 1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_10 [i_3 + 1])))));
        var_20 *= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)26817))))), (((((/* implicit */_Bool) (short)32767)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    }
}
