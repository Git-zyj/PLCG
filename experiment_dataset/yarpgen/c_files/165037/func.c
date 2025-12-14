/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165037
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
    var_16 = ((/* implicit */signed char) min((var_16), (var_11)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = var_14;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-85)) == (((/* implicit */int) (signed char)107))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))));
                        var_19 = ((/* implicit */signed char) min((var_19), (arr_5 [i_0] [(signed char)12] [i_2])));
                        arr_10 [i_0] [(signed char)15] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) (signed char)90))));
                    }
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */int) max((var_1), ((signed char)-4)))), (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(signed char)1])) : (((/* implicit */int) arr_8 [i_2] [i_0] [i_0])))))) >= (((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) / (((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
