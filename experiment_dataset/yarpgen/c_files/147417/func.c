/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147417
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
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(min((2918188555U), (((/* implicit */unsigned int) var_10)))))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (var_14)));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36327)) != ((-(((/* implicit */int) ((unsigned short) 3165437303U))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_11 [6ULL] [i_1])) ? ((~(14673451492541230949ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [20U] [20U] [i_5] [i_6]))) : (arr_5 [(_Bool)1] [(unsigned short)13] [i_2] [i_5])))))) : ((~(((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60119))) : (var_5))))));
                                var_25 -= ((/* implicit */unsigned long long int) var_14);
                                var_26 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_15))))), (min((arr_18 [i_0]), (((/* implicit */unsigned int) 1172999093)))));
                                var_27 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_16 [i_5 + 1] [(signed char)2] [i_5 + 1] [i_6])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1] [(unsigned short)18] [i_6])) - (45031))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) ((unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_4 [(unsigned short)22] [(unsigned short)22] [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) % (11569345925708897678ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (4086760068U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_7 + 1]) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7 - 1] [i_8] [i_7 - 1])) && (((/* implicit */_Bool) arr_1 [i_7 + 3]))))))));
                                var_29 = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((/* implicit */_Bool) min((arr_6 [i_7 - 1] [i_7 + 3] [i_7] [i_7]), (((((/* implicit */unsigned int) var_6)) & (arr_5 [i_1] [i_1] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_7 - 1]))))) : (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned long long int) var_13))))))));
                                arr_29 [i_0] |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
