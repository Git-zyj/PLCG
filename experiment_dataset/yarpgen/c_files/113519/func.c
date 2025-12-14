/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113519
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
    var_10 = ((/* implicit */unsigned char) var_4);
    var_11 = ((((/* implicit */_Bool) min((((33554431) & (33554431))), (((33554449) ^ (-33554454)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1 + 2] [i_2] [i_3] = ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */long long int) min((((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) (signed char)114)))), (((/* implicit */int) arr_0 [i_0])))))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_12 -= ((/* implicit */long long int) ((int) min((var_5), (((/* implicit */unsigned short) arr_7 [i_1] [i_1 + 2] [i_1 - 3])))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */long long int) ((((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) ^ ((+(((/* implicit */int) (unsigned short)9423))))));
        var_14 *= arr_5 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) -4721756714741479480LL);
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 33554454))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 13495899698247939051ULL)) || (((/* implicit */_Bool) var_7)))))) + (var_3))))));
                                arr_26 [i_5] [i_5] [i_5] [i_7] [i_5 - 2] [i_7] [i_4] |= ((/* implicit */long long int) ((unsigned char) arr_24 [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 1]));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_4] [i_4] [i_6] [i_5 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (short i_10 = 1; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 - 1])) ? (arr_28 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]) : (((/* implicit */unsigned int) (-(-33554454))))));
                                arr_32 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)40536)) ? (arr_27 [i_5] [i_5 - 1] [i_5 - 2] [i_10 + 1] [i_10 - 1] [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_4] = ((/* implicit */unsigned long long int) var_3);
    }
    var_20 &= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            {
                arr_39 [i_11] [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-109)), (arr_23 [i_11] [i_11] [i_11])))) ? (((/* implicit */int) arr_16 [i_12])) : (((-33554450) - (((/* implicit */int) (unsigned char)253))))))), (min((((/* implicit */long long int) var_7)), (((6449550992702433295LL) / (7042383557807002329LL)))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_13] [i_14])) ? (((/* implicit */int) (short)12072)) : (((/* implicit */int) (short)12072))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11] [i_12])))))) : (((unsigned long long int) -1492534559))))));
                            var_22 ^= ((/* implicit */long long int) arr_37 [i_11]);
                            var_23 = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
