/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113901
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) (-(15247353208931736803ULL)));
        var_20 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        var_21 = ((/* implicit */_Bool) (signed char)-22);
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) max((arr_5 [i_3]), (arr_5 [i_1])))) << (((max((var_2), (((/* implicit */long long int) arr_1 [i_2])))) + (101LL))))));
                    var_23 = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */signed char) (-((~(((((/* implicit */unsigned long long int) 2977451553606590079LL)) & (var_1)))))));
}
