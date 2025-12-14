/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161233
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (((-(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) ((_Bool) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0])))), (((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_8 [i_0] [i_2])))) << (((/* implicit */int) arr_2 [i_0]))))));
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))))) % ((~(((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = var_9;
                var_14 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (((arr_7 [i_0] [i_0] [i_0]) ? ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (_Bool)1)))) : (((max(((_Bool)1), (arr_0 [i_0]))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) : (((/* implicit */int) var_11))))));
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((_Bool) (~(((((/* implicit */int) arr_8 [i_0] [i_4])) | (((/* implicit */int) (_Bool)1))))));
            var_18 = ((/* implicit */_Bool) ((((((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((((_Bool) (_Bool)1)) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))) - (2)))));
        }
        var_19 = max(((_Bool)1), (((_Bool) arr_5 [i_0] [i_0] [i_0])));
        var_20 = (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_2 [(_Bool)1])))), (((/* implicit */int) var_10))))));
    }
    var_21 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max((var_10), (var_7)))) : (((/* implicit */int) (_Bool)1))));
    var_22 = var_10;
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_19 [i_5] [(_Bool)1] = ((_Bool) arr_9 [i_5] [i_5]);
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_22 [i_7] [(_Bool)1] [(_Bool)1] |= ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (arr_11 [(_Bool)1])))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((arr_2 [i_5]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [(_Bool)1] [i_7]))))));
                    var_23 = arr_13 [(_Bool)1] [(_Bool)1] [i_5];
                }
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 = ((_Bool) var_4);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5] [i_6] [i_8])) * (((arr_0 [i_6]) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) arr_0 [i_5]))))));
                            /* LoopSeq 3 */
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                            {
                                arr_34 [i_5] [(_Bool)1] [i_5] [(_Bool)1] [i_6] [i_6] [i_10] = (!(((/* implicit */_Bool) ((arr_32 [i_5] [i_5] [i_6] [i_8] [i_9] [(_Bool)1] [i_10]) ? (((/* implicit */int) arr_14 [i_8] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                                var_26 -= ((_Bool) ((((/* implicit */int) arr_1 [i_8])) | (((/* implicit */int) arr_1 [i_5]))));
                                arr_35 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5])) >> (((/* implicit */int) var_2))))) ? (min((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                            }
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min(((_Bool)1), (arr_26 [i_5] [i_6] [(_Bool)1] [i_5])))) : ((+(((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [i_5]))))));
                                var_28 ^= var_10;
                                arr_39 [i_5] [i_6] [(_Bool)1] [i_8] [i_9] [(_Bool)1] = arr_29 [i_5] [i_11] [i_8] [i_5];
                                var_29 = ((_Bool) ((((/* implicit */int) arr_14 [i_5] [i_6] [i_5])) != (((/* implicit */int) max(((_Bool)0), (arr_26 [(_Bool)1] [i_6] [i_6] [i_5]))))));
                            }
                            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                            {
                                var_30 = var_7;
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_5] [i_5]) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8))))))) ? (((/* implicit */int) arr_7 [i_5] [i_6] [i_5])) : (((/* implicit */int) ((_Bool) arr_30 [i_5] [i_9] [(_Bool)1] [i_8] [(_Bool)1] [i_8] [i_5])))));
                            }
                        }
                    } 
                } 
                arr_42 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_32 = var_0;
}
