/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140040
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = var_4;
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) var_8);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [3LL] = ((/* implicit */unsigned char) 13792332324585994632ULL);
                                var_15 = ((((/* implicit */_Bool) ((-1463305459) ^ (((/* implicit */int) (unsigned short)14747))))) ? ((~(var_11))) : (((/* implicit */long long int) (~(-1632507725)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
                    arr_16 [i_0 - 1] [13U] [13U] [i_1] = ((/* implicit */_Bool) var_5);
                }
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [i_0]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))));
                    arr_19 [i_0] &= ((/* implicit */int) (~(1014817236U)));
                    var_18 = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_0 - 2] [i_0])), ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0]))))));
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                                var_21 *= ((/* implicit */signed char) arr_9 [i_7] [i_7] [i_5]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((((/* implicit */int) min((arr_17 [i_0] [i_1] [2LL]), (((/* implicit */short) arr_20 [i_0]))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (17440189232730364952ULL)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_1])))));
                }
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_34 [i_10] [i_0] [i_8] [i_0] [i_0 - 2] &= ((/* implicit */unsigned short) ((signed char) arr_13 [i_9] [i_9] [i_9] [i_8] [i_1] [i_0] [i_9]));
                                var_23 &= ((((/* implicit */_Bool) (signed char)-1)) ? (1610570201) : (((/* implicit */int) (signed char)-95)));
                                var_24 *= ((/* implicit */signed char) arr_17 [i_9] [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                    var_25 *= ((/* implicit */signed char) (unsigned short)26460);
                    arr_35 [i_0 + 2] [i_1] [i_1] = ((/* implicit */long long int) ((arr_30 [i_1] [i_1] [i_0 - 2] [i_8] [i_0 - 1] [i_8]) + (((/* implicit */int) ((short) var_0)))));
                    arr_36 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_1]))));
                    arr_37 [i_1] = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (arr_30 [i_1] [7LL] [i_1] [i_8] [i_8] [i_8]) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_10)));
                }
                var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
}
