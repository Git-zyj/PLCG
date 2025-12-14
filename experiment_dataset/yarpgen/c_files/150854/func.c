/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150854
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
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */int) var_18)) == (((/* implicit */int) (short)32767)))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) 4294967295U))))))))));
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967293U), (((/* implicit */unsigned int) (short)32758))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((((((unsigned int) var_13)) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(_Bool)1]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)8586)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (4294967293U)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_11))))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3])) == (((/* implicit */int) arr_12 [i_0])))))));
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (536870911U) : ((+(arr_9 [(unsigned short)8] [i_2] [(unsigned char)19]))))) + ((((+(2U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))));
                    }
                } 
            } 
        } 
    }
    var_24 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_7))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))));
    var_25 = ((/* implicit */unsigned short) (((!(((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)32758)))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13))))));
}
