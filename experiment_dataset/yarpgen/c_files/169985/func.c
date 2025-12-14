/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169985
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
    var_12 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39652))) == ((-9223372036854775807LL - 1LL))))) != (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 16720502420163196629ULL)) ? (-4649248048686450267LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    var_13 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) | (((/* implicit */int) ((((/* implicit */int) var_8)) > (var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((long long int) var_6));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_6);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) var_0);
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_3] [i_3 + 2])) ? (((/* implicit */int) ((var_1) == (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 3]))));
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [(signed char)5])) ? (-1970847101) : (((/* implicit */int) var_8)))) == (((/* implicit */int) arr_12 [i_1 - 3] [i_1]))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_16 [(signed char)1] [(unsigned short)4] [i_1] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-74)))));
                    }
                    arr_20 [i_1] = ((((/* implicit */_Bool) (signed char)0)) ? (arr_2 [i_1 + 1]) : (4649248048686450266LL));
                    arr_21 [i_1] [i_1] = ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (unsigned short)22411)))) : ((-(((/* implicit */int) var_6)))));
                }
                arr_22 [i_0] &= ((/* implicit */long long int) arr_1 [i_0]);
                var_18 = arr_17 [1ULL];
                arr_23 [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1302768495U)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) : (((unsigned int) arr_17 [i_0]))))) ? (min((arr_17 [i_1 + 2]), (((/* implicit */long long int) 2147483647)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [(signed char)2] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (max((4649248048686450248LL), (((/* implicit */long long int) var_7)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            {
                arr_30 [i_5] = var_7;
                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_0 [i_5]))))))) / (arr_3 [i_6])));
            }
        } 
    } 
}
