/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188372
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */int) (~(4294967295U)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [(unsigned short)12] = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) ((var_3) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (var_11)));
                    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32512)) ? (262143) : (((/* implicit */int) (short)0))))) - (((unsigned int) (+(var_8))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned long long int) var_1)))))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) (unsigned short)256);
        var_16 = max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_7))))), (max((var_0), (((/* implicit */unsigned long long int) var_10)))))), (var_0));
        arr_9 [i_3] = max((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 262159))))), (var_7)))), (((((/* implicit */_Bool) 4ULL)) ? (arr_2 [i_3] [i_3]) : ((~(var_1))))));
        arr_10 [i_3] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)65263))));
    }
    var_17 = ((/* implicit */int) var_7);
    var_18 |= ((/* implicit */unsigned short) min((max(((~(var_2))), (((/* implicit */unsigned long long int) (+(var_9)))))), (((/* implicit */unsigned long long int) ((int) min((0ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned short) (short)32753);
                                var_20 -= ((/* implicit */long long int) var_5);
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [i_4 - 2] [i_4 + 1]) ? (((/* implicit */int) arr_14 [i_4 - 2] [i_4 + 1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)32767))))) : ((-(arr_23 [9ULL] [i_5] [9ULL] [i_7] [(_Bool)1] [i_4 + 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (var_8)))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (arr_11 [i_4] [(_Bool)1])))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_4 - 1] [6ULL])), (68169720922112ULL)))) ? (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_3)), (var_5)))))) : (9223372036854775807LL)));
                }
            } 
        } 
    } 
}
