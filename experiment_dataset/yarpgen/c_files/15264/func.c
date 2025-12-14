/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15264
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
    var_11 = ((/* implicit */unsigned int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [(unsigned char)9] [13U] [i_1] [i_2] = ((unsigned short) ((((/* implicit */_Bool) min((var_1), ((unsigned char)237)))) ? (((((/* implicit */_Bool) 50349868651434328ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    arr_11 [i_0] [i_1 - 2] [i_1] = ((/* implicit */short) (unsigned char)71);
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((unsigned long long int) arr_5 [18])), (((/* implicit */unsigned long long int) var_10)))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_13 += ((/* implicit */short) (-((((_Bool)0) ? (((/* implicit */int) (unsigned short)61180)) : (((/* implicit */int) (unsigned char)71))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_14 &= arr_20 [2ULL] [i_4] [i_6] [i_6];
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_5])) / (((/* implicit */int) (unsigned char)2)))) >= ((+(((/* implicit */int) var_5))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
        }
        arr_23 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40962))) : (arr_0 [i_3] [i_3])));
        arr_24 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63509)) ? ((+(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10410)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_30 [i_7] [i_8] [i_8] = ((short) var_2);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_35 [i_7] = (-(((/* implicit */int) var_3)));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_7]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_6))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) arr_21 [i_3] [i_9] [i_9 + 4] [i_9 + 4] [i_9])) >= (((/* implicit */int) arr_21 [i_9 + 2] [i_7] [i_9 + 1] [i_8] [(signed char)7]))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (short)9354)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_8] [i_7] [i_3])))) : (((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                    arr_36 [i_7] = (~(18446744073709551615ULL));
                    var_20 = ((/* implicit */unsigned char) ((unsigned short) 3015723016U));
                }
            } 
        } 
    }
    var_21 &= ((/* implicit */unsigned int) (signed char)64);
}
