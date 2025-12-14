/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153429
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
    var_12 = ((/* implicit */signed char) ((unsigned short) var_5));
    var_13 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (var_10) : (var_7)))) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0 - 1]));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0 + 3] [i_0 + 2]));
            var_15 = ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (signed char)13))));
                arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) ((short) var_9));
                var_17 *= ((/* implicit */int) ((signed char) 268435200U));
            }
            var_18 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
        }
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 3]))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) (!(((_Bool) (signed char)13))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6917529027641081856LL)))))));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_21 ^= ((short) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) arr_18 [i_7]))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(490894559U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_5] [i_7] [i_7] [i_7 - 1] [i_7] [i_5])) > (((/* implicit */int) var_4))))) : (min((((/* implicit */int) var_11)), (arr_29 [i_6] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7] [i_7 - 1])))));
                                var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) (signed char)43))), (((unsigned long long int) (signed char)72))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_5])))));
            }
        } 
    } 
}
