/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177159
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
    var_18 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 *= arr_1 [i_1];
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [(_Bool)1] [6ULL] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((~(arr_2 [i_1] [14ULL] [i_2 - 1])))));
                                arr_12 [(short)14] [i_1] [i_2 + 1] [4LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_6))) && (((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1]))))) - (((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                } 
                var_21 = var_6;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (unsigned char)164);
                                arr_27 [i_6] = ((/* implicit */_Bool) 3783363272U);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) (-(982729116U)));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) == (((/* implicit */int) var_9)))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) + (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */long long int) var_7)) : (var_8))))) : (((/* implicit */long long int) var_10))));
    var_25 |= ((/* implicit */unsigned int) (_Bool)1);
}
