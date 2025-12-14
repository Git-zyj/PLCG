/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151937
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41183))) : (arr_4 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : ((-(0U)))));
                arr_7 [i_1] = ((/* implicit */unsigned char) (unsigned short)48444);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_15 *= ((/* implicit */unsigned short) ((signed char) arr_5 [i_0] [(_Bool)1] [i_0]));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = arr_4 [i_1];
                }
                var_16 = ((/* implicit */signed char) var_7);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_0] [i_0])))) - ((+(((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)15])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (unsigned char)0);
                arr_18 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(11817974825452895985ULL)));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
}
