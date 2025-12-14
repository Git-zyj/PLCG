/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11343
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_11 &= ((/* implicit */unsigned char) min(((~((-(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) >= (((unsigned long long int) (short)4567)))))));
        var_12 += ((/* implicit */unsigned int) min((((/* implicit */int) (short)4551)), (((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) (short)4567)) - (4567)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-12))) >= (0LL)))), (max((((/* implicit */long long int) (_Bool)1)), (5LL))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) 152717214U);
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) max((((((unsigned long long int) arr_6 [3])) ^ (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)-4568)) - (0))))))));
        var_15 = ((/* implicit */unsigned short) (short)0);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_11 [i_2] = min((arr_7 [i_2]), (((/* implicit */unsigned int) ((arr_6 [i_3]) != (((/* implicit */long long int) arr_7 [i_2]))))));
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */short) ((long long int) (+(2088552361))));
            var_16 = ((/* implicit */signed char) ((unsigned char) ((long long int) arr_7 [i_3])));
        }
        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            var_17 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)186)) >= (((/* implicit */int) (unsigned short)24687))))), ((-(arr_14 [(short)14] [i_4])))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (short)1229))))), (min((((/* implicit */long long int) (unsigned char)13)), (-1697333196974525876LL)))))));
            var_18 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((((/* implicit */int) (short)-4568)) - (((/* implicit */int) (signed char)-77)))) >= (((/* implicit */int) arr_8 [i_4] [i_4] [i_4 + 1]))))), (((unsigned char) (unsigned short)11133))));
        }
    }
    var_19 += ((/* implicit */long long int) min((((/* implicit */int) min(((short)4567), ((short)4566)))), (((int) max((18446744073709551601ULL), (((/* implicit */unsigned long long int) var_7)))))));
    var_20 += ((/* implicit */int) (-(max((((/* implicit */long long int) var_1)), (var_5)))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)65523)), (0U)))) : (max((var_8), (((/* implicit */long long int) (unsigned short)27870)))))))));
}
