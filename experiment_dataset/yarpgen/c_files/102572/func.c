/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102572
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)7680)) + (-1))) - (((var_15) + (((/* implicit */int) (unsigned short)57879))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_3 [i_2] [i_1] [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))) * ((+(12714483582863486532ULL))))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-10)))) * (((((/* implicit */unsigned long long int) 1306426467)) & (17136538250546451525ULL))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [11] [i_1] [i_2])) * (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_2]))))) : ((-(((5ULL) / (var_4)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        for (int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            for (int i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_10 [i_3]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_22 = ((int) ((((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 2])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [2LL] [i_5] [i_4] [6LL])))))));
                        arr_18 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((var_15), (((/* implicit */int) arr_12 [i_4 - 2] [i_3 + 1]))))) ^ (min((min((var_3), (((/* implicit */long long int) (signed char)103)))), (((/* implicit */long long int) (unsigned short)511))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((short) (~(var_5))));
                        var_24 = ((/* implicit */unsigned long long int) ((long long int) ((int) arr_13 [i_3 - 1])));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (min((((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned short) var_13))))), (((10618090961622673869ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57846))))))))))));
                        arr_25 [14ULL] = var_1;
                        var_26 = max((((/* implicit */unsigned long long int) (unsigned short)57833)), (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 1]))) : (17705152952963551096ULL))));
                    }
                }
            } 
        } 
    } 
}
