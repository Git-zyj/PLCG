/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178463
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) var_4)), (var_0)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)192)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))))) : (min((3949279510U), (((/* implicit */unsigned int) (unsigned char)134)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (min((202952287U), (3955246344U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) && (((/* implicit */_Bool) (unsigned char)94))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)94))))));
                                arr_21 [i_1] [i_2] [i_1] [i_3] [i_1] [i_5] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) arr_6 [7U])), (arr_17 [i_1] [i_4] [i_3] [i_4] [i_5] [i_3])))))));
                                arr_22 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (!((((!(((/* implicit */_Bool) 3219527441U)))) && (((/* implicit */_Bool) (unsigned char)0))))));
                            }
                        } 
                    } 
                    arr_23 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((817710596U), (var_14)))) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_3])) : ((-(((/* implicit */int) (unsigned char)237))))))));
                    var_18 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) arr_7 [i_3] [i_3])), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (signed char)-1)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_19 &= ((/* implicit */unsigned char) ((202952296U) == (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_6 - 1]), (arr_0 [i_6 + 2])))))));
                        var_20 |= ((/* implicit */unsigned int) ((signed char) arr_20 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [4U]));
                    }
                    var_21 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned int) min(((signed char)(-127 - 1)), (var_2)))), ((~(arr_15 [i_1] [i_1] [i_6] [i_1]))))));
                    var_22 = max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_29 [i_1] [i_6] [i_7])) : (((/* implicit */int) arr_2 [i_1]))))))), (((arr_30 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_28 [i_1] [i_6] [i_1])), (arr_2 [i_1])))), (arr_24 [i_1])))) && (((/* implicit */_Bool) var_4))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)162)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((unsigned int) max((var_0), (var_8)))) : (var_8))))));
}
