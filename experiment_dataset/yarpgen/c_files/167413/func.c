/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167413
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)12788)) << (((var_13) - (17972936424498858562ULL)))))), (min((((/* implicit */unsigned int) (short)-1)), (var_7)))))) <= (min((((13555699022408126557ULL) & (((/* implicit */unsigned long long int) 4239871750U)))), (min((((/* implicit */unsigned long long int) 984304043U)), (2097151ULL))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) min((var_3), (arr_3 [i_1] [i_1]))))) >> (min((((4294967280U) ^ (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_2)))))))));
                    var_19 = ((/* implicit */short) min((((unsigned int) ((unsigned int) arr_6 [i_1]))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1 - 1] [i_0])) || (((/* implicit */_Bool) (short)10288)))), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) (short)-4037)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
    {
        arr_14 [i_3 - 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((7U), (arr_5 [i_3] [i_3] [i_3 - 1]))) > (min((3458933042U), (((/* implicit */unsigned int) var_12))))))), (((((/* implicit */unsigned long long int) ((4002512587U) * (var_0)))) | (((((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1])) * (var_13)))))));
        arr_15 [i_3] = ((min((((unsigned int) 8191U)), (((unsigned int) 1ULL)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) var_0)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_3 - 1]) <= (arr_1 [i_3 - 1] [i_3 + 1]))))))))));
        var_20 *= ((/* implicit */short) ((unsigned int) ((unsigned int) min((3976245141U), (arr_0 [i_3])))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */short) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))), (((short) 11697751093490563929ULL))))), (((min((16271166435310770727ULL), (((/* implicit */unsigned long long int) arr_2 [i_3 - 1] [i_3 - 1])))) - (min((arr_9 [i_3] [i_3] [i_3] [i_3]), (var_14))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        arr_24 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) arr_7 [i_3] [i_5] [i_5]))))) + (((/* implicit */int) ((short) (short)-1)))))), (((2197817758U) * (2775932222U)))));
                        var_22 += ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-13)) % (((/* implicit */int) (short)-32753))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_7)))));
                        arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_5] [i_3 - 1] = ((((/* implicit */unsigned long long int) min((((var_9) * (var_15))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_3] [i_3])) >= (var_14))))))) | (min((((unsigned long long int) 9961772691888935282ULL)), (((/* implicit */unsigned long long int) min((4294967295U), (4294967288U)))))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        arr_29 [i_3] [i_3] [i_3 - 1] [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) ((392698444U) <= (2135399046U)))) * (((/* implicit */int) min(((short)(-32767 - 1)), ((short)-24451)))))));
                        var_23 = ((/* implicit */short) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_5] [i_3 - 1])) || (((/* implicit */_Bool) 4294967282U))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (min((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_3] [i_3 + 1] [i_3] [i_3])) <= (((/* implicit */int) var_11))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32750))) ^ (arr_7 [i_3 + 1] [i_3] [i_3]))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_12))))), (min((((/* implicit */unsigned int) arr_27 [i_3] [i_3 - 2])), (var_15)))))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) min((((min((2771678970U), (arr_3 [i_3] [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))), (min((min((((/* implicit */unsigned int) var_2)), (arr_0 [i_3]))), (min((4294967273U), (var_7)))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */unsigned int) var_12)))) << (((/* implicit */int) ((arr_7 [i_5] [i_3] [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) != (min((min((8889565575667209459ULL), (((/* implicit */unsigned long long int) 4064525926U)))), (((/* implicit */unsigned long long int) ((short) var_13))))))))));
                }
            } 
        } 
    }
    var_27 = ((min((((/* implicit */unsigned int) ((short) var_11))), (min((var_8), (((/* implicit */unsigned int) (short)(-32767 - 1))))))) >> (min((((unsigned int) var_7)), (min((var_5), (5U))))));
    var_28 = ((/* implicit */unsigned int) ((unsigned long long int) min((((var_9) - (var_0))), (((1187376321U) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    var_29 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) | (((/* implicit */int) (short)-12026)))), (((/* implicit */int) ((short) var_2)))))), (((((var_3) / (2570936364U))) >> (((((unsigned int) var_0)) - (83134482U)))))));
    var_30 ^= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), (var_1))))) + (min((16870080943823490679ULL), (6915795776901232533ULL))))), (((((1ULL) & (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_1)))))))));
}
