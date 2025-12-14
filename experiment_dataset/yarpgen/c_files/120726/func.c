/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120726
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((-3369260802514809563LL) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-42))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4 - 1] [i_4] [i_4] [i_0] [i_4] [i_4] = ((((/* implicit */_Bool) max((((var_10) % (arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_4 + 1] [i_0] [i_3]))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)11)))))))) ? (((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))))) ? (max((((/* implicit */long long int) (signed char)10)), (3021662590456682549LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-9))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
                                arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((3021662590456682549LL) % (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)-24))))), ((+(7269377189487247309LL)))))));
                                arr_18 [i_0] [i_3] [i_2] [i_1 - 2] [i_0] = max((max((arr_4 [i_1 - 1] [i_1 - 2]), (arr_8 [i_0 + 1] [i_4 + 1] [i_0 + 1]))), (min((arr_8 [i_0 + 1] [i_4 + 2] [i_4 + 2]), (var_7))));
                                arr_19 [i_4 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) max((-9223372036854775807LL), (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1 + 2] [i_1] = ((/* implicit */signed char) max((min((var_1), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_2])) ? (var_0) : (-3369260802514809562LL))))), (((/* implicit */long long int) max((arr_10 [i_0]), (max(((signed char)0), ((signed char)0))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 4; i_5 < 20; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_28 [i_5] [i_6] [i_5 - 4] [i_5 - 2] &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4999010715870212601LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11))))))))) % (((/* implicit */int) ((signed char) ((3021662590456682549LL) > (arr_12 [i_5] [i_5] [i_6] [i_7] [i_7])))))));
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max(((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (5056648019450073115LL))))), (((max((var_0), (((/* implicit */long long int) arr_15 [i_5] [i_6] [i_6] [i_7])))) % (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_5] [i_6] [i_6]), (var_9))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) (+((~(arr_0 [i_8 - 1])))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)0))))))))));
            }
        } 
    } 
    var_16 = var_3;
}
