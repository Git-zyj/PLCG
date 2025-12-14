/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167851
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
    var_10 = ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (max((var_8), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */short) ((((-193382613) <= (((/* implicit */int) arr_0 [i_0 - 1])))) ? (((/* implicit */int) max((arr_1 [i_0] [i_0]), (max((arr_1 [i_0] [i_0]), (arr_0 [i_0 - 1])))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (24655))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) : (((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) % (((/* implicit */int) arr_1 [i_0 - 1] [2LL]))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_5))), (((/* implicit */unsigned int) arr_0 [i_0]))))));
        arr_3 [(_Bool)1] [i_0] |= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_14 += max((((_Bool) arr_1 [i_0 - 1] [i_0])), ((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [i_4] [i_3 + 1])))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_7)))))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2])) ? (arr_8 [i_1] [i_1 - 3]) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3 + 1]))));
                        var_18 -= ((((/* implicit */_Bool) arr_10 [i_1 - 3] [i_3 + 1] [i_3 - 1])) ? (arr_10 [i_1 + 2] [i_3 + 3] [i_3 - 2]) : (((/* implicit */unsigned long long int) var_5)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) arr_5 [i_5] [i_7]);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1 - 3])) ? (((/* implicit */int) arr_14 [i_1 - 4])) : (((/* implicit */int) arr_24 [i_1 - 2])))))));
                        var_21 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1] [18] [i_6 - 1] [i_7]))) + (arr_8 [i_1 + 2] [i_6 - 1]));
                        arr_25 [i_1] [i_1] [i_6] [i_7] = ((/* implicit */int) arr_5 [i_7] [i_6 - 1]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8])) ? (max((((/* implicit */long long int) var_1)), (var_3))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (arr_26 [i_8] [i_8]) : (((/* implicit */unsigned int) ((int) ((arr_28 [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32765)), ((unsigned short)9078))))));
    }
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_32 [i_9] = var_6;
        var_23 &= arr_30 [i_9] [(short)14];
    }
    var_24 = ((/* implicit */_Bool) var_7);
}
