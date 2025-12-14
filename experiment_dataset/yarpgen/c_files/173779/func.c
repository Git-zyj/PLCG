/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173779
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14309907185648883642ULL)))))));
                        var_20 = (~(2361947699U));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_18)), (1882475550U)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3))))) << (((((arr_3 [i_0]) - (var_5))) - (3914539778U)))))) : ((+(min((((/* implicit */long long int) 2361947699U)), (var_3)))))));
                    arr_20 [i_5] [i_4] = ((/* implicit */signed char) ((unsigned short) (-(-136128220))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) var_14);
    }
    for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_2 [i_6] [i_6 + 2])), (14309907185648883642ULL))) << (((((var_7) & (((/* implicit */long long int) var_17)))) - (84447400LL)))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) arr_7 [i_6 + 1] [(unsigned short)0] [i_6 + 3]))))));
        arr_24 [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 - 1] [i_6 + 2]))) : (var_0)))) ? (min((var_9), (2919312457U))) : (min((((/* implicit */unsigned int) arr_16 [i_6 - 3] [i_6 - 2] [i_6 + 3] [i_6 - 2])), (var_9)))));
    }
    var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((var_0) + (var_5))))) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(14309907185648883642ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))) : (var_5))))));
}
