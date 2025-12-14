/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131727
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
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_5)))));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)3))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-119)) || (((/* implicit */_Bool) var_15))))))) & (((/* implicit */int) var_13))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)91))))) ? (((/* implicit */int) max(((signed char)-7), ((signed char)115)))) : (((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_23 = var_5;
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_18)))))));
                    var_25 = max((((signed char) (signed char)70)), (max(((signed char)88), (arr_0 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((signed char)122), (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))))) << (((/* implicit */int) var_15))));
        var_27 = arr_2 [i_3];
        arr_10 [i_3] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_18)))), (((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) arr_5 [(signed char)14] [i_3] [i_3] [i_3]))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_28 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), ((((!(((/* implicit */_Bool) arr_12 [i_4] [i_4])))) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) (signed char)96))))));
        arr_13 [(signed char)10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_4] [i_4]))));
    }
}
