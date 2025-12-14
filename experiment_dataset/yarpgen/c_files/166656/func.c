/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166656
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_2] [6ULL] [7LL])) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-16384)) || (((/* implicit */_Bool) (short)16384))))))))) ? (arr_1 [(short)8] [i_0]) : (((/* implicit */unsigned long long int) min((3344023730U), (3344023743U))))));
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (7117704939484013561ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))))) / (max((((/* implicit */unsigned long long int) (short)-16384)), (13460322188317582622ULL)))));
                        }
                    } 
                } 
                var_18 = min((((/* implicit */unsigned long long int) min((((/* implicit */short) max((arr_8 [i_1] [i_1] [i_0] [i_0 + 2]), (arr_10 [i_0] [i_1])))), ((short)-16372)))), (((((/* implicit */_Bool) arr_8 [(short)5] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)6] [i_1]))) : (max((((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_0] [i_0])), (11329039134225538054ULL))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_5]))) : (arr_13 [i_0 + 2] [i_5]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_12 [i_5] [i_4] [i_5]))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_15 [i_0] [2ULL] [i_0 + 1] [i_0 + 2] [i_0 + 2]) : (((/* implicit */int) arr_12 [i_5] [i_5] [16LL])))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned char i_9 = 4; i_9 < 19; i_9 += 1) 
            {
                {
                    arr_30 [i_7] [i_8] [i_9 - 3] |= ((/* implicit */short) var_2);
                    var_20 |= ((/* implicit */unsigned long long int) arr_22 [i_7]);
                }
            } 
        } 
    } 
    var_21 = var_10;
    var_22 = ((/* implicit */unsigned long long int) var_9);
    var_23 |= ((/* implicit */unsigned int) var_14);
}
