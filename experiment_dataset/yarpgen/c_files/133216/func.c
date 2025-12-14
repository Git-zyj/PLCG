/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133216
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
    var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_5))))) ? (((/* implicit */int) min(((signed char)-111), (var_1)))) : ((+(((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) max((var_8), (var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) var_11)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_15 -= ((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) & (((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((arr_2 [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) - (((/* implicit */int) var_3)))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((signed char) ((_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) arr_1 [i_1])), ((+((-(((/* implicit */int) var_5))))))));
        var_19 = ((/* implicit */_Bool) min((((signed char) (+(((/* implicit */int) (signed char)65))))), (((signed char) var_5))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) ((arr_10 [i_3 + 2] [i_2] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((arr_3 [i_2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_11 [i_3 + 2] [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) min((var_10), (((/* implicit */signed char) var_2)))))))));
                    var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */int) var_12)));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] &= ((/* implicit */signed char) ((_Bool) ((signed char) ((_Bool) var_1))));
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_4] [i_5] [(signed char)3] [i_5 + 4] = var_2;
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */int) min((arr_18 [i_6] [(_Bool)1] [(signed char)8]), (((/* implicit */signed char) arr_7 [i_5]))))) | (((/* implicit */int) max((var_12), (var_0)))))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */int) (signed char)5)) > (((/* implicit */int) var_6)))))));
                    var_24 = ((/* implicit */signed char) min((min((((((/* implicit */int) (signed char)-99)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-122)))), (((/* implicit */int) max((arr_7 [i_5 - 1]), (arr_7 [i_5 - 2]))))));
                    arr_25 [(_Bool)1] [i_5] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_5 + 4] [i_5 + 4])) == ((-(((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_4])) <= (((/* implicit */int) var_3)))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_6 [i_4])))) : (((/* implicit */int) ((signed char) arr_6 [i_4])))));
        var_26 -= ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_14 [i_4] [(signed char)8] [i_4])));
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_28 [i_7]), (arr_29 [i_7]))))));
                var_28 -= ((/* implicit */signed char) (-((+(((/* implicit */int) var_4))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                {
                    var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_37 [(signed char)0] [i_10])) ? (((/* implicit */int) arr_33 [i_9] [i_11])) : (((/* implicit */int) var_9)))), ((+(((((/* implicit */int) arr_38 [i_10] [i_10])) * (((/* implicit */int) arr_36 [i_10] [i_11] [i_11]))))))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((min((((/* implicit */int) arr_36 [i_11] [i_10] [i_11])), (((arr_38 [i_11] [i_11]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_33 [i_11] [i_9])))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_35 [i_9] [i_11] [i_11])) : (((/* implicit */int) var_9)))))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_6))))));
}
