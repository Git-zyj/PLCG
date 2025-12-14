/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124464
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) ((var_13) > (((/* implicit */long long int) arr_1 [6LL]))))) * (((/* implicit */int) ((arr_1 [(short)4]) >= (arr_1 [(unsigned char)2]))))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_17 = ((/* implicit */_Bool) var_9);
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)8])))))) : ((((_Bool)1) ? (arr_1 [4]) : (3186975163U))))) > (((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */int) arr_3 [4LL] [i_0]))))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned short) ((2959347606U) - (2959347622U)));
            arr_10 [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7)))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (arr_7 [i_0]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_0]))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_3]))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) arr_3 [i_0] [i_3]))));
        }
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_4])))), (((((/* implicit */_Bool) var_8)) ? (arr_13 [i_4]) : (((/* implicit */int) var_12)))))) * (((/* implicit */int) ((unsigned char) max((var_7), (((/* implicit */unsigned char) arr_11 [i_4] [i_4]))))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned char)222))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) arr_6 [i_5] [i_5] [0]);
        var_24 *= ((/* implicit */int) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_5]))))), (max((((/* implicit */long long int) var_9)), (var_6)))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = var_9;
        var_25 -= ((/* implicit */short) ((((((/* implicit */_Bool) 2959347610U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59425)) || (((/* implicit */_Bool) var_4)))))) : (1335619673U))) | (min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)234))))), (1335619681U)))));
        var_26 += ((/* implicit */unsigned char) ((unsigned int) (signed char)-71));
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
    {
        for (short i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            {
                var_27 = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_26 [i_7 - 2]))))), (arr_26 [i_7 - 2])));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_3))));
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_27 [i_7])) >= (((/* implicit */int) (unsigned short)27386)))))))) || (((/* implicit */_Bool) min((arr_27 [i_7 - 1]), (arr_27 [i_7 - 1])))))))));
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 2469993631U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((arr_27 [(unsigned short)8]), (((/* implicit */short) arr_28 [i_7] [8ULL]))))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_3)))))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_8);
    var_32 ^= ((/* implicit */unsigned int) var_2);
}
