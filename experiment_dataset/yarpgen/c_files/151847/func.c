/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151847
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 3266338881U)))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15))))) ? (arr_1 [i_1] [(unsigned char)2]) : (var_7)))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)63896)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned short)65520)))) != (((int) var_5)))))));
                                var_18 *= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65505)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 + 4] [i_4] [i_4] [i_0] [i_3 - 1] [i_3 + 4] [i_3 + 4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) : (max((var_2), (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65494))));
                                var_20 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) : (426157945U)));
                                arr_21 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28246)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned short)8] [(unsigned char)6] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)9)))) : (((unsigned int) (short)-28413))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned char i_10 = 4; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            {
                                arr_38 [i_7] [(_Bool)1] [i_9] [(short)15] [i_11] [i_9] [i_7] = ((/* implicit */short) min(((unsigned char)239), ((unsigned char)203)));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) var_12)))));
                                arr_39 [i_7] [i_8] [i_7] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)28387))))) ^ (((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) arr_3 [i_7] [i_7]))))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)43)) >= (((/* implicit */int) arr_7 [i_10 - 1] [1]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 19; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            arr_45 [i_7] [i_8] [i_12 - 2] [i_12 - 2] = ((/* implicit */short) ((unsigned short) (unsigned short)65527));
                            var_23 = ((/* implicit */short) (~(var_13)));
                            arr_46 [i_13] [(unsigned short)9] [(unsigned short)9] = (~(((unsigned int) (short)-30441)));
                        }
                    } 
                } 
            }
        } 
    } 
}
