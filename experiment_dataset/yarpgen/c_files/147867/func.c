/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147867
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = min(((!(var_15))), ((!(arr_1 [i_0 - 1]))));
        arr_3 [(_Bool)1] [(_Bool)1] &= var_14;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1)));
        var_20 *= min(((_Bool)1), ((_Bool)0));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((_Bool) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((_Bool) (_Bool)1)))));
            arr_11 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (-((+(((/* implicit */int) min((var_10), ((_Bool)1))))))));
            var_22 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) & (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))))));
            var_23 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_5 [i_2])))));
            arr_12 [i_2] = max(((_Bool)0), ((_Bool)1));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_24 = max(((_Bool)1), ((_Bool)1));
            arr_15 [i_2] [i_2] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
        }
        var_25 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((_Bool) arr_10 [i_2]))) ^ (((/* implicit */int) (_Bool)1))))));
        var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
                    var_28 = ((_Bool) ((((/* implicit */int) arr_17 [i_5])) ^ (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 -= var_8;
                                var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((_Bool) arr_16 [i_9 - 1] [i_9 - 1]))) : (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) arr_16 [i_9 - 1] [i_9 - 1])))))));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */_Bool) ((((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) ^ (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) min((var_11), (var_2)))))))));
                }
            } 
        } 
    } 
}
