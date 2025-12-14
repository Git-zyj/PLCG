/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126349
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) -683071858392786793LL)) && (((/* implicit */_Bool) (unsigned short)1020))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_14)), (arr_4 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1] [i_1]))) : (((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) + (((/* implicit */int) var_10))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_3] [i_1] [i_1] [i_0] [i_0] |= ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) / (var_7)));
                        arr_13 [i_2] = ((/* implicit */unsigned int) ((long long int) arr_2 [i_1] [i_2] [i_3]));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(arr_2 [11] [11] [i_3]))))));
                        arr_14 [i_3] [(unsigned short)6] [i_2] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_4))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) ^ (var_12)))));
                    }
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_11)) + (arr_3 [11ULL])))) >= (var_15)));
                }
            }
        } 
    } 
}
