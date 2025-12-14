/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16894
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((long long int) (signed char)73)))) ? (-3415231925115615160LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-73)))));
    var_14 *= ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_1])))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1233507574583763545LL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-23657)), (5647346596507885522LL))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_13 [i_2] = (!(((/* implicit */_Bool) max((max((arr_4 [i_3] [i_3]), (9484923699847185924ULL))), (18446744073709551615ULL)))));
                    arr_14 [i_4] [i_2] = ((/* implicit */unsigned char) ((arr_2 [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */int) (unsigned short)21255)), (-1747242259))))) : (max((((/* implicit */unsigned long long int) 7849288407847695992LL)), (7748007735388980975ULL)))));
                    var_18 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (10123226171976048236ULL)))) ? (max((arr_0 [i_2 - 1]), (((/* implicit */unsigned int) arr_12 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_2 + 1] [i_2 - 1])))));
                    var_19 = (~(((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3463363164U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1288644177)))))));
                }
            } 
        } 
        var_20 -= (((!(((/* implicit */_Bool) min((10123226171976048230ULL), (((/* implicit */unsigned long long int) 389444855))))))) ? (((/* implicit */long long int) min((var_5), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : (((((/* implicit */_Bool) -389444856)) ? (((((/* implicit */_Bool) -5647346596507885523LL)) ? (-1233507574583763545LL) : (var_8))) : (arr_6 [i_2 + 1]))));
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-((-(866941229U)))))), (2305843009213693952ULL)));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */int) max((70368744177663LL), (((/* implicit */long long int) (unsigned char)255))));
        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (arr_15 [i_5])))));
        var_23 |= ((/* implicit */int) arr_0 [i_5]);
    }
}
