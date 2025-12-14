/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119195
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
    var_10 = ((/* implicit */_Bool) min((var_10), ((_Bool)1)));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_1), (var_1))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) (unsigned short)14336)))))));
    var_12 = ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)15)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) (unsigned short)1024);
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (_Bool)1)) : (2147483642)));
        arr_3 [(short)6] |= ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
        var_15 = ((/* implicit */signed char) min((var_15), (var_2)));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_6 [(signed char)10] [(signed char)10] &= var_6;
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((arr_5 [i_1 - 1]) ? (-2147483643) : (((/* implicit */int) arr_5 [i_1 + 3])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1 + 3])) : (((/* implicit */int) arr_5 [i_1 + 3]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 1099511627520ULL)) ? (1099511627520ULL) : (((/* implicit */unsigned long long int) 1879048192))));
                    var_17 = ((/* implicit */unsigned long long int) max((max((-2147483643), (((/* implicit */int) arr_10 [i_1 + 3] [i_2] [(unsigned short)0])))), (((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_3])) ? (((/* implicit */int) arr_1 [i_3] [i_1 + 1])) : (-2147483643)))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_5)), (max((((((/* implicit */int) var_4)) + (((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_8))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)6)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) var_0)))))))), ((~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)122))))))));
    }
}
