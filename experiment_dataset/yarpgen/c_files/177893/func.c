/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177893
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
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((0ULL) - (((/* implicit */unsigned long long int) 255212678U))));
                                arr_15 [i_0] [i_1] [i_4] = (-(((/* implicit */int) (!(((((/* implicit */long long int) 1830027285U)) <= (-1LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((((+(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [9ULL] [9ULL] [0U]), (((/* implicit */short) var_10)))))))) : (min((((/* implicit */unsigned long long int) ((var_12) ? (arr_18 [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_5])))))), (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_25 [i_6] [i_5] [i_5] [i_5] [i_8] = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) - (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_10 [i_8] [i_8] [i_8 + 1] [i_8 + 3] [i_8 + 2])))))) : (max((((long long int) 2464940022U)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))));
                                arr_26 [i_0] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */signed char) arr_7 [i_0] [(unsigned short)14] [i_6]);
                            }
                        } 
                    } 
                    var_17 += ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_12))) + (((/* implicit */int) ((var_4) <= (((/* implicit */long long int) (((_Bool)1) ? (2615165502U) : (4039754618U)))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1821991085U)), (max((9622045095931023374ULL), (17882152441181609250ULL)))));
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) min((((/* implicit */short) var_6)), (var_3))))))));
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0)))) || (var_10))) || (((/* implicit */_Bool) var_5))));
}
