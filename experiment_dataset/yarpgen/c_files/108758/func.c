/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108758
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((min((((-7419998858499693814LL) % (-7419998858499693836LL))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_0))))), (((/* implicit */long long int) (unsigned short)18732))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) (unsigned short)0)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])));
        var_19 = ((((/* implicit */_Bool) 7419998858499693815LL)) ? (arr_4 [i_2]) : (2610205419399490182LL));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
            {
                for (signed char i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)32)) ? ((-9223372036854775807LL - 1LL)) : (-7704722289251681961LL)))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 2] [i_4] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) (unsigned char)125))));
                        arr_16 [i_5 - 2] [i_4 + 2] [(signed char)4] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 2] [i_4 + 2])) || (var_11)));
                        var_22 = ((/* implicit */long long int) var_8);
                        var_23 = ((/* implicit */signed char) arr_11 [i_5 + 1] [i_4] [i_4 - 1]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 4) 
    {
        var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6 + 2] [i_6 + 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) arr_17 [i_6 + 3] [i_6 + 1])) ? (arr_17 [i_6 + 3] [i_6 - 1]) : (arr_17 [i_6 + 2] [i_6 - 1])))));
        arr_19 [i_6] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    var_25 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_0)))), (min((var_15), (((/* implicit */long long int) var_11)))))) == (var_1)));
}
