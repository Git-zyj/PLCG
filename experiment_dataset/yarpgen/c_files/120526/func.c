/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120526
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned short) (+((-(88604982U)))));
        arr_2 [i_0] = ((/* implicit */short) ((long long int) ((int) -1483708247)));
        var_20 = ((/* implicit */unsigned long long int) var_7);
        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) 1483708247));
        arr_3 [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) 123145302310912ULL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 &= ((/* implicit */unsigned short) var_14);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_7);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) 5755679381852037494ULL)))));
        var_23 = ((unsigned char) ((8907645955349869945ULL) > (((/* implicit */unsigned long long int) var_12))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_4 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) max((var_18), ((unsigned short)30187))))));
                arr_16 [i_3] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)32767)))) < (var_3)))));
            }
        } 
    } 
    var_24 |= ((/* implicit */signed char) (+(((/* implicit */int) var_18))));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 225462002139117487ULL)) || (((/* implicit */_Bool) 713181175U)))))));
}
