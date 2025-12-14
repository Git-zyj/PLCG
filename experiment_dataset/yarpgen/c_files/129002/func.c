/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129002
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((unsigned char) (signed char)127)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) 1808187358173998691LL);
                                arr_12 [i_1] [i_3] [i_2] [i_2] [0ULL] [8LL] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 8409461524939849094LL)) ? (((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_8 [(signed char)6] [i_1] [(signed char)6] [i_1] [i_4 - 1])) >> (((/* implicit */int) arr_6 [i_4] [i_3] [i_1] [i_0])))))) >> (((1244685298U) - (1244685297U)))));
                                arr_13 [i_4] [i_4 + 1] [i_1] [i_4] [i_4] [(unsigned short)17] = arr_11 [i_0] [i_1] [i_2] [i_0] [i_1] [8] [i_4];
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        var_13 = max((((/* implicit */long long int) (unsigned char)4)), (arr_1 [i_0 - 2]));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31131)) >> (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_5 = 2; i_5 < 19; i_5 += 3) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) (unsigned short)34401)) ? (min((var_9), (((/* implicit */long long int) arr_15 [i_5] [i_5 - 1])))) : (((/* implicit */long long int) ((int) (_Bool)1))));
        arr_18 [16ULL] [16ULL] |= ((/* implicit */_Bool) var_4);
    }
    for (signed char i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)50)) ? (((((/* implicit */int) var_3)) >> (((3050282009U) - (3050281983U))))) : (((/* implicit */int) (short)-32766)))) >> ((((((((+(((/* implicit */int) arr_10 [i_6] [(unsigned char)2] [i_6 - 2] [(unsigned char)2])))) + (2147483647))) >> ((((-(((/* implicit */int) arr_11 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [2] [i_6] [i_6])))) + (43336))))) - (16777192)))));
        arr_23 [i_6 - 1] = ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_2)))))))));
    }
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            {
                arr_29 [(short)6] &= ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) -19))))) % (((/* implicit */int) (_Bool)1))))));
                arr_30 [i_7] [i_8] [i_8] = ((/* implicit */short) (-(-19)));
                arr_31 [i_7] [(short)10] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (arr_26 [i_8] [i_7]) : (arr_26 [i_7] [i_7]))) >> (((arr_26 [i_7] [i_8]) - (1907704402)))));
                arr_32 [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | ((~(((/* implicit */int) arr_8 [i_7] [i_8] [i_8] [i_7] [i_7]))))));
            }
        } 
    } 
}
