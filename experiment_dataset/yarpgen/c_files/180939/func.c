/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180939
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
    var_20 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((_Bool) (unsigned short)34053))), (max((var_0), (((/* implicit */long long int) 3928522658U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((337297765U), (534961064U))))));
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [7])) ? (((var_13) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) -180225860))));
        var_23 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)17))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 2014634706U)) ? (arr_2 [14U] [4LL]) : (var_2))))) % (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (65535ULL))))));
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (-1598712964)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_0] [12] [3U])) ? (((long long int) 2237447721U)) : (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_4 + 1]))))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_4]))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */_Bool) -1431777946);
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 16; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */int) (~(arr_5 [i_5] [i_5] [i_5])));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min((arr_12 [i_6] [i_6 + 1]), (var_8))))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            arr_31 [i_5] [i_5] [8U] [i_5] [i_8] [i_10 - 1] = ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_7] [i_10])) ? (((/* implicit */unsigned long long int) max((840389684U), (3422852545U)))) : (((unsigned long long int) var_0))));
                            arr_32 [i_5] [i_8] [i_10] = ((/* implicit */unsigned char) min((((arr_0 [i_6 + 1]) ? (((/* implicit */long long int) var_17)) : (arr_30 [i_5] [i_5 + 2]))), (((var_2) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6 + 1])))))));
                        }
                        var_31 = max(((-(((/* implicit */int) var_18)))), (((((/* implicit */int) (unsigned char)204)) - (((/* implicit */int) (_Bool)1)))));
                    }
                    var_32 += ((/* implicit */unsigned int) arr_27 [i_5]);
                    var_33 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)9));
                }
            } 
        } 
    } 
}
