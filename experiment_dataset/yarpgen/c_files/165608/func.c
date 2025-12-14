/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165608
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 5271743916267450753LL)) ? (-7393979190878582568LL) : (3711601076365064365LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((arr_5 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))))) : (min((var_8), (((/* implicit */long long int) (unsigned char)182)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) var_16)) & (((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))));
                        var_18 = (-(arr_8 [i_0 - 1] [i_0]));
                        arr_11 [i_0] [i_1] [i_0] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) (((~(var_0))) >> (((var_6) - (2508543401658378286LL)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 4; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) max((arr_6 [i_0] [i_4 + 2] [i_4 + 2]), (((/* implicit */long long int) (unsigned char)251))))) ? (var_12) : (min((arr_6 [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_1] [i_0]))));
                                arr_18 [i_5] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_0]), (var_16)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0])) / (((/* implicit */int) arr_17 [i_0])))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */long long int) arr_4 [i_2 + 1] [i_2 + 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0 - 1] [i_0] [i_2 - 1] [i_6] [i_6] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) arr_9 [i_1] [(unsigned char)17] [i_2] [i_6 + 2] [i_7]);
                                arr_24 [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((long long int) max((min(((unsigned char)214), (arr_7 [i_0] [i_7] [i_2]))), ((unsigned char)84))));
                                arr_25 [i_0] [i_6] = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_6] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_1);
}
