/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184280
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_12))));
    var_20 = ((/* implicit */long long int) 2147483647);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1497241241)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((arr_1 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-1))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)10902))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_23 *= ((/* implicit */unsigned short) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)145)) >> (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))));
                        var_26 = ((/* implicit */int) (signed char)76);
                        var_27 -= ((/* implicit */short) ((((long long int) arr_11 [(unsigned short)0] [i_2] [i_2])) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95)))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_10 [1ULL] [7LL] [i_2] [i_2] [i_3] [i_2])));
                    }
                } 
            } 
        }
        for (long long int i_4 = 1; i_4 < 6; i_4 += 1) 
        {
            arr_14 [i_4] = ((/* implicit */long long int) ((unsigned long long int) arr_6 [i_0 - 1]));
            var_29 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26685))) | (arr_5 [i_4 + 1]))));
            arr_15 [i_0 - 1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)165)) >> (((arr_7 [i_0 + 1] [i_4] [i_4 + 3]) - (4722482075550300717ULL))))) >> (((((((/* implicit */int) (signed char)125)) - (((/* implicit */int) var_9)))) + (119)))));
            var_30 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4] [i_4]))));
        }
    }
}
