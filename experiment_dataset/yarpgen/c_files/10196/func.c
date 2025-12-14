/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10196
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 |= ((/* implicit */short) ((((/* implicit */int) ((3594733060023139345LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) - ((-(((/* implicit */int) max((var_5), (((/* implicit */short) var_9)))))))));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((((/* implicit */_Bool) ((int) arr_2 [i_0]))) || (((/* implicit */_Bool) ((long long int) var_5))))) ? (arr_5 [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((long long int) (short)0))))) ? (((((((/* implicit */int) arr_0 [i_2 + 1] [i_1])) + (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_1] [i_0])))) - (((/* implicit */int) ((unsigned char) (unsigned char)58))))) : (((((/* implicit */int) arr_3 [i_2 + 1] [i_0])) - (((/* implicit */int) arr_3 [7ULL] [i_2 - 1]))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) & (((/* implicit */int) var_2)))), (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_1]))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)192)), (6122582496572679561LL))))))))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (int i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            {
                var_16 += ((/* implicit */unsigned char) (((((-(((/* implicit */int) (unsigned char)241)))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_6] [i_6 - 1] [i_6 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 6283786952466867568LL))))))) - (8963)))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_17 = ((/* implicit */int) 7315066041156196651ULL);
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7315066041156196651ULL)) && (((/* implicit */_Bool) arr_14 [i_6 - 1]))))), (((((/* implicit */_Bool) arr_14 [i_6 - 1])) ? (arr_14 [i_6 + 1]) : (arr_14 [i_6 - 1])))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6 - 1])) ? (((/* implicit */int) arr_13 [i_6 - 2])) : (((/* implicit */int) arr_13 [i_6 + 1]))))) ? (min((4294967295U), (((/* implicit */unsigned int) arr_13 [i_6 - 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_6 - 2]), (arr_13 [i_6 + 1])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    var_20 = ((/* implicit */int) arr_12 [i_5]);
                    arr_21 [i_5] [i_6] [i_8] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) > (arr_20 [i_8] [i_8] [i_6 - 1] [i_5])))));
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3594733060023139341LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                }
            }
        } 
    } 
}
