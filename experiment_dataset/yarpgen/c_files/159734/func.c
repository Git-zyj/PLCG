/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159734
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
    var_20 = ((unsigned short) var_14);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_1 [i_0]))));
        var_22 |= (+((+(((/* implicit */int) (unsigned char)219)))));
    }
    for (short i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1 - 3] [i_1 - 3] = ((/* implicit */unsigned int) var_4);
        arr_6 [i_1] = ((/* implicit */_Bool) ((short) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [(short)14] [i_1])))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (min((1U), (((/* implicit */unsigned int) (short)-23471))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_8 [i_1] [18] [i_1 - 3]))));
            var_25 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_2 [i_1 + 1] [i_2])) >= (((/* implicit */int) arr_2 [i_2] [i_1 - 4])))));
            var_26 = ((/* implicit */unsigned int) var_18);
        }
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_4]))) : ((+(arr_11 [i_3]))))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_28 = ((((((/* implicit */_Bool) (short)23471)) ? (((/* implicit */int) arr_21 [i_4] [6LL] [10ULL])) : (var_14))) < (((/* implicit */int) arr_17 [i_6 - 1] [i_6] [i_6] [i_6 - 1])));
                        var_29 = ((/* implicit */signed char) arr_9 [i_5] [i_4]);
                        var_30 |= ((/* implicit */int) arr_17 [i_6] [12U] [i_3] [i_3]);
                        var_31 = ((/* implicit */int) ((short) arr_15 [i_4] [i_4]));
                    }
                } 
            } 
            var_32 = arr_8 [i_3] [0ULL] [(_Bool)1];
            var_33 = ((/* implicit */unsigned int) (unsigned char)255);
            var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)178)) ? (((589702181U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4])))));
        }
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53513)) && (((/* implicit */_Bool) arr_8 [18ULL] [(unsigned short)14] [i_3]))));
    }
    var_36 += ((/* implicit */unsigned int) var_8);
}
