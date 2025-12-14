/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157962
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
    var_20 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */int) max((var_12), (var_17)))) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)10))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 -= max((max((((signed char) arr_1 [i_0 + 1])), (((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_4))))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)-103)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)88))))) ? (((/* implicit */int) arr_0 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)31))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)94)) / (((/* implicit */int) min((arr_6 [i_0 + 1] [i_1 + 1] [i_1 + 3] [i_2]), ((signed char)-119))))));
                }
                /* vectorizable */
                for (signed char i_3 = 4; i_3 < 12; i_3 += 3) 
                {
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_1 + 1] [i_3 - 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)97))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)44))));
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)123)))))));
                }
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((((((/* implicit */_Bool) min(((signed char)102), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 3]))))) : (((/* implicit */int) arr_10 [(signed char)12])))), (((/* implicit */int) arr_5 [(signed char)11] [i_1] [i_1])))))));
                var_28 &= ((/* implicit */signed char) ((((/* implicit */int) min(((signed char)-94), (min((var_19), ((signed char)-116)))))) - ((~((+(((/* implicit */int) var_19))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 13; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_17 [i_4] [(signed char)5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_12), (arr_1 [i_0]))), (arr_0 [i_0 + 2] [i_1])))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) (signed char)-119))));
                            var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((signed char)87), ((signed char)-95)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)67)) || (((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 + 1] [i_4 - 3]))))) : (((/* implicit */int) ((signed char) (signed char)39))))) | (((/* implicit */int) (signed char)-46))));
                            var_30 -= ((/* implicit */signed char) max((((((/* implicit */int) var_9)) | (((/* implicit */int) max(((signed char)-88), ((signed char)65)))))), (((/* implicit */int) (signed char)-73))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (signed char)-85)))));
    var_32 = var_3;
}
