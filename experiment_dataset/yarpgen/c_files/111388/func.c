/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111388
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) -962477340)) && ((!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (8310512335026360438LL)));
                var_11 = ((/* implicit */unsigned short) min((335240751), (-1857013007)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_6 [i_2] [i_2] = ((/* implicit */unsigned char) arr_5 [i_2] [i_2]);
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    arr_14 [i_4] [i_3] [5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [(unsigned char)7] [i_3] [i_4])) : (var_6)));
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -962477343)) ? (-1857013032) : (-962477353))) - ((-(((/* implicit */int) arr_13 [i_4] [i_3]))))));
                }
            } 
        } 
    }
}
