/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186572
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
    var_20 -= ((/* implicit */signed char) (unsigned char)186);
    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)75)) << (((((/* implicit */int) var_7)) + (100)))))));
    var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)63))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */short) (unsigned char)191)))))) : (arr_1 [i_0])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) (signed char)53)) >= (((/* implicit */int) (unsigned char)179)))))));
        arr_3 [i_0] = min((((/* implicit */long long int) arr_0 [i_0])), ((-(9LL))));
        var_24 ^= ((/* implicit */unsigned char) (((-(arr_0 [i_0]))) != (max((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)40)) & (((/* implicit */int) (short)7286))))) || (((/* implicit */_Bool) var_17))));
            arr_9 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (~(arr_5 [i_1])));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_1] [(_Bool)1] = ((/* implicit */long long int) arr_11 [i_1]);
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) max((max((min((arr_11 [i_1]), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) max((var_18), (arr_16 [i_5] [(signed char)15])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [22])) ? (((/* implicit */int) arr_10 [i_4] [i_5])) : (((/* implicit */int) arr_10 [i_1] [i_3])))))));
                        arr_18 [i_4] [i_4] [i_4] [i_1] [(signed char)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_5])), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58117)))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_19))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) (-(min(((~(((/* implicit */int) (unsigned char)69)))), (arr_0 [i_3])))));
        }
        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            arr_23 [1] [i_1] = ((/* implicit */signed char) arr_14 [i_1] [i_6]);
            var_28 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_1] [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_6 + 4] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_6])) ? (((/* implicit */int) arr_6 [i_1] [(unsigned short)19] [(unsigned short)18])) : (((/* implicit */int) arr_6 [i_1] [i_6 - 2] [i_6]))))));
            arr_24 [i_1] = ((/* implicit */unsigned long long int) var_9);
        }
        var_29 = ((/* implicit */_Bool) var_6);
        var_30 |= ((/* implicit */int) ((unsigned long long int) arr_4 [i_1]));
    }
    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (max((var_3), (((/* implicit */unsigned long long int) (unsigned short)52390))))))) ? (((/* implicit */int) var_12)) : ((-(max((((/* implicit */int) var_12)), (var_13)))))));
}
