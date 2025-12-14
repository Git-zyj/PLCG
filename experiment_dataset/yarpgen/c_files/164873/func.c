/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164873
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
    var_17 -= ((signed char) min(((+(-3725978440697057411LL))), (((/* implicit */long long int) var_10))));
    var_18 &= ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [2ULL])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [5ULL] [4U] [i_0]))))), (arr_0 [i_2])));
                                arr_12 [i_0] = (-(max((((/* implicit */unsigned long long int) ((_Bool) var_11))), (((((/* implicit */_Bool) 1279713819758536284ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (17167030253951015326ULL))))));
                            }
                        } 
                    } 
                } 
                var_20 -= ((/* implicit */unsigned long long int) min((((unsigned short) 1279713819758536282ULL)), (((/* implicit */unsigned short) max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [2ULL]))))));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) arr_3 [i_1]))))) == (min((17167030253951015331ULL), (((/* implicit */unsigned long long int) var_10))))))), (((((((/* implicit */int) arr_11 [i_0] [i_1] [21] [21] [i_6])) >> (((/* implicit */int) var_12)))) & (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_5 + 1] [i_6 - 2] [i_6 - 1] [(signed char)5])) + (2147483647))) >> (((var_4) - (4827443715959589678ULL)))))))));
                            arr_19 [i_1] [i_6] [i_5] [i_0] [i_0] [i_1] = (((!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [(signed char)7] [(signed char)4])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (max((17167030253951015332ULL), (((/* implicit */unsigned long long int) arr_1 [i_5 - 1])))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((min((((/* implicit */int) ((var_11) == (((/* implicit */int) arr_0 [i_0]))))), ((-(((/* implicit */int) arr_5 [i_0] [i_0])))))) + (2147483647))) >> (((arr_4 [i_0] [5U] [i_0]) - (2749052900U)))))) : (((/* implicit */unsigned int) ((((min((((/* implicit */int) ((var_11) == (((/* implicit */int) arr_0 [i_0]))))), ((-(((/* implicit */int) arr_5 [i_0] [i_0])))))) + (2147483647))) >> (((((arr_4 [i_0] [5U] [i_0]) - (2749052900U))) - (2880383992U))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned long long int) ((unsigned int) (+(var_11))));
}
