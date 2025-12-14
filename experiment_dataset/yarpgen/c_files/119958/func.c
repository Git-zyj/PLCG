/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119958
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) 60522624U);
        var_18 -= ((/* implicit */short) ((unsigned long long int) ((short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) min((((_Bool) arr_1 [i_1])), (((((/* implicit */int) (short)127)) != (((/* implicit */int) (_Bool)1))))));
        var_19 *= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)1306)), (((((/* implicit */_Bool) (unsigned short)19238)) ? (((/* implicit */int) (unsigned short)46298)) : (((/* implicit */int) (unsigned char)7))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_20 *= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) ((_Bool) 4294967280U))) : (((((((/* implicit */_Bool) (unsigned short)1306)) ? (((/* implicit */int) (unsigned short)46277)) : (((/* implicit */int) arr_0 [i_1] [i_1])))) ^ (((/* implicit */int) arr_2 [i_1] [i_1])))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_14))));
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((short) 4294967295U));
                    var_22 ^= ((/* implicit */unsigned int) (unsigned short)2047);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_1)) != (((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_0), ((_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-62))))) != (((/* implicit */int) (signed char)111))))) : (((/* implicit */int) var_10))));
}
