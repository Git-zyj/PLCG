/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177716
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3550518758U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9989690671454927086ULL)) || (((/* implicit */_Bool) (unsigned short)26053))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) var_5);
                        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_3])) % (((((/* implicit */_Bool) (unsigned short)38825)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = 8216056326095579650ULL;
                    }
                } 
            } 
            arr_10 [i_0] [i_0] = ((/* implicit */int) ((var_6) == (((/* implicit */long long int) var_8))));
        }
        arr_11 [14] [i_0] |= ((/* implicit */unsigned short) 4294967273U);
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (_Bool)0))));
        var_15 = ((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) % ((+(arr_0 [2]))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (((int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)-90)))))));
            arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (min((9123268924099366348LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)14)))))))));
        }
        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            var_17 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)23719)) ? (((/* implicit */long long int) var_8)) : (arr_6 [i_0] [i_0] [i_0] [i_5 + 2] [i_5]))), (((/* implicit */long long int) ((-1505058236) + (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                arr_21 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)70);
                var_18 = ((/* implicit */int) (short)-13842);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) ((4294967279U) * (max((((/* implicit */unsigned int) min((-1505058236), (var_10)))), (var_8)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_20 = ((/* implicit */int) var_9);
                    var_21 = ((/* implicit */_Bool) ((short) (short)-13842));
                }
                var_22 &= min((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-28))))));
                arr_28 [i_0] = ((/* implicit */signed char) var_6);
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */_Bool) 6089745086896018468ULL);
        arr_32 [i_9] = ((/* implicit */int) arr_17 [i_9] [i_9]);
    }
    var_23 = (((-2147483647 - 1)) - (((/* implicit */int) (unsigned short)0)));
}
