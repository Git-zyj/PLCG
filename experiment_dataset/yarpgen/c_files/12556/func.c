/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12556
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (short)-12797)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned short)32736)))), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56767))) / (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */int) min(((_Bool)1), (var_7)))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((unsigned short) ((unsigned short) var_14))))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((min(((unsigned short)30), (((/* implicit */unsigned short) var_6)))), (var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_4 - 1] [i_4 + 2])), (var_9)))) ? (min((((/* implicit */long long int) var_9)), (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4 - 1] [i_4 + 3])) + (((/* implicit */int) var_7))))))))));
                    arr_18 [i_3] [i_4] = ((/* implicit */signed char) (-(((((((/* implicit */int) arr_8 [i_3] [i_3] [i_4 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2])) + (81)))))));
                    arr_19 [i_4] [(_Bool)1] [i_4] = ((/* implicit */_Bool) (signed char)7);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_24 [i_3] [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */short) (~((~(((long long int) var_13))))));
                                var_19 = ((/* implicit */_Bool) arr_8 [i_3] [9ULL] [(short)15]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
