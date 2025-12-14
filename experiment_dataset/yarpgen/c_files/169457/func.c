/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169457
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
    var_12 = ((/* implicit */_Bool) max((max((((long long int) 1943552300)), (((/* implicit */long long int) (+(8388607)))))), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 1943552293)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (short)-30820))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? ((-(255U))) : (((/* implicit */unsigned int) min((315184451), (1943552312))))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)-20376)) ? (-1943552301) : (((/* implicit */int) (short)17645)))))) : (var_11)));
                    var_14 = ((/* implicit */long long int) min((((268435455) << (((((-1) + (8))) - (6))))), (((/* implicit */int) (!(((/* implicit */_Bool) -1943552321)))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((arr_4 [(unsigned char)6] [(unsigned char)6]) % ((+(16445945468008322332ULL))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_14 [i_0] [i_3] [i_4] = ((unsigned int) (unsigned short)15);
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) max((10902573846417029153ULL), (((/* implicit */unsigned long long int) (short)23040))))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)255))))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (unsigned char)188)) - (170)))))))));
        arr_15 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))), (max((((var_7) >> (((-1943552321) + (1943552375))))), (((/* implicit */unsigned long long int) (short)-1))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? ((~(arr_7 [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_1 [i_6] [i_6])) : (((/* implicit */int) (short)-256)))))));
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1943552311)) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_10)))))));
            arr_21 [i_7] = ((/* implicit */unsigned short) (-(arr_8 [i_6] [i_6] [i_6])));
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (10902573846417029153ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_18 [i_8] [i_8])) : (((/* implicit */int) ((unsigned short) var_10))))))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                arr_26 [i_9] [(_Bool)1] [4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)36)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))) : (7544170227292522463ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))));
            }
        }
    }
    for (int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(short)12] [(unsigned short)2] [i_10] [i_10] [0] [i_10]))))) ? (((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10] [6ULL] [i_10] [i_10] [i_10] [i_10])))))) : (((((/* implicit */_Bool) arr_13 [i_10] [14U] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_13 [10] [10ULL] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_13 [i_10] [(short)6] [i_10] [i_10] [(short)6] [i_10]))))));
        arr_32 [i_10] = ((/* implicit */short) (+(-1)));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1003)) & (((/* implicit */int) (short)-1))))) ? (((min((var_3), (var_6))) ? (((/* implicit */unsigned int) ((1248953751) | (((/* implicit */int) (_Bool)1))))) : (var_11))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_9)) << (((((-1943552313) + (1943552344))) - (18))))))))));
    }
    var_24 += ((/* implicit */unsigned short) var_6);
}
