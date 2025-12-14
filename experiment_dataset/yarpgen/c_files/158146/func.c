/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158146
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
    var_15 = ((/* implicit */long long int) (~(((((/* implicit */int) ((_Bool) var_10))) * (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1] [(signed char)7]))) + (2496541734624200104LL)))));
                        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2496541734624200132LL)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2 + 1])) : (((/* implicit */int) var_5)))) <= (((/* implicit */int) arr_3 [i_2 + 1] [i_1] [i_1]))));
                        var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) + (2147483647))) << ((((~(arr_0 [i_0]))) - (8283604167809468767LL)))));
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)105)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))) + (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_11))))))) ? ((+(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) var_2)) - (9577))))))) : (((((arr_8 [i_0] [i_0] [i_0 + 1] [i_0]) + (2147483647))) >> ((((~(((/* implicit */int) arr_2 [i_2])))) + (62885)))))));
                    var_18 = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) var_7)), (277112074699232128LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2] [i_0 + 1] [(signed char)9])) ? (((/* implicit */int) max((arr_7 [i_2] [i_1] [i_0] [i_0]), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_4 [(signed char)6] [i_1 + 1] [i_0] [i_0]))))))));
                    var_19 = ((/* implicit */int) (((+((+(var_6))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_12)) / (var_7))))))));
                    var_20 *= ((/* implicit */signed char) (~(((/* implicit */int) min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_1 - 2] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (long long int i_4 = 1; i_4 < 6; i_4 += 4) 
                {
                    var_21 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 3]))));
                    arr_16 [i_4] [i_1] [i_0 + 1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                    var_22 = ((/* implicit */long long int) (((-(1073741823))) ^ ((~(((/* implicit */int) arr_14 [(signed char)9] [i_1] [i_4]))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        arr_21 [i_0 + 1] [i_1] [i_4] [i_0 + 1] = ((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
                        var_23 ^= ((/* implicit */unsigned char) ((unsigned short) arr_20 [i_0] [i_0] [i_0 + 1] [i_5 - 2]));
                    }
                }
                /* vectorizable */
                for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                {
                    arr_24 [i_0] |= ((/* implicit */long long int) var_9);
                    var_24 = (-(((long long int) arr_14 [i_0] [i_1 + 3] [i_0])));
                }
                var_25 |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_1 + 4] [3LL] [i_1 - 2] [i_1] [i_0])) : (var_3)))) : (((1001613831U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1]))))))));
                var_26 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_1 + 3])) < (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_1 - 2])))));
            }
        } 
    } 
    var_27 |= ((/* implicit */long long int) var_12);
    var_28 += ((/* implicit */long long int) min((max(((-(((/* implicit */int) var_9)))), (((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_5)) - (37081))))))), (((/* implicit */int) var_5))));
}
