/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176963
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
    var_13 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) max(((unsigned short)50666), (((/* implicit */unsigned short) (_Bool)1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)50664))))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14869))) / (2184468813921457796LL)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (arr_3 [i_0] [i_0] [i_0]))))));
                    var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)14865))))), (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min(((_Bool)1), (arr_1 [i_0] [i_0])))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)50670))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14869))) & (0ULL)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) (unsigned short)50660)) / (((/* implicit */int) (unsigned short)41865))))));
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0])))) ? ((-(max((var_10), (514883620U))))) : (min((((/* implicit */unsigned int) ((-7471050779030905679LL) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((4294967278U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50670)))))))));
        var_18 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) var_2))), (((min((var_2), (((/* implicit */unsigned int) arr_8 [i_3] [i_3 - 1])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)50667))))))));
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3]))) | (arr_7 [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_1)) ? (-4486391630073921619LL) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) arr_2 [i_3])) : ((-((~(((/* implicit */int) (_Bool)1))))))));
    }
}
