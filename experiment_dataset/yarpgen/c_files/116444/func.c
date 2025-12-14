/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116444
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_16 = ((/* implicit */int) min((var_16), (arr_1 [i_0])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0] [i_1 + 1] [i_1 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (-332674154) : (((/* implicit */int) (short)-25500))))) : (arr_4 [i_0] [i_1 + 1])));
            var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        }
        var_18 = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) 1714097216096628704ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24628))) : (16732646857612922912ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)50699)) : (arr_0 [i_0]))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */short) max((((unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10251678041758293531ULL)) ? (arr_2 [i_2 - 2] [(unsigned short)7]) : (((/* implicit */int) arr_6 [i_2]))))), (((unsigned long long int) (unsigned short)59170))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (arr_6 [2])));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) -1370602726);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_10 [i_3]))))) | (((/* implicit */int) arr_11 [i_2] [i_3] [i_2]))));
                    var_22 |= ((/* implicit */int) ((((/* implicit */int) arr_12 [i_4] [i_2 + 2] [i_2 + 3])) < (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)25499)) : (332674144)))));
                }
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 23; i_5 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_5 - 1]) : (arr_15 [i_5])))) ? (((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) arr_14 [i_5 + 1] [i_5])))) : (arr_15 [i_5])));
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5 - 2])) ? (max((((/* implicit */long long int) (short)-24628)), (-3271061978936400955LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8)))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_14))));
    }
    for (int i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        var_25 = ((/* implicit */short) var_13);
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_8 - 1])) ? (((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (((/* implicit */int) arr_19 [i_8 - 4])) : ((-2147483647 - 1)))) : (((((/* implicit */_Bool) arr_19 [i_8 - 4])) ? (((/* implicit */int) arr_14 [i_6 + 1] [i_6 - 1])) : (arr_17 [i_6 - 1])))));
                    var_27 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_8))));
}
