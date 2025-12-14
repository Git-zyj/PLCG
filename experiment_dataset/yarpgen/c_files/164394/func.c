/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164394
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))) ? (((((/* implicit */int) min(((short)30405), ((short)30405)))) & (((/* implicit */int) arr_2 [i_2])))) : (((((/* implicit */_Bool) 8651582476734349625LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 2] [i_1])))))))));
                    arr_9 [i_0] [i_1] [(signed char)0] = ((/* implicit */int) arr_5 [i_1] [i_2]);
                    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-20040))) & (arr_0 [i_1 - 3] [i_1 - 3]))), (arr_4 [i_1 - 3] [i_1] [i_2])));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25)) ? (((/* implicit */int) (unsigned char)3)) : (1946665280))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-30403)), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1076986395)))) ? (((unsigned long long int) (unsigned char)255)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8179)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [(unsigned char)0] [i_0] [i_0] [i_0]), (-1946665276)))) ? (((/* implicit */int) ((unsigned char) 3932983046U))) : (((/* implicit */int) arr_2 [(_Bool)1])))))));
    }
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_5))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (var_2)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)116))))))) : (((((/* implicit */_Bool) (~(67108736U)))) ? (((/* implicit */long long int) var_6)) : (max((-6231449483430891663LL), (((/* implicit */long long int) var_10))))))));
}
