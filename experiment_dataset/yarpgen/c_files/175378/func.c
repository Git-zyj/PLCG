/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175378
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
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) -931328123)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (min((((/* implicit */unsigned int) var_7)), (var_1))) : (((/* implicit */unsigned int) (-(var_14)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29788))) : (var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)199)) ? (-986128451) : (((/* implicit */int) var_15)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((((/* implicit */int) ((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))))), (((((/* implicit */int) min(((signed char)25), ((signed char)(-127 - 1))))) + (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (-931328127)))))));
        var_19 = ((/* implicit */unsigned short) var_5);
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned int) var_12);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (var_14)));
    }
    for (signed char i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_10 [(short)13] = ((/* implicit */unsigned short) (signed char)56);
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (var_9))))))));
        arr_11 [12ULL] = ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_2 + 1] [i_2 + 2]))) ? (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 3])) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1])))) : ((+(((/* implicit */int) (unsigned short)37519)))));
    }
    for (signed char i_3 = 2; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((((/* implicit */_Bool) 4U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24184))) / (var_4)))))));
        var_25 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((short) arr_3 [i_3 + 3]))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) >> (((((/* implicit */int) var_5)) - (24984)))))) ? (((unsigned long long int) -1LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46213)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) || (((/* implicit */_Bool) (short)-29889))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((min((((/* implicit */long long int) ((signed char) arr_20 [i_3] [i_4] [i_4] [i_4]))), (-964901402384785204LL))), (((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)160))))) > (((((/* implicit */_Bool) (unsigned char)239)) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))))))));
                    }
                } 
            } 
        } 
    }
}
