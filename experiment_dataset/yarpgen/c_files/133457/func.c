/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133457
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_2 [i_0 + 2] [i_0]), (arr_2 [i_0 + 1] [i_0])))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) | (6518953682877025246ULL)))));
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned int) (~(arr_5 [i_1 + 1] [i_1 + 4])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1 + 1] [(unsigned char)20] [i_3] [(short)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_14 [14LL] [4] [i_2] [i_3] [i_4] [i_5] [6LL])) & (arr_10 [(unsigned short)20] [i_2] [i_1 + 4] [i_4])))) ? (arr_9 [(signed char)22]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4611686018427387903ULL))))));
                                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_3] [i_5])) ? (var_11) : (arr_12 [i_3] [(unsigned char)19] [i_4] [i_5])))));
                            }
                        } 
                    } 
                    arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(arr_1 [(signed char)4] [i_2])));
                    var_16 |= ((/* implicit */unsigned int) (unsigned char)104);
                    arr_19 [i_1] [8] [i_3] [(unsigned char)18] |= ((/* implicit */unsigned char) ((arr_7 [i_1 + 3]) | (((/* implicit */unsigned long long int) (~(arr_2 [i_1] [i_2]))))));
                }
            } 
        } 
        arr_20 [16LL] [i_1 + 3] &= ((/* implicit */unsigned int) ((arr_15 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [20ULL] [i_1] [i_1]) | (((/* implicit */long long int) ((617940789U) | (3253736947U))))));
        var_17 = ((arr_2 [i_1 + 4] [i_1 + 2]) | (arr_2 [i_1 + 4] [i_1]));
    }
    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 + 4] [i_6 + 3])))))) ? (0U) : (((arr_1 [i_6 + 2] [i_6]) | (arr_1 [i_6 + 3] [i_6])))));
        var_19 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned int) arr_23 [(unsigned char)0]))) ? (((unsigned long long int) arr_12 [2LL] [i_6] [i_6] [2LL])) : (((((/* implicit */_Bool) var_6)) ? (arr_7 [(unsigned char)0]) : (((/* implicit */unsigned long long int) arr_14 [i_6] [(unsigned char)6] [i_6] [i_6] [i_6 + 4] [i_6 - 1] [i_6]))))))));
        var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) 560772706U))))))) | (7U));
        var_21 -= ((/* implicit */unsigned long long int) max((max((arr_2 [17U] [i_6 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6 + 2] [i_6 + 1])) ? (0U) : (4294967295U)))))), (((/* implicit */long long int) max((14U), (((/* implicit */unsigned int) (unsigned char)15)))))));
    }
    var_22 *= max((((((/* implicit */_Bool) var_3)) ? ((-(var_12))) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_6)));
    var_23 = ((/* implicit */int) var_4);
}
