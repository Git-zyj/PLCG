/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188045
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
    var_12 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_10)), (0ULL))), ((~(min((0ULL), (4ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 += 18446744073709551608ULL;
                    arr_8 [i_1] [6ULL] [i_1] [i_1] = ((/* implicit */int) ((min((9223372036854775680ULL), (((/* implicit */unsigned long long int) (unsigned char)16)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))));
                    var_14 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                    arr_9 [i_1] [3ULL] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551605ULL)) && (((/* implicit */_Bool) 248ULL))))))) << (((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (arr_2 [i_0 - 1] [(signed char)1] [13ULL]))) - (18446744073709522665ULL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (18446744073709551605ULL))), (((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))) <= (min((((/* implicit */unsigned long long int) var_10)), (var_6))))))));
}
