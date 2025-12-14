/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14795
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] |= (!(((/* implicit */_Bool) (+(((unsigned long long int) var_9))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34599)) || (((/* implicit */_Bool) var_6))))))));
                    arr_11 [i_0] [i_1] [i_2 - 3] = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)30946)) % (98386531)))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 = ((/* implicit */long long int) var_4);
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((6911348931459641011LL), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_1)) ? (2826730064U) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))))) : ((+(var_2))))))));
            arr_16 [i_4] = ((/* implicit */long long int) var_0);
            var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) && (((/* implicit */_Bool) var_1))))), (min((((long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */long long int) var_3))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_5)))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_3))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 15562456341388052129ULL))) ? (((((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) >> (((var_0) - (3926881555U))))) : (((/* implicit */int) var_10))));
    }
    var_18 += ((/* implicit */signed char) (-((-((-(((/* implicit */int) var_4))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(9223372036854775807LL)))))) ? (var_5) : (((/* implicit */unsigned long long int) var_2))));
    var_20 = ((/* implicit */long long int) var_8);
}
