/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117740
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = var_9;
        var_13 = ((/* implicit */signed char) max((var_13), (((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))));
                                var_14 = ((/* implicit */signed char) min(((+(((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0])) / (((/* implicit */int) var_7)))))), (max((((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4])) ^ (((/* implicit */int) (signed char)-49)))), (((/* implicit */int) var_10))))));
                                var_15 -= max((((signed char) arr_11 [i_0] [i_3] [i_0] [i_0] [i_4] [i_1] [i_3])), (arr_11 [i_4] [i_2] [i_3] [i_2] [i_0] [i_2] [i_0]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        arr_16 [i_5] [i_1] [i_2] [i_1] = (signed char)120;
                        arr_17 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2] [i_1]))))) ? (((((/* implicit */_Bool) max((arr_10 [i_2] [i_2] [i_2] [i_1] [i_0]), (arr_1 [i_2] [i_0])))) ? (((((/* implicit */int) arr_4 [i_2] [i_5])) & (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_2] [i_2])))))) : ((+(((/* implicit */int) max((var_3), (var_4))))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_0] [i_5])) * (((/* implicit */int) var_8)))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_20 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2])))))));
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-7)) != (max(((+(((/* implicit */int) arr_1 [i_2] [i_2])))), (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2])))))))));
                    }
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (signed char i_9 = 4; i_9 < 15; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        arr_33 [i_7] [i_7] [i_8] [i_10] = arr_22 [i_7] [i_7];
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_19 [i_7] [i_8] [i_7])) ? (((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_12)))))))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((((/* implicit */int) ((signed char) var_1))) == ((-(((/* implicit */int) arr_24 [i_8] [i_8] [i_8])))))))));
                    }
                } 
            } 
        } 
        arr_34 [i_7] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7] [i_7])))))));
        /* LoopSeq 1 */
        for (signed char i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            arr_37 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_26 [i_7] [i_11 + 3] [i_11 + 3])))));
            arr_38 [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_11] [i_11])) + (2147483647))) << (((((/* implicit */int) (signed char)1)) - (1)))))) ? (((((/* implicit */int) arr_6 [i_7] [i_7] [i_11] [i_11])) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_11] [i_7])) : (((/* implicit */int) arr_5 [i_7] [i_7] [i_7] [i_11])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_22 [i_11] [i_11])) : (((/* implicit */int) max((arr_28 [i_7]), (arr_4 [i_7] [i_7]))))))));
            arr_39 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((min(((+(((/* implicit */int) arr_0 [i_7] [i_7])))), (((((/* implicit */int) (signed char)-4)) - (((/* implicit */int) var_10)))))) * ((-(((/* implicit */int) arr_25 [i_11 - 1] [i_11]))))));
        }
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_26 [i_7] [i_7] [i_7]), (var_0)))) || (((/* implicit */_Bool) ((signed char) arr_14 [i_7])))));
    }
    var_21 ^= var_2;
}
