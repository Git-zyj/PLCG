/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101612
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = arr_6 [i_0] [i_1];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_3] = (_Bool)1;
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) << (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) ? ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : (((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                            arr_12 [i_3] = ((/* implicit */_Bool) (~(((arr_5 [i_0] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] &= ((/* implicit */_Bool) (~(max((((/* implicit */int) arr_13 [i_4])), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_1 [i_4]))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((_Bool) (((_Bool)1) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8)))))));
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_2 [i_4] [(_Bool)1]))))) ^ (((/* implicit */int) arr_3 [i_4]))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [(_Bool)1]))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_5] = ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((max((arr_8 [i_6]), ((_Bool)0))) ? (((/* implicit */int) arr_23 [i_5 + 1] [i_5 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_5 + 1])))) * (((/* implicit */int) (!((!(var_13)))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_4] [i_4] [i_6] [i_5] [i_7] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_13 [i_5 + 1]))))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (var_11)));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_4] [i_8] [i_4] [i_5 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_30 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] [i_8])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_4] [(_Bool)1] [i_4] [i_4])) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_7] [i_7])) != (((/* implicit */int) var_6)))))))));
                            arr_33 [(_Bool)1] [(_Bool)1] [i_5] [i_7] [i_8] = var_2;
                        }
                    }
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 = ((_Bool) (!(arr_37 [i_9])));
        arr_38 [i_9] = ((/* implicit */_Bool) ((((arr_36 [i_9]) || (max((arr_37 [i_9]), (var_4))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) + (((/* implicit */int) var_11))))));
        arr_39 [i_9] = arr_36 [i_9];
    }
    var_21 = min((var_10), (var_13));
}
