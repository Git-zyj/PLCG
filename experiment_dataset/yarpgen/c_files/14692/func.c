/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14692
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
    var_16 = ((/* implicit */int) min(((+(((((/* implicit */_Bool) -1046721019)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_14))))), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_17 = var_6;
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 2])) ? (var_15) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3228))) : (1962695441U)))));
            arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */short) arr_0 [i_0] [3]);
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1]))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) /* same iter space */
            {
                arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (min((((/* implicit */int) arr_1 [i_0 + 1])), (-1046721010))) : (((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1]))))));
                var_20 = ((/* implicit */_Bool) (short)-18185);
                var_21 |= ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_0 [i_0 - 2] [i_0])));
            }
            for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (max((var_14), (((/* implicit */unsigned int) arr_11 [i_0 - 2] [i_2 - 1] [i_4 - 2])))) : (max((var_13), (((/* implicit */unsigned int) (unsigned short)7462))))));
                var_23 |= min((var_13), (((/* implicit */unsigned int) arr_8 [i_4 - 2] [i_0 - 2])));
                arr_17 [i_0] [i_2] [i_4] |= ((/* implicit */_Bool) arr_2 [i_0 - 1] [(unsigned short)8] [i_4]);
                var_24 |= ((/* implicit */int) max((1778268122U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_12 [i_0 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) 2074858334))))))))));
            }
            for (unsigned int i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) arr_7 [(unsigned short)6] [i_2] [i_5])))))))));
                var_26 |= arr_18 [i_0] [i_0] [i_5];
            }
            var_27 = ((/* implicit */unsigned char) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)24537))) | (8388607U))))), (var_2)));
            arr_21 [i_0] [i_2] |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_2 - 1] [i_2 - 1])), ((unsigned char)248))))));
            var_28 |= ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0] [(short)0])))) ? (min((arr_11 [i_0] [i_0] [i_2 - 1]), (2074858334))) : (((/* implicit */int) ((arr_0 [i_0] [i_2 - 1]) == (var_12))))))) || (((/* implicit */_Bool) var_14))));
        }
    }
    for (unsigned int i_6 = 4; i_6 < 13; i_6 += 1) 
    {
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44659))))), (min((2516699173U), (((/* implicit */unsigned int) (short)16383))))))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_22 [i_6] [i_6 - 3])) == (((/* implicit */int) (short)-26531))))), (min((var_12), (((/* implicit */int) (unsigned char)25)))))) : (((/* implicit */int) (signed char)126))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 3; i_7 < 14; i_7 += 2) 
        {
            for (short i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) var_2);
                    var_31 = ((/* implicit */unsigned short) arr_28 [i_7]);
                }
            } 
        } 
        var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)56)) ? (-1046721024) : (((/* implicit */int) (signed char)0))));
    }
    for (int i_9 = 3; i_9 < 20; i_9 += 2) 
    {
        var_33 = min((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_31 [i_9 - 1]), ((signed char)-7))))))), (((int) ((((/* implicit */_Bool) -1235133137)) ? (arr_29 [i_9] [i_9]) : (((/* implicit */unsigned int) 621856031))))));
        arr_32 [i_9 - 1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_30 [i_9 + 1] [i_9])))), (((/* implicit */int) arr_31 [i_9 - 3]))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9 + 2] [i_9 + 2])) ? (var_10) : (((/* implicit */int) (unsigned char)255))))))))));
    }
    var_35 |= ((/* implicit */short) var_2);
    var_36 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)71)) ? ((+(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
