/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158808
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) var_9)) : (5100440969388696596LL))))))) - ((-(var_10)))));
                var_18 = max(((+(min((((/* implicit */long long int) var_4)), (-3255978591501256155LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_4)))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) (((~(arr_2 [i_0]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    var_19 ^= ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_6)))), (3255978591501256155LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4]))))) : (((((/* implicit */int) var_15)) + ((+(((/* implicit */int) arr_7 [i_4])))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((((unsigned char) (~(2164663517184ULL)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)144)) && (((/* implicit */_Bool) 4294967295U)))))));
                                var_21 = ((/* implicit */_Bool) (+(((((((/* implicit */int) var_14)) & (arr_6 [i_2]))) >> (((((/* implicit */int) var_13)) / (var_9)))))));
                                arr_17 [i_6] [i_4] [i_4] [i_4] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) min((min((var_0), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (+(var_9))))));
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_4] [i_6] = ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((min((3255978591501256148LL), (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_8] [(signed char)3] [i_3] [i_3] [i_2] [i_2])), (arr_20 [i_2] [i_2]))))));
                        var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) var_1))))));
                    }
                    var_25 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_16 [(_Bool)1] [i_2] [i_2] [(short)0] [i_7])), ((~(var_0)))));
                    var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) | (var_7))) <= (min((((/* implicit */long long int) var_16)), (var_7)))))), (var_8)));
                    arr_24 [i_2] [(short)3] [8ULL] [i_2] = ((/* implicit */signed char) -3255978591501256151LL);
                    arr_25 [i_2] [i_3] [i_7] = ((/* implicit */unsigned char) ((unsigned int) (+(min((((/* implicit */long long int) arr_23 [i_7] [i_3] [14])), (var_7))))));
                }
                var_27 = ((/* implicit */unsigned int) max((max(((((_Bool)1) ? (1071644672) : (((/* implicit */int) (unsigned short)7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))))))), (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2]))));
                var_28 ^= ((/* implicit */unsigned long long int) max((var_10), ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+(((((/* implicit */_Bool) max(((short)31601), (((/* implicit */short) var_2))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (_Bool)1)))))))))));
}
