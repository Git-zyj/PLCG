/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146682
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (arr_7 [i_2 + 2] [i_0 + 1]) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)101))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) (signed char)121)), (arr_12 [i_4] [i_2 + 2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) var_10)))))));
                        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-8192)), ((unsigned short)59780)));
                        var_19 = ((/* implicit */unsigned char) ((arr_10 [i_0] [(unsigned char)2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0]))))))));
                    }
                    var_20 = ((/* implicit */short) max((((/* implicit */int) max((arr_9 [i_0 + 1] [i_1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2]), (((/* implicit */unsigned short) (signed char)0))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(signed char)1] [(signed char)13] [(short)11] [i_1] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) arr_1 [i_2 + 2] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) max((((/* implicit */short) var_10)), (min((var_1), (var_7))))))));
}
