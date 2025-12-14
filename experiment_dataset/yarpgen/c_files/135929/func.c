/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135929
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] = (+(-1430362963));
                var_17 = ((/* implicit */signed char) (+(min((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)15)))), (((/* implicit */int) min((var_0), ((unsigned char)52))))))));
                var_18 = ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 927127870)) : (min((1ULL), (18446744073709551615ULL))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((unsigned short) var_0))))), ((-(((/* implicit */int) var_15))))));
        var_21 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((int) -927127870));
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) : (18446744073709551606ULL)))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_4 - 1] [(unsigned char)14] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_11 [i_4] [i_5])))) % ((~(5ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_4 - 1])))));
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [(unsigned short)7] [(unsigned short)7]))));
                    var_25 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)53)))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((2147483632), (((/* implicit */int) (unsigned short)30264))))) ? (((((/* implicit */int) (unsigned short)30264)) >> (((875957823) - (875957811))))) : (((/* implicit */int) arr_8 [i_3])))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_3])), (var_2)))) ? (min((-927127870), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_5)))) - (272)))));
        arr_18 [i_3] [i_3] = ((/* implicit */short) min((((arr_11 [i_3] [i_3]) ^ (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 1335020286))))), (((((/* implicit */_Bool) -927127870)) ? (-927127870) : (((/* implicit */int) var_13)))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        arr_21 [i_6] = var_16;
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_27 = ((((/* implicit */int) ((unsigned short) var_6))) | (((((/* implicit */_Bool) min((arr_6 [i_9]), (((/* implicit */long long int) 1249589251))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) arr_9 [i_6] [i_6]))))));
                        var_28 = ((/* implicit */int) min((arr_24 [i_6] [i_7] [i_7]), (((/* implicit */long long int) max((((/* implicit */int) arr_23 [i_9] [i_8] [i_7])), (-1004197921))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)31))) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) arr_12 [(unsigned char)13])))))));
        arr_29 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1))))));
    }
}
