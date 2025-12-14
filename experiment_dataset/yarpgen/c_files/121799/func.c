/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121799
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_17 |= max((((/* implicit */int) ((((/* implicit */int) arr_5 [4U] [i_1 - 2] [i_1 - 2])) <= (((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1] [i_1 + 2])) ? (-1201322928) : (((/* implicit */int) arr_5 [(unsigned short)1] [i_1 - 1] [i_1 + 2])))));
                    arr_6 [7ULL] [i_1] [i_1] [i_2] = ((/* implicit */short) (~(((arr_0 [i_1 - 1]) ^ (arr_0 [i_1 - 1])))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)9858)), (0U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16756))) * (var_14))))), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (arr_1 [i_1]) : (((/* implicit */long long int) 1201322917)))))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_19 += ((/* implicit */_Bool) ((unsigned short) arr_9 [i_1 + 1]));
                        var_20 = ((/* implicit */int) (!(arr_2 [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_15 [(unsigned char)8] [i_1] [i_1] [i_1] [i_1]) ? (1201322928) : (var_7)))) ? (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_3 - 1] [(_Bool)1] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2]))))));
                                var_22 ^= ((/* implicit */unsigned char) arr_8 [9U] [9U] [8ULL] [9U]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_13 [(unsigned char)7] [(unsigned char)7] [i_3])), (var_7)))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [4ULL] [i_1] [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) -1201322948)) : (4292146911U)))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (max((-1201322938), (((/* implicit */int) arr_16 [(unsigned short)0] [i_3])))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) arr_10 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_3] [i_3 - 1] [i_3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 2] [i_3 - 1] [i_3 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1]))) : (arr_3 [i_3 - 1])))));
                }
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 7; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 6; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_9] [9U] [i_0])))))));
                                var_26 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)13988)) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) (short)-17324)))))) + (((/* implicit */int) arr_15 [i_0] [i_0] [i_7] [i_7] [i_9]))));
                                var_27 = ((/* implicit */_Bool) min((var_27), (arr_15 [i_0] [i_8 - 4] [i_7] [i_0] [i_0])));
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_11 [i_9 + 2] [i_9 + 2] [(short)4] [i_9 + 2] [i_9 + 2] [i_9 - 1]))))) > (((/* implicit */int) var_5)))))));
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27316)) && (((/* implicit */_Bool) 1201322914))))) % (((/* implicit */int) ((unsigned char) (signed char)6)))))) ? (0ULL) : (((((/* implicit */_Bool) max((arr_4 [i_8]), (((/* implicit */unsigned int) var_9))))) ? (arr_19 [i_0] [i_1] [i_0] [i_8] [(signed char)8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_8] [i_8]))))))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */signed char) min((2147483617), (-1201322928)));
            }
        } 
    } 
    var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1201322932), (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (short)-10758)) : (1201322917))) : (((/* implicit */int) var_2)))))));
}
