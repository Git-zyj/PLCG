/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113601
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0])))))));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1]))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) != (8972343845694465986LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3])) && (((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_1] [i_0])))))));
                        arr_14 [i_0] [i_3] [i_2] [i_3] [i_3] [i_2] = (!(((/* implicit */_Bool) arr_2 [i_0])));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_15 -= ((/* implicit */unsigned int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0])))));
            arr_18 [i_0] [i_4] = ((/* implicit */short) arr_17 [i_4] [i_0]);
            arr_19 [i_0] [8] [i_0] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_12 [2] [i_0] [i_4])));
            var_16 = ((/* implicit */unsigned short) ((var_0) || (((/* implicit */_Bool) var_10))));
            var_17 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)153)) ? (-2147483637) : (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4]))))) * (((((/* implicit */_Bool) arr_11 [i_4] [4ULL] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_22 [i_0] [i_5] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_5] [9ULL])) != (((/* implicit */int) arr_16 [i_0])))))));
            var_18 = ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_5]) / (arr_3 [i_5] [i_0])));
            var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) 2109909230)) : (4200200825U)));
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_5] [1ULL] [5])) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) -2147483640))))) : (((/* implicit */int) ((-2147483640) <= (arr_3 [i_0] [(unsigned short)10]))))));
        }
        var_20 |= ((/* implicit */signed char) (~(var_5)));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) var_8);
                var_22 |= ((/* implicit */unsigned short) (signed char)(-127 - 1));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_8);
}
