/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163496
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((max((arr_3 [i_0] [i_0]), (var_13))) ? (3708989633U) : (((/* implicit */unsigned int) -361873208)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_0 [i_0]))), ((-(((long long int) -361873207)))))))));
        var_21 = ((/* implicit */unsigned char) max(((-(3909416129U))), (728316522U)));
    }
    for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (unsigned char)195))));
            var_23 = ((/* implicit */_Bool) (+(((long long int) (unsigned char)56))));
            var_24 &= ((signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)186)))) | (((/* implicit */int) arr_3 [i_2 - 3] [i_1 - 3]))));
        }
        arr_9 [i_1] = ((/* implicit */unsigned long long int) 33776997205278720LL);
        arr_10 [(signed char)0] [i_1] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 361873178)) ? (1930418501U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        var_25 = (~(((/* implicit */int) arr_4 [i_1])));
        arr_11 [(_Bool)1] [i_1] = ((/* implicit */signed char) var_17);
    }
    var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
}
