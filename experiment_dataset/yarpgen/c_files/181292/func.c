/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181292
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((_Bool)1) ? ((~((-(6769749174635101688LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [(short)22])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) & (arr_0 [i_0])))));
                            arr_14 [i_0] [i_1] [i_1 - 1] = ((((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_3 + 1] [i_2 + 2] [i_1])) * (((/* implicit */int) (unsigned char)0)))) >> (((((arr_3 [i_0] [i_1 + 1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19)))) - (59574)))))) ^ (((long long int) 0U)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) arr_17 [(signed char)3] [(_Bool)1] [i_0] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (((((/* implicit */_Bool) (unsigned char)53)) ? (18446744073709551610ULL) : (12099855703654703480ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6] [i_0] [i_0] [9U])) <= (((/* implicit */int) arr_17 [2LL] [i_4] [i_0] [i_6])))))));
                                var_21 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_2 [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((_Bool) var_1));
    var_23 = ((/* implicit */signed char) var_6);
    var_24 = ((/* implicit */int) min((7689963736451707856LL), (((/* implicit */long long int) ((unsigned int) var_13)))));
    var_25 = ((/* implicit */short) ((signed char) var_5));
}
