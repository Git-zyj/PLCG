/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164088
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
    var_16 = ((/* implicit */short) ((int) var_9));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)38);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) 2147483647);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (var_12) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-55)), (var_11)))))) : (((/* implicit */long long int) 3301954455U))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [6LL]))) % (993012821U))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))))) % (993012823U)));
        }
        var_20 = ((/* implicit */short) (((((-(((/* implicit */int) ((unsigned short) arr_4 [4ULL]))))) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0] [1LL]))));
        var_21 = ((/* implicit */int) ((((long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_8))))) / (((/* implicit */long long int) (((-(var_5))) % (((/* implicit */int) arr_6 [6])))))));
    }
    var_22 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_10)) * (var_9)));
    var_23 = (~(((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) / ((-(20U))))));
}
