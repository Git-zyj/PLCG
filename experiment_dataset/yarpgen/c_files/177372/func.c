/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177372
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
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_6))))) & ((-(var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = arr_3 [i_0] [i_2];
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])) : (arr_1 [7U])))) ? (((/* implicit */int) ((_Bool) 1062663702))) : (((/* implicit */int) ((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))))))) ? (max((min((arr_0 [i_2]), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_3 [i_0 - 1] [8U]))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_3 [i_0] [i_1])) >> (((/* implicit */int) arr_3 [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        var_20 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) 4764691908895847548LL)) : (arr_7 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3])))))));
        arr_9 [i_3] = ((/* implicit */int) min((9918285064515215061ULL), (((/* implicit */unsigned long long int) 25161352U))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_2) : (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33092)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (9918285064515215066ULL))))) < (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3045324712U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12))))))))));
    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((12961972758500973597ULL), (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)26471)) || ((_Bool)1)))) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_5)))))), ((~(-741710632)))));
}
