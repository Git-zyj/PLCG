/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100446
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((((/* implicit */short) arr_5 [i_1])), ((short)15393))))));
                var_10 += ((/* implicit */_Bool) ((min((18446744073709551610ULL), (((/* implicit */unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0])))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)9]))) / (arr_0 [i_0]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_1)))), (max((10951355576502741103ULL), (((/* implicit */unsigned long long int) arr_5 [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned short) (unsigned char)21);
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (short)-11091)) != (((/* implicit */int) (_Bool)1))))), (max((768414303), (-768414304)))))) ? (((/* implicit */long long int) ((min((var_1), (((/* implicit */unsigned int) arr_14 [i_2] [i_2])))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_9)) : (var_1)))))) : (((((/* implicit */_Bool) ((signed char) arr_16 [i_2] [i_2] [i_5 - 2] [i_4] [(short)6] [i_2]))) ? (((/* implicit */long long int) (-(var_4)))) : (((long long int) var_6))))));
                                arr_19 [i_6] [i_3] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5 - 1] [i_5 - 3] [i_6] [8ULL] [i_6])) ? (min((2604927934U), (((/* implicit */unsigned int) var_2)))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) arr_13 [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_6])))))) : ((((!(((/* implicit */_Bool) arr_1 [i_2] [i_2])))) ? (4075156914257094916ULL) : (((/* implicit */unsigned long long int) -768414303))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [(short)20] [i_3] [i_3] &= ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) 17590038560768ULL)) && (((/* implicit */_Bool) 18446726483670990831ULL)))))) || (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) || (((((/* implicit */_Bool) 17590038560785ULL)) || (((/* implicit */_Bool) var_2))))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_4 - 3] [i_4 - 3]))) ^ (var_3)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))) & (((((/* implicit */_Bool) 6370011112297457737LL)) ? (7833886575867370881ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */short) var_2)))))))) & (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))), (min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL))))))));
}
