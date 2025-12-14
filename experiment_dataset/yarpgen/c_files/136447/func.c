/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136447
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_11 [i_0] [(_Bool)1] [i_1] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_14)))));
                        var_15 = var_7;
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
                        {
                            var_16 = (~((+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_12)))))));
                            var_17 *= ((/* implicit */_Bool) max(((~((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)113)))))), (min(((+(arr_8 [i_0] [i_1 - 2] [i_2] [i_4 - 1]))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), ((_Bool)0)));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */int) (!(((var_14) && ((!((_Bool)1)))))));
                        }
                        for (int i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) min((((9) & (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)121)))))), (max(((~(((/* implicit */int) (signed char)-85)))), (((/* implicit */int) (signed char)64))))));
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (-1809565321) : (-1809565321)));
                        }
                        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) var_8))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_1] &= max((((/* implicit */int) (signed char)45)), (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (_Bool)0)))));
                        var_23 = ((/* implicit */int) max((max((arr_0 [i_1]), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) arr_12 [i_0] [i_0]))));
                    }
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_19 [i_0] [i_2])))), (((/* implicit */int) arr_19 [(_Bool)1] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_25 |= var_5;
    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) ((_Bool) (signed char)-114))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-90)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-123)) : ((+(((/* implicit */int) var_6)))))));
}
