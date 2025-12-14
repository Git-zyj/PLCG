/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137893
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
    var_11 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (min((var_0), (((/* implicit */long long int) (short)511)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (min((((/* implicit */unsigned long long int) -7174701004632756690LL)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 201326592U)) : (((arr_0 [4LL] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
        var_13 = max((((/* implicit */unsigned long long int) var_5)), (max((min((var_6), (var_3))), (((/* implicit */unsigned long long int) ((long long int) 7174701004632756688LL))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) arr_2 [i_1]))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned short) arr_7 [i_2]);
                        arr_17 [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */int) arr_8 [i_3]);
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_6))));
                        arr_18 [i_2] = ((/* implicit */unsigned short) 7174701004632756695LL);
                    }
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_2 + 1] [i_2 + 1] [i_3] [i_3 + 1]))) ? (max((4684971457161613421ULL), (arr_14 [i_1] [i_2 + 1] [i_3 - 1] [i_3]))) : ((-(arr_14 [i_1] [9ULL] [i_1] [(short)6])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_6] [7LL] [i_6 + 2]))));
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((short)-31977), ((short)-31962)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65408))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_8))) < (arr_6 [i_1]))) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2))));
                        arr_28 [i_1] [i_1] [i_1] [i_5] [i_6 + 3] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 134217727))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) arr_29 [i_8]);
        arr_31 [i_8] [i_8] = ((/* implicit */long long int) ((_Bool) var_9));
    }
}
