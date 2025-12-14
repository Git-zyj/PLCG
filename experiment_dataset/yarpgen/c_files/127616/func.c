/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127616
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_9) : (var_9)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_17 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-1) : (arr_10 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_4 - 1]))))))), (((unsigned int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1])));
                                arr_13 [(signed char)9] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)3)))), (((/* implicit */int) arr_6 [6ULL] [i_3 + 2] [i_3] [i_4 + 3]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_1] [0U] [i_2 + 1]);
                    var_18 = ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_19 = ((/* implicit */int) ((signed char) 3433274723706890078LL));
        arr_17 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13402690895344153602ULL)) ? (((long long int) (unsigned short)0)) : (((/* implicit */long long int) -1954806892))));
        var_20 -= ((/* implicit */signed char) ((short) min((((((/* implicit */unsigned long long int) arr_16 [i_5])) / (13402690895344153602ULL))), (13402690895344153602ULL))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_21 -= ((/* implicit */_Bool) arr_19 [i_6] [i_6]);
        arr_21 [i_6] = ((/* implicit */int) ((unsigned long long int) -618097698));
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6])) || (((/* implicit */_Bool) 8327271427068033929LL)))))) : (arr_18 [10U] [i_6])));
        var_23 -= ((/* implicit */signed char) (-(arr_16 [i_6])));
    }
    var_24 = ((/* implicit */unsigned short) var_12);
}
