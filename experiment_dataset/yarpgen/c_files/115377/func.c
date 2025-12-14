/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115377
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) (signed char)38))));
        var_11 = (_Bool)1;
    }
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (min((var_6), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_13 += ((/* implicit */unsigned short) ((((_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_1]), (((/* implicit */int) (short)-25904))))) : (min(((-(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) var_1);
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38)))))));
        var_14 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [1])) || (((/* implicit */_Bool) (-(var_6))))))));
        var_15 = ((/* implicit */_Bool) min(((-((+(arr_10 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) var_5))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_2))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((arr_10 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_9)))))));
                        arr_23 [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? ((-(var_6))) : (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_2]) : (arr_10 [i_3] [i_3]))))) : (arr_22 [i_4] [i_5])));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */int) var_8);
}
