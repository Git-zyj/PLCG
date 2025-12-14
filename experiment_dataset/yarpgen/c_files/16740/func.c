/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16740
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] [i_1] &= arr_6 [i_0] [i_0];
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_16 [14U] [14U] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((signed char) var_7));
                            var_17 = ((/* implicit */int) (_Bool)0);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_3]) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_2]))));
                            arr_18 [i_4] [i_3] [i_2] [(unsigned char)12] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            arr_22 [i_0] [i_5] = (!(((/* implicit */_Bool) ((unsigned int) 3768889381U))));
            arr_23 [i_0] [i_5] = ((/* implicit */signed char) ((unsigned char) 0U));
            var_18 = ((/* implicit */unsigned short) ((_Bool) var_8));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 2359617140U))));
            var_20 = ((/* implicit */_Bool) arr_3 [i_6] [i_0]);
            var_21 = ((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_6] [i_6]));
        }
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (var_10))))))))));
            var_23 = ((/* implicit */int) (unsigned short)7416);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_24 = ((/* implicit */int) (+(arr_4 [i_0])));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38700)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) var_16)))))));
            }
            var_26 -= ((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : ((+(0U))));
        }
        var_27 *= ((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))));
    }
    var_28 = ((/* implicit */signed char) ((unsigned int) var_5));
    var_29 = ((/* implicit */unsigned int) var_4);
    var_30 = ((/* implicit */unsigned int) var_2);
}
