/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139349
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 -= ((/* implicit */signed char) min((var_6), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (signed char)20)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_3] = ((/* implicit */unsigned short) arr_6 [i_3] [i_2]);
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_13))))), (((min((var_4), (((/* implicit */unsigned int) (unsigned short)6167)))) - (((unsigned int) arr_2 [i_3])))))))));
                        var_16 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */_Bool) (short)8877);
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4]))))) ^ (((/* implicit */int) (signed char)69))));
        var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_13 [i_4] [i_4])))) ? (((/* implicit */int) min((arr_15 [i_4]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4])) && (var_1))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) == ((~(((/* implicit */int) (signed char)14)))))))));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((15079471080237415261ULL) == (((/* implicit */unsigned long long int) var_0)))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((arr_8 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_24 [i_6 + 1] [i_8 - 2]))));
                    arr_28 [i_6] [i_7] [i_8] [i_8] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_8 - 2] [i_6 + 1]))));
                    arr_29 [i_6 - 2] [i_6] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_8] [i_8 + 1] [i_7] [16ULL])) ? (arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]) : (arr_9 [i_8] [i_8 + 1] [i_6] [i_6])));
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [2ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6 + 1] [i_6 + 1]))) : (7537085370701146446LL)));
    }
}
