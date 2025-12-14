/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115520
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) min((((/* implicit */short) arr_1 [i_2])), (((short) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [14U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_4] [i_2] [5LL])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_6 [1ULL] [i_2] [i_4]) : (arr_6 [i_0] [i_1 - 3] [i_0])))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 - 4] [i_1 - 1] [i_3 + 1] [i_1 + 2])) ? (((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1] [i_1 - 4] [i_3 + 3] [i_3])) : (arr_8 [i_0] [i_1] [i_1] [i_3 + 1])))), (max((4465045590988944289LL), (((/* implicit */long long int) arr_8 [i_0] [i_1 - 4] [i_2] [i_3 + 3]))))));
                            arr_15 [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)2)), (6864949966001651933ULL)));
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1] [i_1] [i_3 + 3] [i_4])) || (((/* implicit */_Bool) 4465045590988944295LL)))) ? (((unsigned long long int) 11581794107707899681ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65524)) && (((/* implicit */_Bool) arr_10 [i_1 - 4] [i_1] [i_2] [i_3 + 2] [i_2]))))))));
                            var_10 = ((/* implicit */signed char) min((6864949966001651935ULL), (((/* implicit */unsigned long long int) (signed char)46))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [i_5 - 1] [i_0]))) : (var_3)));
            var_11 = ((((/* implicit */_Bool) 6864949966001651933ULL)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_11 [i_0] [i_5] [i_5 + 2])) : (((/* implicit */int) arr_11 [i_0] [i_5] [i_5 - 1])))) : ((+((((_Bool)1) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_5)))))));
        }
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_24 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4465045590988944309LL)) || (((/* implicit */_Bool) 4465045590988944309LL))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_12 = arr_4 [i_0] [i_6] [i_6];
                var_13 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_8))) >> (((((((/* implicit */_Bool) (short)-11022)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) - (98)))));
            }
        }
        var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))), (arr_17 [i_0] [i_0] [i_0])));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((long long int) (!(((6864949966001651924ULL) >= (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0]))))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8] [i_8]))) & (max((((/* implicit */long long int) (unsigned short)24487)), (-4465045590988944309LL)))))) || (((/* implicit */_Bool) 14ULL))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (unsigned short i_10 = 3; i_10 < 16; i_10 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)65524)))));
                    arr_37 [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10 - 1] [i_9] [i_10 + 1] [i_8])) ? (arr_27 [i_8]) : (((/* implicit */int) max(((short)-8926), (arr_35 [i_8] [i_9] [i_8] [i_8]))))))) ? (min((995732054U), (((/* implicit */unsigned int) arr_35 [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_8])))) : (((3299235245U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [i_10 + 1])))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) (unsigned char)41);
    var_18 = ((/* implicit */signed char) max((6864949966001651933ULL), (((/* implicit */unsigned long long int) (-(var_6))))));
}
