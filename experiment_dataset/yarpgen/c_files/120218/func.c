/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120218
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [16U] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (~((+(((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
            var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (_Bool)1)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [5] [i_0] [i_0] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) arr_3 [i_0] [(unsigned char)7] [7LL])), (((unsigned int) (unsigned char)16))))));
            var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [9LL] [(unsigned char)3])) ? (max((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (arr_6 [i_0] [i_0])))), (var_11))) : (((/* implicit */long long int) arr_6 [0] [i_2]))));
        }
    }
    var_14 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */long long int) var_5)) : (var_11)));
    var_15 = ((/* implicit */_Bool) min((var_15), (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_14 [9LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_12 [i_3]), (var_7)))), (max(((~(var_10))), (((/* implicit */unsigned long long int) (~(24LL))))))));
                arr_15 [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)8)), (1487948985)))), (arr_11 [i_3]))))));
                arr_16 [8U] = ((/* implicit */_Bool) arr_0 [i_4]);
            }
        } 
    } 
}
