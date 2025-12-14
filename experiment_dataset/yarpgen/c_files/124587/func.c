/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124587
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
    var_20 |= ((/* implicit */int) min((15457798403103007095ULL), (4309165121121810202ULL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((385640845U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [2LL] [i_2] [i_1])))))))) < (((/* implicit */int) (signed char)122))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) != (2988945670606544496ULL))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -9084574105906724267LL);
                    var_21 ^= (-((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32048))) / (arr_6 [i_2] [i_1] [i_0]))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0] [i_0])))) ? ((+(arr_3 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_3 [i_0] [i_0] [i_0])))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */int) ((_Bool) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (signed char)(-127 - 1))))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)51))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))))))))));
        var_23 = ((/* implicit */unsigned long long int) ((int) max((15457798403103007095ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (-5243894378697105889LL)))))));
    }
    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((min((var_6), (((/* implicit */unsigned long long int) var_19)))) / (((/* implicit */unsigned long long int) min((-3006679717440512237LL), (4449512255809372812LL)))))), (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3 + 2])))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((var_9) + (2129037381))) - (15))))))))) << (((-5477169256512531206LL) + (5477169256512531237LL)))));
        var_26 = ((/* implicit */unsigned long long int) ((((long long int) arr_11 [i_3 + 1] [i_3 + 1])) - (((long long int) 10803221373072434168ULL))));
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12))))), (var_14))))));
    }
}
