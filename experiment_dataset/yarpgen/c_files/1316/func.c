/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1316
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */long long int) (unsigned char)48);
                            arr_10 [i_0] [11ULL] [i_1] [i_2] [i_2] [11ULL] = ((/* implicit */short) (-(((((/* implicit */_Bool) -2420130540391092435LL)) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (13U))) : (((unsigned int) arr_7 [i_0] [i_1 - 3] [i_0]))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [7] [i_1 + 2] [i_1]))))) ? (max((((/* implicit */unsigned int) var_15)), (arr_3 [i_1 - 1]))) : (((arr_3 [i_1 - 3]) + (536870911U)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) (-((-(((/* implicit */int) max(((unsigned short)31839), (arr_5 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) 4524967097043465176ULL)) ? (var_14) : (var_11))), (((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_6])))));
                                var_24 = ((/* implicit */signed char) (+(arr_24 [i_4 + 2] [i_5] [i_5] [i_4] [i_5])));
                                arr_28 [i_4] [i_4] [i_4] [i_7] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_14 [i_7] [17])))) ? (((unsigned int) arr_14 [i_8 + 3] [i_4 + 2])) : ((-(arr_14 [i_4 - 1] [i_5])))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (arr_27 [i_5] [(signed char)2] [i_5] [(signed char)2] [i_5] [(signed char)2] [i_4])))) ? ((-(((/* implicit */int) (unsigned char)213)))) : ((-(((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4 - 1] [i_5])) ? (((/* implicit */int) arr_25 [i_4 - 1] [i_5])) : (((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4 + 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (var_18)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)20)) >> (((((/* implicit */int) var_2)) - (84)))))) : (((281474976710655ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33703)))))))) ? ((~(var_11))) : (max((((((/* implicit */_Bool) var_11)) ? (3964904662U) : (var_14))), (((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))))));
    /* LoopNest 2 */
    for (signed char i_9 = 4; i_9 < 11; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            {
                var_26 ^= (((!(((/* implicit */_Bool) min((arr_13 [i_9] [i_9]), (((/* implicit */long long int) (unsigned char)197))))))) ? (min((((/* implicit */long long int) max((774314389U), (arr_8 [i_9] [i_9] [i_9] [i_10] [3LL])))), (((long long int) 1865364588U)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_27 [(_Bool)1] [i_9 - 4] [i_10] [12ULL] [6LL] [6LL] [20U])))) ? (max((var_5), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_43 [i_10] = ((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_9] [i_9]);
                            arr_44 [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_18 [i_9 - 1])) & (((/* implicit */int) arr_18 [i_9 - 3]))))));
                        }
                    } 
                } 
                arr_45 [i_10] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((short) var_9))) ? ((~(7822737642227206461ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_40 [i_10] [i_9])))))), (((/* implicit */unsigned long long int) 3353340315U))));
            }
        } 
    } 
}
