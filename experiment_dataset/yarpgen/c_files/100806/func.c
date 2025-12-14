/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100806
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_1 [i_0] [i_1])))) <= (((/* implicit */int) var_1))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        var_16 = min((var_13), (((/* implicit */unsigned int) ((unsigned short) 0U))));
                        arr_12 [0ULL] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) (_Bool)1))))) ? (min((13015348036477906536ULL), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_12))))));
                        var_17 |= ((/* implicit */unsigned char) (((-(max((1395423819789673219ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) * (((/* implicit */unsigned long long int) ((((unsigned int) var_4)) / (((unsigned int) var_12)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) <= (0)))) : (((/* implicit */int) (signed char)96)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0]))))))))));
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((17051320253919878397ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) / (((unsigned long long int) var_5))))));
                            arr_16 [i_2] [i_2] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned int) 2147460394);
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_1] [10] [10] &= ((/* implicit */int) arr_2 [i_0]);
                        var_19 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) <= (arr_17 [i_5 + 1] [17ULL] [i_2] [2LL] [2LL]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_2);
                                var_21 |= ((/* implicit */unsigned char) var_4);
                                var_22 = min((max((var_12), (((/* implicit */unsigned int) arr_14 [i_0] [i_7] [i_6] [i_2] [i_0] [i_1] [i_0])))), (((/* implicit */unsigned int) var_7)));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_0))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) ((23U) - (((/* implicit */unsigned int) arr_7 [i_0] [i_1]))))), (arr_10 [i_0] [i_1] [i_0] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32765)) + (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((var_13) - (48284135U)))))) : (var_5)))) ? (max((9595778930681897323ULL), (1073741822ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((16593970461646132738ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((var_10) - (1695226612)))))) == (((((/* implicit */_Bool) 2145386496)) ? (((/* implicit */unsigned long long int) 1873717604U)) : (17787743516340829515ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_9] [i_8])) ? (16593970461646132737ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10]))))))))) : (((/* implicit */int) arr_33 [i_8])))))));
                    var_27 &= ((/* implicit */_Bool) ((short) var_7));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_9])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_10 + 1]))))), (max((arr_34 [21LL] [i_10] [i_10]), (((/* implicit */unsigned int) var_6))))))) : (((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13)))) : (((var_8) + (arr_35 [(_Bool)1] [(_Bool)1] [(_Bool)1] [5U])))))));
                }
            } 
        } 
    } 
}
