/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150138
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (-7359565709178088914LL) : (((/* implicit */long long int) 2147483647))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (((max((var_9), (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12))))))));
    var_19 |= ((/* implicit */unsigned int) (short)-4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (var_9)))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_13)) - (80)))))))) : (((/* implicit */unsigned long long int) var_7))));
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] = ((/* implicit */int) var_1);
                                arr_14 [i_0] [i_1] [4LL] [i_3] [1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((var_12), (((/* implicit */unsigned int) arr_10 [i_3] [i_1] [i_1 - 1] [(_Bool)1] [(unsigned char)6])))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_15) : (var_0))))))) << (((var_15) + (1212602045)))));
                                var_21 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_12 [i_0] [(unsigned short)8] [i_0] [(signed char)2] [i_0] [i_4])))) : (((var_10) ^ (var_6))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_11))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 6; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (unsigned short)16384);
                                arr_19 [8ULL] [8ULL] [i_2] [i_5] [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) : (427082613U))) > (((/* implicit */unsigned int) var_6))))) ^ (((/* implicit */int) arr_11 [i_2]))));
                                var_24 ^= max((((((/* implicit */long long int) 18)) + (arr_8 [i_0] [i_5] [i_2 - 1]))), (((/* implicit */long long int) (-(((/* implicit */int) var_13))))));
                                var_25 ^= ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 2; i_7 < 9; i_7 += 3) /* same iter space */
                {
                    var_26 ^= ((/* implicit */long long int) (short)4);
                    var_27 = ((/* implicit */unsigned short) var_10);
                    var_28 = ((/* implicit */short) (unsigned short)16366);
                }
                for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    var_29 = ((/* implicit */int) arr_21 [i_0] [i_1 - 1] [(short)2] [i_8]);
                    var_30 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_1 + 1]))) ^ (arr_21 [i_0] [(unsigned char)6] [i_8 + 1] [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [8ULL] [i_8])))))) | (max((((/* implicit */long long int) arr_20 [i_0] [i_1])), (-2867094518820566171LL)))));
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_1 [i_8])))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) ^ (9285627994650638733ULL)))))));
                }
            }
        } 
    } 
}
