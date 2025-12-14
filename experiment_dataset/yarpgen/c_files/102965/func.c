/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102965
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
    var_20 = (unsigned char)138;
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)64566))))))) ? (max((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)970)) : (((/* implicit */int) (unsigned short)37188))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_17)), ((-(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (arr_0 [i_1])))))));
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_0 [i_0]), (arr_0 [i_1])))), (((((/* implicit */_Bool) (unsigned short)33088)) ? (((long long int) 6630224200544305377LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_3 [(signed char)7] [i_1])) == (5706309020696414358ULL))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [0] [i_1]))) < (arr_0 [i_0]))))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)14]))) : (arr_0 [(signed char)2]))))))))));
                var_26 = (short)-25498;
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) min(((unsigned short)969), ((unsigned short)0)));
}
