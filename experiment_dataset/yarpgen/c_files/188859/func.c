/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188859
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17612006919221417144ULL)) ? (var_15) : (((/* implicit */unsigned long long int) 14))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_8))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_3 [i_0] [i_0]));
        var_16 = ((/* implicit */int) ((13685234650869999022ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-83)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (7ULL)))));
                            var_18 = ((/* implicit */int) (+(4ULL)));
                            var_19 = ((signed char) (signed char)-22);
                            arr_16 [i_1] [i_1] [i_2] [i_1] [(_Bool)1] [i_3] = (+((+(var_10))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((unsigned long long int) 18446744073709551615ULL)) + (((((/* implicit */_Bool) 15)) ? (4136530520359163346ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))))))));
                        var_21 |= (+(((/* implicit */int) var_3)));
                        arr_22 [14] [i_1] [i_0] [i_6] [i_1] [i_0] &= ((arr_17 [i_0] [i_1 + 4] [i_5 - 1] [i_1 + 4]) + (293441887));
                    }
                } 
            } 
            arr_23 [i_0] [i_1] = ((/* implicit */_Bool) ((arr_13 [i_1 + 3] [i_1 + 1]) * (arr_13 [i_1 + 1] [i_1 + 4])));
            arr_24 [i_1] [i_0] [i_1] = ((/* implicit */int) var_7);
        }
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 18; i_7 += 4) 
    {
        var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)82))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
            {
                {
                    arr_32 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (signed char)71);
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            {
                                arr_39 [i_7 - 3] [i_8] [i_8] [i_10 + 2] [9] = ((/* implicit */unsigned long long int) (signed char)-51);
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) != (2855446513U))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_7] [i_7 - 3] [i_7] [i_10 + 2]))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (18446744073709551606ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                {
                    var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_33 [i_13] [i_12] [i_12] [i_7 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 19; i_14 += 2) 
                    {
                        for (int i_15 = 1; i_15 < 17; i_15 += 1) 
                        {
                            {
                                var_26 -= ((/* implicit */signed char) var_10);
                                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)-54)) : (2147483647))))));
                                var_28 = ((/* implicit */signed char) 5ULL);
                                var_29 = (~(8ULL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 17; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_56 [i_7 - 3] [i_7 - 3] [i_13] [i_16 + 2] [i_17] [i_16] [i_16] = ((((/* implicit */int) arr_37 [i_13] [i_13 + 4] [i_13 - 1] [i_13] [i_13] [i_13])) + ((+(((/* implicit */int) (signed char)-70)))));
                                arr_57 [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)50))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_30 &= ((/* implicit */unsigned long long int) -1125519370);
}
