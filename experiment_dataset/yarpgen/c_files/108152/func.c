/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108152
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) -398687092)), (2753036035146945403ULL))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) var_8);
                                arr_19 [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) (-(((var_4) - (2147483647)))));
                                var_23 = ((/* implicit */unsigned int) var_10);
                                var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                                arr_20 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_2])) < (((((/* implicit */unsigned long long int) arr_2 [i_2])) % (arr_8 [i_3])))));
                            }
                        } 
                    } 
                    var_25 = var_4;
                    arr_21 [i_4] [i_3] [i_2] = ((/* implicit */int) arr_11 [i_2] [i_3] [8] [6U]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_26 [i_7] = ((/* implicit */unsigned long long int) (unsigned char)254);
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_29 [i_7] [i_7] = ((((/* implicit */_Bool) arr_11 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 2])) ? (arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 2]) : (((/* implicit */int) (unsigned short)61322)));
                        var_26 = ((/* implicit */_Bool) var_14);
                        arr_30 [i_9] [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_28 [i_2] [i_7] [i_8] [i_9])))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_17))));
                        var_27 = (!(((/* implicit */_Bool) var_2)));
                    }
                }
            } 
        } 
    }
    var_28 = ((max((((((/* implicit */int) var_9)) != (var_4))), ((!(((/* implicit */_Bool) 1165027966U)))))) ? (max((var_4), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_19)))))) : (var_10));
}
