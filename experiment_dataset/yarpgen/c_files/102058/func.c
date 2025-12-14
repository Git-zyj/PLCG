/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102058
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */long long int) ((((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))) >= (var_11)));
                    var_17 = var_1;
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_18 |= ((/* implicit */long long int) arr_8 [i_0]);
                        var_19 = ((((var_6) ? (((/* implicit */long long int) var_8)) : (var_7))) + (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                    var_21 = ((long long int) ((var_4) && (((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_4)), (((long long int) ((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
        var_23 = ((/* implicit */long long int) var_15);
    }
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        var_24 = ((/* implicit */long long int) ((unsigned int) ((min((((/* implicit */int) (short)-1)), (var_1))) ^ (-1371062325))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_14))));
        var_26 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_3 [i_7 - 1] [i_7 + 1]))))));
        var_27 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */int) var_3))));
    }
    var_28 = ((/* implicit */signed char) ((unsigned short) var_15));
    var_29 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) -1371062325)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (3886085575U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
}
