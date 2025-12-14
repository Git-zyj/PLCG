/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13526
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */int) max((var_3), ((signed char)-110)))), (((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_1 [i_2]))))));
                    arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_2])))) ? (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) | (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_2])))) : (((/* implicit */int) max((((signed char) (_Bool)1)), (((/* implicit */signed char) ((_Bool) arr_8 [i_0] [i_0] [(signed char)13]))))))));
                    var_14 = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) arr_5 [i_2] [(signed char)7] [i_2]))) % (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) ((signed char) (signed char)2))), (((arr_3 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(_Bool)1])) % (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2])))) == (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)101)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((((_Bool) (_Bool)1)), (((((/* implicit */int) max(((_Bool)1), (arr_13 [i_0] [i_0] [i_1] [i_0])))) > (((/* implicit */int) arr_14 [i_3 + 2] [i_1] [i_2] [i_3 + 2] [i_4 + 1]))))));
                                var_17 -= ((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = arr_9 [i_0] [(signed char)10] [i_0];
        var_19 = ((_Bool) min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), ((signed char)11)));
    }
    for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */int) max((max((((/* implicit */signed char) arr_13 [i_5 + 3] [i_5] [i_5] [i_5])), (var_12))), ((signed char)(-127 - 1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) arr_12 [i_5])) | (((/* implicit */int) arr_3 [i_5 - 2]))))))));
        var_21 = ((/* implicit */signed char) max((min((((((/* implicit */int) var_10)) - (((/* implicit */int) arr_8 [i_5 + 2] [i_5] [i_5 + 3])))), (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_5])), (var_5)))))), (((/* implicit */int) (signed char)121))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = arr_20 [i_6];
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_23 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_5))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_24 = var_7;
                            arr_31 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_24 [i_9 - 1] [i_10]))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        arr_36 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)5)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) max((arr_35 [(signed char)7] [(signed char)7]), (((/* implicit */signed char) arr_18 [i_11])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_12])) | (((/* implicit */int) var_12))));
            var_26 -= ((/* implicit */_Bool) var_7);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_34 [i_12]))) ? (((/* implicit */int) arr_20 [i_11])) : (((/* implicit */int) (signed char)20))));
            arr_40 [i_11] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_11] [i_12] [i_11] [i_11] [i_12] [i_11])) ? (((/* implicit */int) arr_38 [i_12] [i_11] [i_11])) : (((/* implicit */int) arr_34 [i_12]))));
        }
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_28 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1] [i_11] [i_13])) : (((/* implicit */int) (signed char)18)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)55)) || (((/* implicit */_Bool) arr_28 [i_11] [i_11] [i_11] [i_13]))))) - (1)))));
            var_29 -= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_41 [i_11])) > (((/* implicit */int) arr_20 [i_13]))))), (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_41 [i_11]))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((signed char) ((((/* implicit */_Bool) arr_41 [i_13])) && (((/* implicit */_Bool) var_9)))))));
        }
        var_31 += ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_25 [i_11] [(signed char)11] [i_11])) == (((/* implicit */int) max((arr_29 [(_Bool)1] [(_Bool)1] [i_11] [i_11] [i_11] [i_11]), (arr_35 [i_11] [i_11]))))))), (((((/* implicit */int) arr_35 [i_11] [i_11])) % (((/* implicit */int) ((signed char) arr_34 [i_11])))))));
    }
    var_32 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-126)))), (((/* implicit */int) max((var_5), (var_12)))))), (((((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_12)))) | (((/* implicit */int) ((signed char) (signed char)69)))))));
}
