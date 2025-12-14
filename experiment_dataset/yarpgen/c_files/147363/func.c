/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147363
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] = 4194303;
                        arr_10 [i_0] [i_0] [i_0] [19U] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1026054801)), (((((/* implicit */_Bool) var_12)) ? (((6388116076487482444ULL) | (var_6))) : (((/* implicit */unsigned long long int) ((((var_18) + (2147483647))) << (((201989178U) - (201989178U))))))))));
                        var_19 = min(((+(((/* implicit */int) var_7)))), (arr_2 [i_0]));
                    }
                    arr_11 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((4092978117U) >= (((/* implicit */unsigned int) 1026054801)))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_6 [i_0] [i_0] [i_1 + 3] [i_1])))) ? (((/* implicit */int) arr_1 [i_1 + 2])) : ((~(((/* implicit */int) arr_1 [i_1 + 2]))))));
                }
                var_21 = ((/* implicit */int) (-(((unsigned long long int) arr_7 [i_0] [i_0] [12] [i_1 + 2]))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((32768U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((int) -1026054801))) ? (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_9)) : (1026054798)))) : (var_1))) : (min((((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) max((var_7), ((unsigned char)0))))))));
}
