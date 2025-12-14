/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182358
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
    var_18 = ((/* implicit */unsigned char) ((unsigned int) 1977477764));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((((((/* implicit */_Bool) var_12)) ? (5425905911237769403LL) : (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 6843090413939055147LL)) ? (1847699297U) : (((/* implicit */unsigned int) -1))))));
        var_20 = ((arr_3 [i_0] [i_0]) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35245))) * (467391434U)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) var_7)) ? (-5425905911237769404LL) : (((/* implicit */long long int) 2147483647))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) != (((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])) << (((((((/* implicit */int) var_11)) + (79))) - (22)))))));
                        var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) -8048210475601282425LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_2))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30300))) : (arr_6 [i_1])));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_22 [i_1] [i_5] [i_6] [i_7])) * (((/* implicit */int) var_15)))));
                        arr_24 [i_1] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (-6843090413939055152LL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned int) arr_17 [i_8] [i_8] [i_8]);
        arr_28 [i_8] = ((/* implicit */int) (~(5425905911237769403LL)));
    }
    var_23 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)30281)), ((~(var_9))))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (3291696082U)))) ? (var_0) : (var_5)))));
}
