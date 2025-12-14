/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13772
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) % (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (signed char)28)))))))));
        var_20 = ((signed char) (signed char)0);
        var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_8)))) == (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))));
        var_22 = ((signed char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 + 2]))))) ? (max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) (signed char)0)) % (((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) ((signed char) arr_8 [i_1] [i_1] [i_1]))) ? (((/* implicit */int) arr_10 [i_1 + 4] [i_1] [i_1 + 4])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)127))))))));
                    var_24 = ((/* implicit */signed char) min((((/* implicit */int) max(((signed char)27), ((signed char)(-127 - 1))))), (((((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 2])) / (((/* implicit */int) var_3))))));
                    arr_12 [i_1] [i_1] [i_1] = (signed char)-1;
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))))))));
        arr_13 [i_1] [(signed char)0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_18), (max((arr_11 [i_1] [i_1]), (var_9))))))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((((/* implicit */int) arr_6 [i_1 + 4])) + (((/* implicit */int) arr_6 [i_1 + 3])))), (((/* implicit */int) arr_6 [i_1])))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max((var_27), (min((var_11), (max((((signed char) (signed char)(-127 - 1))), (arr_5 [i_5] [i_1])))))));
                                arr_25 [i_1] [i_4] [i_5] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_22 [i_1 + 3] [i_6] [i_1 + 3] [i_1 + 3]), (arr_22 [i_1 + 3] [i_4] [i_1] [i_6])))) ? (((/* implicit */int) max((arr_6 [i_1 - 2]), (arr_6 [i_7])))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 2] [i_1 + 3])) > (((((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))))));
                                var_28 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_5])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_18)))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_1 + 4] [i_4]))))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) max((var_5), (var_13))))) * ((+(((/* implicit */int) max((arr_14 [i_1] [i_4] [i_5]), (arr_18 [i_4]))))))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */signed char) max((var_30), ((signed char)117)));
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+(((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)4)))))))));
}
