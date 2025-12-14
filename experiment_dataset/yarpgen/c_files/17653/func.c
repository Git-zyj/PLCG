/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17653
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
    var_13 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)19221)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (3572675190U))))))) ? (722292093U) : (((((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (722292095U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)417))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) var_12);
                var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_2 [i_0 + 3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)187))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_2 [(short)0])) ? (arr_3 [i_0] [2]) : (3572675185U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_12))))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)-11578), ((short)-26423)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) * (((((/* implicit */_Bool) (unsigned short)10766)) ? (max((var_7), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)39957)))))))));
    var_17 ^= ((/* implicit */unsigned short) var_7);
}
