/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152562
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_12 = ((((/* implicit */_Bool) (short)20543)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((var_7) / (arr_2 [i_0]))));
        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-20544))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned int) var_0);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_15 -= ((/* implicit */unsigned int) ((unsigned short) min((arr_7 [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-5))))))));
            var_16 -= ((/* implicit */signed char) var_0);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-20544)), (arr_10 [i_1] [i_1] [i_3] [i_1])))) ? (((((/* implicit */_Bool) (short)20541)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_9))));
                        arr_13 [i_1] [i_2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) max((2593378014U), (1701589281U)));
                    }
                } 
            } 
            arr_14 [15] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20542)) ? ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (2044) : (var_2)))))) ? (min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) 1425897086)) : (var_7))))) : (arr_7 [i_2]));
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (int i_7 = 3; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_8])) && (((/* implicit */_Bool) (short)-20540)))))));
                            var_19 = (~((+(((/* implicit */int) arr_6 [19U] [i_1] [i_8])))));
                            var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [i_7 - 2] [i_7 + 1] [i_6] [i_6] [i_7 + 2] [i_7 + 2]) & (((/* implicit */unsigned int) -2054910149))))) && (((((/* implicit */_Bool) (signed char)-91)) && (((/* implicit */_Bool) var_9))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) ((((unsigned int) (~(var_1)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_21 [i_1] [i_1] [i_5] [i_1] [i_1] [i_5]))))));
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [12U]))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((((255) - (((/* implicit */int) (unsigned short)52371)))), (((int) var_11))))) ? (max((((/* implicit */unsigned int) ((-1425897091) ^ (-212478029)))), (134217727U))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) != (var_4))))) - (((var_11) / (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_24 = ((/* implicit */signed char) arr_11 [1U] [i_5] [i_9] [i_9] [i_5] [i_9]);
                    }
                } 
            } 
        }
    }
    var_25 = ((/* implicit */int) (~(((((/* implicit */_Bool) 717681828U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1449575228) >= (-1497725259))))) : (var_11)))));
}
