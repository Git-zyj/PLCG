/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154082
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
    var_17 -= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_5)), (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (var_2)))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4534474866660119186LL)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-107))))) : (min((arr_1 [i_1 + 1]), (((/* implicit */unsigned int) arr_3 [i_1 - 1]))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) arr_5 [i_0]);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (1951090169291124092LL)));
            arr_10 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned char)116), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)46469))))))))));
            var_20 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2]))))) & (min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (unsigned char)243)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_2 - 1])), (var_7))))));
            var_22 = ((((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -1346810328)))) * (((((/* implicit */_Bool) -256314867)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_2]))))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (((var_6) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25157)))))))));
        }
        var_23 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0])), ((+(arr_4 [i_0])))))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) >> (((var_7) - (1519248383))))), (((var_12) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_13) || (((/* implicit */_Bool) 839170057156767572LL))))), (var_4))))));
}
