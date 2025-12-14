/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104787
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (short)617))))), (7643127829085212292LL)))) <= (((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) (-(var_10)))) : ((+(var_4)))))));
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) ((unsigned char) var_11))), ((short)30534)))), (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) / (var_4)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_1 [i_4 + 2])) : (((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) var_9))))))))));
                                arr_13 [13LL] [i_1] [i_2] [i_0] [i_4 + 2] = ((/* implicit */short) (+((-(var_3)))));
                                var_17 |= ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    arr_14 [i_0] [(unsigned char)17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [10ULL])) / (((/* implicit */int) var_6))))), (max((27021597764222976LL), (((/* implicit */long long int) (short)614))))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (min((var_4), (((/* implicit */unsigned long long int) var_12))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    {
                        var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)7)))) << (((/* implicit */int) (!(((/* implicit */_Bool) 3836478177225457545ULL)))))));
                        var_19 = ((/* implicit */unsigned long long int) var_2);
                        arr_23 [i_0] [(unsigned short)7] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_6] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [(signed char)0] [i_7])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_6]))))) : (((arr_2 [(short)23] [i_5]) ? (max((((/* implicit */unsigned long long int) var_11)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_5] [i_7])) + (((/* implicit */int) (_Bool)0)))))))));
                        var_20 = ((/* implicit */long long int) var_13);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) var_8);
            arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-615)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7643127829085212292LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) : (((arr_15 [i_0] [i_5]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? ((-((-(var_4))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (short)1081))))), (-7643127829085212293LL))))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        }
    }
    /* LoopSeq 3 */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        arr_29 [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
        var_22 *= ((/* implicit */_Bool) 18446744073709551615ULL);
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */short) (((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7643127829085212292LL)) ? (((/* implicit */int) arr_21 [i_9] [(_Bool)1] [i_9] [22LL])) : (((/* implicit */int) arr_21 [i_9] [(_Bool)1] [i_9] [i_9]))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_9])) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9]))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned short) arr_10 [i_10] [24ULL] [i_10]);
        var_25 *= ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)18)))), (((((/* implicit */int) ((unsigned short) (short)5207))) ^ ((+(((/* implicit */int) (unsigned short)24))))))));
    }
}
