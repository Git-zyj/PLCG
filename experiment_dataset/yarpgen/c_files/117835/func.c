/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117835
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)32019)))))));
    var_15 = ((/* implicit */int) min((var_15), (var_3)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4))))));
        var_16 |= ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_17 ^= ((/* implicit */unsigned short) var_5);
        var_18 = ((/* implicit */_Bool) var_0);
        arr_5 [i_0] = ((/* implicit */unsigned short) (+(4193280)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */int) 1329813930817723683ULL);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((short) var_4)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */_Bool) -4193292);
            var_20 = ((/* implicit */int) ((unsigned short) arr_2 [i_1]));
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_21 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) 18446744073709551606ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2935763550108848531LL))), (((/* implicit */long long int) ((unsigned short) ((unsigned int) 18ULL))))));
            var_22 |= min((((/* implicit */short) ((signed char) 1947296167821327557LL))), (var_8));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_2);
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_3]))), (-4193251)));
                arr_19 [10ULL] [16ULL] [i_1] = ((/* implicit */_Bool) ((var_10) >> (16ULL)));
                arr_20 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) arr_10 [10] [i_3] [i_4]);
                arr_21 [i_1] [i_1] [(short)3] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -4193281))))), (max((max((((/* implicit */int) (short)(-32767 - 1))), (-2018151964))), (((/* implicit */int) (signed char)38))))));
            }
            arr_22 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) 1842686785U);
        }
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                            var_25 *= ((/* implicit */short) ((_Bool) ((unsigned short) (+(((/* implicit */int) (short)32753))))));
                            arr_31 [i_1] [i_1] [i_8] = max((((long long int) (!(((/* implicit */_Bool) var_10))))), (((/* implicit */long long int) ((unsigned short) arr_28 [i_7 - 1] [i_1] [i_6] [i_7] [i_7 - 1] [18U]))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) ((short) var_5));
        }
        arr_32 [i_1] = ((/* implicit */long long int) min((max((max((14264660587285564640ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) -4193280)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((signed char) 2251799813685244LL))), (arr_29 [i_1] [i_1] [i_1] [i_1] [1]))))));
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 22; i_9 += 3) 
    {
        var_27 = ((/* implicit */long long int) ((251658240U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) var_2)))))));
        arr_35 [i_9 + 1] [(_Bool)1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_9 - 1]))));
    }
}
