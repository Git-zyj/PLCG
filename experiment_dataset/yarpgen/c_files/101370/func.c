/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101370
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
    var_15 = ((/* implicit */signed char) var_14);
    var_16 ^= ((/* implicit */signed char) min((5364852681730133522LL), (-6504995755110585757LL)));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_6))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 2])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (arr_2 [i_0 - 1] [(_Bool)1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_3] [i_4] [i_0 - 2] = ((/* implicit */unsigned int) ((unsigned short) var_2));
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1]))) : (var_8)))))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned char) var_7);
                    arr_14 [(unsigned short)15] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4383123415452203002LL)) ? (((long long int) (unsigned short)2621)) : (-3512257794608873212LL)));
        arr_17 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))));
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-740)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */short) var_12)), ((short)-3325))))))), (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))));
        var_22 += ((/* implicit */_Bool) ((max((arr_18 [i_6] [i_6]), (((/* implicit */int) arr_7 [i_6] [i_6])))) / (min((((/* implicit */int) min((((/* implicit */short) var_11)), (var_10)))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_11))))))));
    }
}
