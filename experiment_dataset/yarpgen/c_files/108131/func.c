/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108131
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
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = var_3;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)48))));
                        arr_13 [i_0] = ((/* implicit */unsigned int) (short)303);
                    }
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2785414981U)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (0U)))) ? ((-(((/* implicit */int) (short)21798)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)101)), ((short)-304)))))) : ((~((+(((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1] [i_2 - 1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6970)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [22LL])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 117440512U)) : (17135535702471828594ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3798497511U)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_1 + 2] [i_1] [i_1]), (((/* implicit */unsigned long long int) 0U))))) ? ((~(var_7))) : (((/* implicit */long long int) ((unsigned int) arr_6 [i_0]))))))));
                                arr_18 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_0])))) - ((-(((/* implicit */int) arr_3 [i_0]))))));
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)24))));
                                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_5])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) arr_6 [i_5]))));
                                var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(0U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), ((~(18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
