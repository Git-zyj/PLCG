/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169359
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((var_0) >= (291252915))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))))) ^ (var_16))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (~(2339219755U)))), (max((255ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [(signed char)10] [(signed char)10])), ((unsigned char)0)))))))));
        var_21 *= ((/* implicit */unsigned int) var_4);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_15))));
    }
    for (unsigned char i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        arr_6 [i_1 + 2] [3LL] = ((/* implicit */_Bool) var_2);
        var_23 = ((/* implicit */unsigned long long int) 8589934591LL);
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            var_24 = max((((arr_10 [i_3 + 2]) & (arr_10 [i_3 - 1]))), (((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1] [i_3 + 2]))));
            var_25 *= ((/* implicit */unsigned int) var_19);
        }
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), ((((_Bool)1) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31866))))) : (var_7))) : (8267781556131896570LL)))));
            arr_17 [i_2] [i_4 + 4] [i_4] = arr_15 [i_2] [i_4 + 3] [i_4];
            arr_18 [i_2] = ((/* implicit */long long int) arr_15 [i_4 + 3] [i_4 + 4] [i_4 + 1]);
        }
        for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            arr_21 [i_5] [(_Bool)1] = ((/* implicit */short) ((((((arr_11 [9ULL] [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_17))))) : (var_3)));
            var_27 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_5 - 1] [8U]) : (arr_8 [i_5 - 2] [i_5]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_5 + 2] [i_2])) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)55229)) < (((/* implicit */int) (_Bool)1)))))))))));
        }
        var_28 = ((/* implicit */int) max((((/* implicit */long long int) ((((((arr_10 [i_2]) + (2147483647))) << (((((/* implicit */int) (short)31865)) - (31865))))) >> (((2000933453829845906LL) - (2000933453829845885LL)))))), (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [i_2])))), (arr_14 [i_2] [i_2])))));
    }
}
