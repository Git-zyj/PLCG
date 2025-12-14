/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127130
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
    var_15 |= var_11;
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)(-127 - 1))))))))));
    var_17 = var_11;
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_4 [i_1 + 1]), (((/* implicit */signed char) (_Bool)0)))))))) ? (((var_3) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = (signed char)36;
                        arr_11 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) (-((-(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)122)) * (((/* implicit */int) (signed char)-109)))) * (((/* implicit */int) ((signed char) arr_12 [i_0] [i_1] [i_0] [i_1])))));
                        var_22 &= arr_12 [(signed char)6] [i_0] [i_0] [i_2];
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2]))));
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1]))))))))));
                    var_24 = ((/* implicit */signed char) (_Bool)1);
                    var_25 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2] [(signed char)17] [i_1])) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
}
