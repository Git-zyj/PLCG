/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143438
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_7)))) : (var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : (var_15))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_12)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_3)) ? (var_15) : (var_5))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_17 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28868)) ? (-1808438390) : (-1808438394)))) ? (((((/* implicit */_Bool) 1808438393)) ? (((/* implicit */int) var_14)) : (-72604959))) : (72604959))))));
                            arr_15 [i_0] [i_4] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (var_7)))) : (((((/* implicit */_Bool) -1808438399)) ? (4097949943U) : (((/* implicit */unsigned int) 72604957))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                arr_18 [i_0] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) var_15)) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) var_9)))))));
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (var_15))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (var_7)))));
            }
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_15))) : (var_5)));
            arr_22 [i_6] [i_6] = ((/* implicit */int) var_11);
        }
        arr_23 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (var_15))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))));
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */int) var_11))))));
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1808438413)) ? (((/* implicit */int) (short)-1)) : (var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (var_15))) : (var_7))))));
    }
}
