/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101995
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
    var_12 = ((((/* implicit */_Bool) (-(((int) var_1))))) ? (var_8) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : ((+(var_9))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65280)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_3] [5] [18] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_4)) >> (((max((var_6), (var_6))) - (1054570118))))), (((max((-893896916), (((/* implicit */int) arr_10 [i_3] [13] [i_2] [i_2] [i_3])))) ^ (((/* implicit */int) (signed char)(-127 - 1)))))));
                                arr_16 [(unsigned short)13] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) var_11);
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(max((((arr_2 [i_1]) | (((/* implicit */int) (signed char)127)))), (var_9))))))));
                                arr_17 [i_0] [i_3] [i_3] = arr_0 [i_0 - 1];
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) -603646179);
                    arr_18 [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0] [i_0 - 1]);
                }
            } 
        } 
        var_15 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0])))));
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_16 = max((min((arr_9 [i_5] [i_5] [(signed char)12] [i_5]), (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [1] [i_5])))), (((/* implicit */int) ((arr_19 [i_5]) < (arr_19 [i_5])))));
        var_17 = ((/* implicit */signed char) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))), (((int) arr_21 [i_5] [i_5]))));
    }
    var_18 = ((/* implicit */unsigned short) (+((((~(488743805))) - (((/* implicit */int) ((unsigned short) (signed char)22)))))));
}
