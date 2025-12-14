/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124532
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_0 [i_4 + 1]))) ? (((/* implicit */int) ((arr_0 [i_4 - 1]) || (arr_0 [i_4 - 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) arr_0 [i_4 + 1]))))));
                                var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_1] [i_0 - 1])))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_4 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4 + 1] [i_4 - 1])) && (((/* implicit */_Bool) 221547211))))))));
                                arr_13 [16LL] [i_4] [i_2] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_0])) ? (735531868377887960LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55441)))))) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) arr_1 [(unsigned short)5]))));
                                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_1] [i_2] [(_Bool)1] [i_4])))))));
                                var_16 -= ((/* implicit */short) (+(7607379790855339935LL)));
                            }
                        } 
                    } 
                } 
                var_17 &= ((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) arr_1 [21ULL])) ? (arr_5 [i_1] [i_0] [i_0 - 1]) : (((/* implicit */long long int) var_12))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(max((max((((/* implicit */long long int) var_0)), (arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [3]))), (((/* implicit */long long int) ((((/* implicit */int) (short)-12400)) - (((/* implicit */int) arr_2 [i_0]))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (8799220833124126012LL)))) >> (min((((/* implicit */unsigned long long int) var_10)), (var_2)))))) ? (max(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) var_9)) % (((/* implicit */int) var_10)))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (max((((/* implicit */int) var_10)), (var_12)))))));
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_11))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((4039921508U), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) var_0))))))))));
}
