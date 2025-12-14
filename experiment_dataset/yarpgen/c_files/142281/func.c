/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142281
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
    var_11 = ((/* implicit */unsigned long long int) ((var_8) <= (((/* implicit */int) ((((((/* implicit */_Bool) -32LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (11901084901855177179ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)113)) - (85))))) ^ (((/* implicit */int) (unsigned short)1994))))) != (((16289565245906543818ULL) / ((~(arr_0 [i_0] [11]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) min((arr_7 [i_1] [i_2] [i_2 + 2] [i_2 + 3]), (((/* implicit */unsigned long long int) -1757763298))))) ? (arr_7 [i_0] [i_2] [i_2] [i_2 - 1]) : (min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_1] [i_2 + 1] [i_2] [i_2 - 1]))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))) ? (((((/* implicit */int) (signed char)87)) << (((6586175622115768696LL) - (6586175622115768681LL))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)251)), ((unsigned short)31)))))) >> (((((/* implicit */int) (unsigned short)1964)) - (1964)))));
                        var_14 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -2147483644)) : (arr_2 [i_2])))) % (((((/* implicit */_Bool) 2147483643)) ? (arr_7 [i_2] [i_2] [i_2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_6 [i_0] [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))))));
                    }
                }
            } 
        } 
        var_15 *= ((/* implicit */_Bool) (unsigned char)71);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 = ((/* implicit */int) arr_7 [i_4] [4] [i_4] [i_4]);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_5 [i_4] [i_4]), (arr_5 [i_4] [i_4])))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 2305547354U)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (arr_12 [i_4]))))))));
    }
}
