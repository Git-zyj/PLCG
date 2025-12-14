/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182086
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
    var_13 = ((/* implicit */unsigned short) min((((((15113811023215683274ULL) + (((/* implicit */unsigned long long int) var_6)))) + (min((((/* implicit */unsigned long long int) 2741215274U)), (276865175720004770ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (1526078051U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))) : (((((/* implicit */_Bool) (signed char)127)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (((((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [22ULL] [i_1] [22ULL] [i_3] [23U]))))) + (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (var_2))))) + ((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_4)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(signed char)15] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [15LL] [i_4])), ((~(arr_8 [i_0] [i_1] [i_2] [(unsigned char)17] [(short)14])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)0)))) : (var_8)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 11342667028244729914ULL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_7)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [i_1]))))))))));
                                arr_21 [i_1] [i_5] [i_6] = ((/* implicit */int) 7275786488255376720LL);
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [5LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562812514467840ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) ((arr_11 [i_1] [i_1]) && (arr_11 [i_1] [i_1])))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */long long int) var_4);
    var_17 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((((/* implicit */_Bool) 2152109191781200411LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)5)))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)29)))))) != (((/* implicit */int) ((((/* implicit */int) (short)-32754)) != (((/* implicit */int) (_Bool)1)))))));
}
