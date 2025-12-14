/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188875
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_1 [i_0 + 1]);
                    var_12 = ((/* implicit */long long int) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [(short)2] [i_1] [i_2] [i_3] [i_2] [i_2] [i_4] = ((/* implicit */short) (signed char)-42);
                                var_13 = ((/* implicit */_Bool) ((((((arr_4 [i_0] [i_3]) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)4420)))) & (((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1] [i_3])))) >> (((/* implicit */int) max(((_Bool)1), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45268))) == (arr_0 [i_0]))))))));
                                var_14 = ((((((/* implicit */_Bool) arr_12 [16U] [i_4] [i_2] [(signed char)15] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) : (arr_12 [8LL] [i_3 + 1] [i_2] [i_1] [i_0]))) & ((~((-(268369920U))))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 4294967292U);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)35)))) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)6]))))) < (1395448379106404624ULL))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) 1420379148808296086ULL))));
                var_17 = ((/* implicit */unsigned int) arr_5 [i_5] [i_5] [15U] [i_6]);
                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_17 [i_5] [i_5])) - (-9086178176091830239LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) & (((/* implicit */int) (signed char)112))))))))) >= (arr_0 [i_5])));
            }
        } 
    } 
}
