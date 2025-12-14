/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101225
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (min((6958542754604100266LL), (arr_2 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))))), (((/* implicit */long long int) 126644719U))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_8 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_4 + 1]))))))));
                                var_17 = ((/* implicit */unsigned char) ((unsigned short) var_1));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (((long long int) arr_16 [i_0] [i_1] [i_5] [i_7])))))));
                                var_19 = ((/* implicit */_Bool) (+(6958542754604100253LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_8 = 4; i_8 < 23; i_8 += 2) /* same iter space */
    {
        var_20 = arr_22 [i_8];
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_19 [i_8 - 3]) : (((/* implicit */int) ((unsigned char) (unsigned short)23316))))))))));
        arr_23 [i_8] = ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8]))) - (var_3)))))) ? (arr_21 [i_8]) : (((arr_21 [i_8 + 1]) + (var_0))));
    }
    for (short i_9 = 4; i_9 < 23; i_9 += 2) /* same iter space */
    {
        arr_27 [i_9] [i_9] = ((/* implicit */unsigned char) (unsigned short)42352);
        arr_28 [i_9] [i_9] = ((/* implicit */unsigned short) (unsigned char)246);
        var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [(short)13])) ? (((/* implicit */unsigned long long int) 3837412953U)) : (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_13)))) ? ((-(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) (unsigned short)42220)))))))));
    }
}
