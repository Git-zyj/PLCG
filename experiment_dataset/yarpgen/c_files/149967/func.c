/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149967
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = (-(((/* implicit */int) ((unsigned char) (_Bool)1))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                /* LoopSeq 2 */
                for (signed char i_2 = 4; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0] [i_1]));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (4294967288U)))))));
                }
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) min((arr_0 [i_1 + 1]), (var_5))))));
                    arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((unsigned long long int) (unsigned char)194)) : (((/* implicit */unsigned long long int) (~(7U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_4 - 2] [i_5])) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_4 - 3] [i_5 - 1])))));
                                arr_21 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19419)) && (((/* implicit */_Bool) (signed char)-123)))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_3 - 1] [i_3 + 1])) >= (((/* implicit */int) (signed char)25))))), (arr_7 [i_3 + 1] [i_3 + 1]))) << (((/* implicit */int) (((+(5517222169813203765LL))) > (((((/* implicit */_Bool) (unsigned short)46106)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_3] [i_1 - 1]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        for (long long int i_7 = 4; i_7 < 19; i_7 += 1) 
        {
            {
                arr_30 [i_7] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6] [i_6])) <= (((/* implicit */int) arr_3 [i_7]))));
                arr_31 [i_7] [i_7] = ((/* implicit */long long int) (-(((arr_0 [i_7 - 4]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_7 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (unsigned char i_9 = 2; i_9 < 11; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_43 [i_8] [i_9] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) max(((unsigned char)69), (((/* implicit */unsigned char) (_Bool)1))));
                        arr_44 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_9 - 1])) >> (((/* implicit */int) arr_3 [i_9 - 2]))))) / (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9 - 1]))) : (var_4)))));
                    }
                    arr_45 [i_10] [i_9] [i_9] [i_8] |= arr_18 [i_8] [i_8] [i_8] [i_8] [i_8];
                    arr_46 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (~(arr_25 [i_8] [i_9])))))));
                }
            } 
        } 
    } 
    var_17 = (!((!(((/* implicit */_Bool) ((long long int) var_4))))));
}
