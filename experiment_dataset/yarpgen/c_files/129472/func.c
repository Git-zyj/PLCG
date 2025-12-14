/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129472
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
    var_16 = ((/* implicit */short) ((min((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (3644486269U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (((260601101U) << (((((/* implicit */int) (unsigned short)49152)) - (49127)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_0 - 1] [i_0] [i_1] [3U] = ((/* implicit */unsigned char) ((var_1) ? ((((((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((/* implicit */long long int) min((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [(short)16] [i_0] [6ULL]))))));
                    var_17 = ((/* implicit */short) arr_3 [i_1]);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_2 [i_0]))) % (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [(short)9])))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (min((arr_2 [i_0]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (_Bool)0)) / ((-(((/* implicit */int) (_Bool)1))))))));
                    arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (3965634237U)))) & (((((((/* implicit */int) (unsigned short)2151)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [5U])), (arr_6 [i_0])))) : (17645547864070771628ULL)))));
                }
                for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((1539398435) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)85))))) : (((6583685978325213076LL) - (((/* implicit */long long int) 3644486284U)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29669))) - (min((((/* implicit */unsigned int) (_Bool)1)), (0U))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 511U)) != ((~(((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        arr_19 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) 102326996)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)27)))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((((unsigned int) (~(arr_2 [i_1])))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) -1539398436))))) ? (((((/* implicit */_Bool) 1536801050U)) ? (((/* implicit */unsigned long long int) arr_17 [i_1] [i_4] [i_1] [i_1])) : (arr_10 [i_1] [i_4] [7]))) : (arr_10 [i_0] [i_1] [i_4 + 2]))) - (2108768811ULL)))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) * (arr_2 [i_0])))))) ? (((/* implicit */unsigned int) (~(max((-410230532), (2147483637)))))) : (((((/* implicit */_Bool) (unsigned short)55632)) ? (1476999964U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                    }
                    arr_20 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1531362823U)) ? (var_0) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))))))), (((/* implicit */unsigned int) var_5))));
                    arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1456985011))));
                    var_22 = ((/* implicit */unsigned int) var_2);
                }
                arr_22 [i_0] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) max((var_3), (var_1)))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) ? (((((/* implicit */_Bool) -1690368731)) ? (var_12) : (47268741U))) : (max((3746785430U), (2002569438U)))))) ? (((min((var_6), (((/* implicit */long long int) var_4)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) <= (((/* implicit */int) (unsigned char)235)))))))) : (((/* implicit */long long int) max((max((((/* implicit */unsigned int) -1808795270)), (4095U))), (((/* implicit */unsigned int) (~(1456985024)))))))));
    var_24 = ((/* implicit */signed char) (unsigned short)60484);
}
