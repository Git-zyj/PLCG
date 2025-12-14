/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187487
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
    var_13 = max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (((((/* implicit */_Bool) (unsigned short)39680)) ? (-5109699643527937211LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 = max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_3] [i_2])) ? (((/* implicit */unsigned int) 143579461)) : (arr_9 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] [i_3] [i_1]))), (((arr_9 [10LL] [10LL] [i_2 + 2] [i_3 - 2] [10LL] [i_3] [(unsigned short)18]) - (arr_9 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] [i_3] [i_3]))));
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((var_7), (((/* implicit */int) (short)27832))))))) || (((/* implicit */_Bool) var_7))));
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_10 [i_4] [i_3] [i_2 - 3] [i_2 - 3] [i_3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36686)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (max((min((arr_8 [i_0] [2LL] [i_0] [i_0]), (-8291378522090600327LL))), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57080)))));
                                var_16 += ((/* implicit */short) (unsigned short)50105);
                                arr_12 [i_3] [(short)0] [(short)0] [i_3] [(short)6] = ((/* implicit */long long int) (+((~(max((((/* implicit */unsigned long long int) var_11)), (12179795120048500675ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((arr_7 [i_2 - 1] [i_2 - 3] [i_6] [i_2] [i_6] [i_2 + 2]), ((-(arr_7 [i_2] [i_2 - 3] [i_6] [i_2] [i_6] [i_2 + 2])))));
                                var_18 = ((/* implicit */unsigned char) (short)-16459);
                                var_19 = ((/* implicit */unsigned short) min(((((_Bool)1) ? (arr_8 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) (+(1941986286U)))))), (((((/* implicit */_Bool) -1521470452)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 - 3] [i_2 + 1] [i_2] [i_2]))) : ((-(-8526935838411615254LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = max((var_0), (((((/* implicit */_Bool) var_0)) ? ((+(var_0))) : (var_8))));
}
