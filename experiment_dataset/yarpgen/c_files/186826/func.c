/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186826
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(signed char)9] [(signed char)9] [11U] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)23126)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((-7343209639082916858LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)21)) - (21))))))) : (arr_7 [(short)4] [i_1] [i_1] [i_1])));
                        arr_8 [i_0] [9U] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) min((-7343209639082916858LL), (7343209639082916860LL)))) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)17661)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */signed char) min((min((((/* implicit */int) (unsigned short)36681)), (min((2147483647), (var_13))))), (((((/* implicit */int) ((unsigned char) var_18))) / (((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5]))))))));
                                var_21 = ((/* implicit */unsigned int) (unsigned char)127);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned char) var_17);
                    var_22 = ((/* implicit */long long int) var_13);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_2] [i_2 + 2] [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_1] [6U] [i_2] [i_2] [i_2 - 3])) : (((/* implicit */int) var_14)))), (((((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [(_Bool)1] [i_2 - 2])) << (((arr_13 [11U] [i_2 - 1] [(unsigned short)18] [i_2] [i_2 - 1] [i_2 + 1] [i_6]) + (6590586995420773817LL)))))));
                                var_24 = ((/* implicit */short) min((((/* implicit */long long int) arr_21 [i_2])), (arr_9 [i_2 + 1] [i_6] [i_7])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((((/* implicit */int) var_17)) % (((/* implicit */int) (short)28616))))))), ((~(var_10)))));
}
