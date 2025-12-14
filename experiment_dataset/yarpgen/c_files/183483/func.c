/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183483
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1266190660U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 -= arr_4 [i_1] [4ULL] [i_1];
            var_14 = ((/* implicit */unsigned char) var_1);
            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)41)))) - ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [5ULL] [i_0] [5ULL]))) >= (1266190664U))))))));
            arr_5 [i_0] [i_0] = (i_0 % 2 == 0) ? ((~(((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_0 [i_0])) + (88))))))) : ((~(((((/* implicit */int) var_9)) >> (((((((/* implicit */int) arr_0 [i_0])) + (88))) + (28)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0]))))) ? (((arr_13 [i_4] [i_0] [i_0] [3U]) * (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [1ULL] [i_0] [i_3])))))) ? (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)63)))))) : (((/* implicit */int) var_1))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_2] [i_3] [i_0])), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))) : ((+(var_4)))));
                            arr_16 [i_2] [i_0] |= ((/* implicit */unsigned char) arr_13 [i_2] [i_4] [(signed char)2] [i_5]);
                            var_18 = var_3;
                        }
                    } 
                } 
            } 
            var_19 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [(_Bool)1] [4ULL] [i_2])) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2])))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) >= (arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))))));
        }
        arr_17 [(unsigned short)10] |= ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) var_0)), (var_1))))));
        var_20 = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_0 [i_6]);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_6] [i_7] = ((/* implicit */unsigned short) (signed char)34);
                    arr_29 [9ULL] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (+(var_2)));
                    var_21 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
        var_22 = ((/* implicit */short) var_2);
        var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_6] [i_6])))), (((/* implicit */int) arr_14 [i_6] [i_6] [i_6]))));
    }
    var_24 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (-(var_6)))), (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((~(((/* implicit */int) var_9)))))))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3028776635U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) ((unsigned char) var_5))), ((((_Bool)0) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
