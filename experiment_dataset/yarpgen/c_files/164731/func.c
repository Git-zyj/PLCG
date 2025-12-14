/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164731
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
    var_16 = ((/* implicit */long long int) (-(max((min((var_12), (var_12))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */short) var_9)))))))));
    var_17 = ((/* implicit */unsigned int) 115919074);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) ((signed char) var_13));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_4)))) <= (115919074)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_3] [i_4] = 120296198U;
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)41))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1])))))));
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (signed char i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 2])) - (115919074)))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_6] [i_7 + 1]) && (arr_6 [i_5] [i_7 + 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_7 - 2]))) | (var_6))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) var_4))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_5] [i_5])), ((unsigned char)0)))) ? (max((0U), (((/* implicit */unsigned int) 115919074)))) : (((unsigned int) (signed char)-41)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)13)))))))));
    }
    var_24 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 115919074)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-5283370447015389877LL) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (-5283370447015389877LL))));
}
