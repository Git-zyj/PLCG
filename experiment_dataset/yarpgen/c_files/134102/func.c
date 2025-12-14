/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134102
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) % (var_7)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) ? ((((!(((/* implicit */_Bool) var_12)))) ? (max((((/* implicit */int) var_5)), (var_10))) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * ((~(((/* implicit */int) (unsigned short)18034))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_21 = ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) - (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))) == (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)66))))));
                    arr_8 [i_0] [15LL] [i_2] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]);
                }
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)190)) << (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */int) var_18)) + (((/* implicit */int) (unsigned short)2880)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (_Bool)1)))))) < (var_1)))))))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)106)) >> (((((/* implicit */int) (signed char)-69)) + (97))))))));
}
