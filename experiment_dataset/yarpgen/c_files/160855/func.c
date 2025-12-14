/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160855
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
    var_20 &= ((/* implicit */unsigned char) var_11);
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_9)))))))));
    var_22 = var_16;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (arr_1 [i_0]))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 += ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) | (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? (667389879U) : (1975361553U))) : ((~(arr_1 [i_0]))));
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [(signed char)13] [i_1] [i_0]))), (((arr_0 [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            arr_9 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)235)) * (((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : (arr_1 [i_0])))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_2] [i_2] [i_0]) : (max((((/* implicit */unsigned int) (signed char)-32)), (arr_1 [(_Bool)1])))))));
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */signed char) ((unsigned int) ((min((arr_11 [i_0] [2U] [i_3]), (((/* implicit */unsigned int) arr_0 [i_3])))) >> ((((_Bool)0) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (_Bool)1)))))));
            arr_13 [i_0] [i_3] [i_3] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_3]);
            arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) ((unsigned char) arr_10 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
            var_25 = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-2))))));
        }
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */signed char) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 610302887U)))))) : (arr_4 [i_0] [i_0] [i_0])));
        arr_15 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_11 [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_0]))));
        arr_16 [i_0] = ((/* implicit */signed char) 667389897U);
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_20 [i_4] [i_4] = arr_19 [i_4];
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_27 = ((unsigned char) max((arr_22 [i_5 - 1] [i_5 - 1]), (arr_22 [i_5 - 1] [i_5 - 1])));
                        var_28 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_24 [i_5 - 1] [9U] [i_5 - 1]))))));
                    }
                } 
            } 
        } 
        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [13U] [2U]))))) ? (((/* implicit */int) var_17)) : (max((((arr_23 [i_4]) ? (((/* implicit */int) arr_21 [i_4] [i_4])) : (((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */int) arr_17 [i_4]))))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [(_Bool)1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        arr_33 [i_8] [(_Bool)1] = ((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_8]);
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned char) min((min((arr_1 [i_8]), (arr_1 [i_8]))), (min((arr_1 [i_8]), (arr_1 [i_8])))));
    }
}
