/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189122
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (var_0)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_14 = var_11;
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) var_11));
        arr_3 [i_0] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (534773760) : (var_10)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (2147483647) : (arr_7 [i_1] [i_1])))) : (min((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))));
        arr_9 [i_1] = ((/* implicit */int) ((unsigned char) max(((+(7680))), (((((/* implicit */_Bool) -210137032)) ? (2147483647) : (((/* implicit */int) var_4)))))));
        var_15 = ((/* implicit */_Bool) ((int) max((((/* implicit */int) arr_0 [i_1])), (var_5))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (signed char)102)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2])))))));
        arr_14 [i_2] = ((/* implicit */unsigned char) min((max((((arr_1 [i_2]) ^ (arr_1 [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_2])), (7LL)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_1 [i_2]))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((max((arr_16 [i_3]), (arr_19 [i_6] [i_5] [i_5] [i_3]))) * (((/* implicit */unsigned long long int) (-(var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_20 [i_5] [i_5]))))));
                            arr_24 [i_3] [i_5] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 7069383234439071597ULL))) ? (((((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (402653184U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48258))))) - (((unsigned int) var_10)))) : (((/* implicit */unsigned int) arr_21 [i_3] [i_5] [3ULL]))));
                            var_18 -= ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_1))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (arr_18 [i_6 - 1] [i_6 - 1])))) ? (((/* implicit */unsigned long long int) arr_22 [i_6])) : (var_3)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((arr_17 [i_3] [i_4] [i_4]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)78))))))))));
                var_21 = ((/* implicit */int) ((_Bool) var_5));
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_19 [i_3] [i_8] [i_7] [i_9]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-113)), ((unsigned char)78))))))) || (((/* implicit */_Bool) ((short) 2147483647))))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 7069383234439071610ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) 14564754306334129587ULL);
}
