/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151136
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1])))))))))));
                var_21 = ((/* implicit */signed char) (((~(18446744073709551615ULL))) << (((max((arr_2 [i_1] [i_0]), (((/* implicit */int) var_0)))) - (1491513552)))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((var_4) == (arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_2])))) : (max((min((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
                    var_23 = ((/* implicit */unsigned int) var_18);
                }
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) ((((5ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) -1320817846)) : (var_19)))))) / (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (((14ULL) ^ (((/* implicit */unsigned long long int) 37411187))))))) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */unsigned char) arr_3 [i_0]))))))))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_4]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (var_5)));
                    arr_12 [i_4] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1]))))) < (max((var_11), (((/* implicit */unsigned long long int) arr_9 [i_0]))))));
                }
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    var_27 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_5 + 2])) ? (((/* implicit */int) var_13)) : (var_9)))));
                    arr_16 [i_1] [i_0] = ((signed char) ((((/* implicit */_Bool) -1093226027588161147LL)) ? (((/* implicit */unsigned long long int) 1568073843U)) : (18446744073709551615ULL)));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) arr_9 [i_5 + 1])))) > ((~(((/* implicit */int) arr_9 [i_1]))))));
                        var_29 = ((/* implicit */_Bool) ((18446744073709551605ULL) << (((/* implicit */int) arr_0 [i_5]))));
                        var_30 = (((((_Bool)1) ? (1ULL) : (((unsigned long long int) arr_9 [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) var_2)))))));
                        var_31 = ((/* implicit */short) var_10);
                        var_32 = ((/* implicit */unsigned long long int) var_19);
                    }
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(997773260)))))) ? (((((/* implicit */int) ((signed char) 5945114910990032113LL))) & ((-(((/* implicit */int) (signed char)61)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
    var_34 = ((/* implicit */int) var_10);
}
