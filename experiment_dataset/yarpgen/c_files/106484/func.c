/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106484
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
    var_17 = ((/* implicit */unsigned char) (~((~(4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_1)) & (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) (+(-858452552)));
            arr_7 [i_0] [i_0] [(signed char)0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
            arr_8 [i_0] [i_0] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) var_11)));
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_19 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
            var_20 = (~(((/* implicit */int) ((unsigned char) var_11))));
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_11 [i_0] [i_0]))));
        var_22 = arr_0 [i_0];
        var_23 = ((/* implicit */int) ((signed char) var_3));
    }
    var_24 = min((((unsigned char) (~(((/* implicit */int) (signed char)97))))), (((unsigned char) (signed char)-62)));
}
