/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16744
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)178)), ((unsigned short)25947)));
    var_15 = ((/* implicit */unsigned short) ((signed char) var_7));
    var_16 = (signed char)127;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1]))), (var_12)));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2869683154521686558LL)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [(signed char)0] [3LL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) & (((/* implicit */int) arr_3 [i_0] [(signed char)4] [i_1]))))))));
                var_19 = ((/* implicit */unsigned char) min(((~(1928321768U))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_20 -= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)121))), (min((8337839258312526093ULL), (((/* implicit */unsigned long long int) (signed char)-38)))))) - (((/* implicit */unsigned long long int) -2103904698))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) var_2);
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) min((((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_2])) : (arr_8 [i_3]))), ((~(((/* implicit */int) arr_10 [i_2] [i_3] [16])))))));
                    var_23 = ((/* implicit */short) (~(((int) ((long long int) arr_0 [i_4])))));
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)29375)), (-2103904711)))) ? (-8856722322086102560LL) : (((/* implicit */long long int) ((unsigned int) (unsigned char)12)))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) -2103904698)) ? (((/* implicit */int) min((((signed char) (unsigned short)64080)), ((signed char)-68)))) : (((/* implicit */int) ((signed char) (unsigned char)33)))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5])))));
        var_27 = ((/* implicit */signed char) var_11);
        arr_14 [i_5] = ((((/* implicit */_Bool) arr_7 [i_5 - 2] [i_5] [i_5 - 2])) || (((/* implicit */_Bool) -8856722322086102573LL)));
        var_28 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)64072)) : (((/* implicit */int) (unsigned short)64080))))));
        var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)64080))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) 8856722322086102559LL)))))) : (arr_1 [i_5])));
    }
}
