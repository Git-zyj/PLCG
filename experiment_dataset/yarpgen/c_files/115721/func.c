/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115721
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
    var_11 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((signed char) 8191))) ? (((/* implicit */unsigned long long int) var_5)) : ((~(15237551918036415266ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) 15237551918036415266ULL);
                var_13 ^= ((/* implicit */long long int) (+(3209192155673136350ULL)));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1028528091)) ? (arr_4 [i_1] [i_2]) : (((/* implicit */long long int) arr_5 [(unsigned short)3] [(unsigned char)5] [i_1] [i_2])))) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [(signed char)7]))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15237551918036415266ULL)) ? (var_9) : (9223372036854775801LL)))) ? (15237551918036415248ULL) : (15237551918036415245ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_4]))));
                                arr_11 [(short)2] [i_4] = ((/* implicit */unsigned short) ((signed char) var_6));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) max((1726057674), (((/* implicit */int) arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [(short)5]))) == (arr_6 [i_1] [i_2] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)31662))) - (1073741823LL))))))));
                        var_18 = ((/* implicit */signed char) (-(arr_6 [(unsigned short)11] [i_1] [i_2])));
                    }
                    var_19 = (+(((2147483647) << (((((arr_5 [i_0] [(signed char)2] [i_0] [i_0]) + (2147476196))) - (28))))));
                }
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_23 [i_8] [2ULL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_5 [(short)1] [i_6] [i_7] [i_8]) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))) < (15237551918036415273ULL))))))), (((max((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_6] [i_7])), (var_1))) % (((((/* implicit */unsigned long long int) -1174125255024274858LL)) / (3209192155673136368ULL)))))));
                                arr_24 [i_8] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_7)) - (2147483647))));
                                var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_6] [i_7])) << (((((/* implicit */int) arr_15 [(unsigned short)12] [i_6] [i_6] [6LL])) - (26450)))))) == (((long long int) arr_15 [(signed char)6] [i_1] [(signed char)6] [i_8]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) var_9))), (max((((/* implicit */unsigned long long int) ((signed char) 16799718902540497167ULL))), (max((((/* implicit */unsigned long long int) -176674935587561312LL)), (var_6)))))));
    var_23 = ((/* implicit */signed char) var_6);
}
