/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130505
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))), (var_1)));
        arr_4 [i_0] [i_0] = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) < (-7964478388937239224LL)))));
    }
    for (short i_1 = 3; i_1 < 9; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned char)62)))))), (var_15)));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) var_14);
            arr_11 [i_1 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) (((~(arr_6 [i_1 - 2]))) <= (((/* implicit */long long int) min((var_13), (var_1))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = (i_1 % 2 == zero) ? ((((((-(arr_13 [i_2] [i_1] [8U]))) + (2147483647))) << ((((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_7)))))) - (76))))) : ((((((((-(arr_13 [i_2] [i_1] [8U]))) - (2147483647))) + (2147483647))) << ((((((((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_7)))))) - (76))) + (222))) - (22)))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_15))));
            }
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(17366613571529061114ULL)))))) ? (max((arr_14 [i_1 - 3]), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */int) (unsigned short)11888)) >> (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_1 + 1]))))))))));
        }
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            arr_20 [i_4] [i_4] [i_1 - 3] |= ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_4), (min(((_Bool)0), ((_Bool)1))))))));
            var_22 = ((/* implicit */unsigned char) var_4);
            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)198))));
        }
        for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_11)), ((~(arr_17 [i_1 - 1] [i_1] [i_1 - 1]))))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_0))));
            var_26 = ((/* implicit */long long int) max((var_26), ((+(((((/* implicit */_Bool) arr_5 [(unsigned char)6] [i_1 - 1])) ? (((/* implicit */long long int) var_13)) : (arr_5 [0U] [i_1 - 1])))))));
            arr_23 [i_1] [i_1] [i_5 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_21 [i_1 + 1] [8U] [i_5 - 1])))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned long long int) (~(arr_21 [i_1] [i_1 - 2] [i_5 + 1])))))));
        }
        arr_24 [i_1] = ((/* implicit */signed char) (((-(max((var_13), (((/* implicit */unsigned int) var_14)))))) < (((unsigned int) var_12))));
    }
    for (short i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
    {
        arr_28 [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(2696715705U)))) ? (arr_6 [i_6]) : (((var_17) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11861))))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_15 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) var_16))))) >= (min((arr_16 [4] [(short)2] [(short)2]), (((/* implicit */unsigned long long int) var_13))))))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_28 = ((/* implicit */long long int) (unsigned short)26259);
            var_29 = ((/* implicit */unsigned int) -1);
        }
        arr_32 [i_6] = ((/* implicit */signed char) var_7);
        arr_33 [i_6 - 3] = ((/* implicit */_Bool) var_12);
    }
    var_30 = ((/* implicit */short) var_3);
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_8))));
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((-1734206064) <= (((/* implicit */int) (_Bool)1)))))));
}
