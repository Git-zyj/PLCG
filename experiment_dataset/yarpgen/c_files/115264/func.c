/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115264
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_5 [(_Bool)1] [i_0] [i_0] [i_0])))) + (((((/* implicit */_Bool) 8768462878997279090LL)) ? (((/* implicit */int) (unsigned short)37995)) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2 + 1] [i_2]))))));
                    arr_8 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)4573))));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]))))), (var_14)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) 4ULL);
                                var_21 &= ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60945)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60970)))))));
                                var_22 = ((((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)27558)) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 1] [i_2 - 1])))) >> (min((((8ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37973))))), (2ULL))));
                                var_23 = ((((((/* implicit */int) (signed char)-113)) + (2147483647))) >> (((((/* implicit */int) (short)32765)) - (32743))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 4; i_5 < 24; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (~(arr_19 [i_5 + 1] [i_5 - 1])));
            arr_20 [(unsigned char)13] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27517))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37974)) * (((/* implicit */int) arr_16 [i_5 - 3] [i_5 - 2]))));
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((long long int) var_15)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)32752))))));
        }
        var_27 = ((/* implicit */unsigned char) var_9);
        var_28 = arr_18 [i_5 - 2];
    }
}
