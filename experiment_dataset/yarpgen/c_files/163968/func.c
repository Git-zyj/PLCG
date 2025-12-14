/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163968
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
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */unsigned char) min((1788949864), (min((arr_6 [i_0 - 2]), (arr_6 [i_0 - 2])))));
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) var_6)) / (var_0))) * (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) arr_2 [i_0])))))) : (((int) ((unsigned char) var_12)))));
                    var_16 = ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned int) ((((arr_7 [i_0 - 1] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 - 3])) - (60376)))))) : ((~(((unsigned int) var_10)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13059)) / (((/* implicit */int) arr_5 [i_0 - 3] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10)))))));
                                arr_15 [i_4 - 2] [i_1] [(unsigned char)10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 2017612633061982208ULL)) ? (min((16429131440647569407ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (var_8)))))) : (((/* implicit */unsigned long long int) 0))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (8918954651065134548LL)))))))));
                                arr_28 [8ULL] [8ULL] [i_7] [i_8 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_5 - 1] [i_5 - 1] [i_5] [i_7] [i_5 - 1]))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_5 [i_6] [i_7]))))) : (((/* implicit */int) ((unsigned short) var_10)))))) ^ ((~(var_10)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) (~((-((+(16429131440647569396ULL)))))));
                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_23 [i_5] [i_5] [(_Bool)1]) ^ (((/* implicit */unsigned int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (arr_11 [i_5] [i_6 - 2] [i_5] [i_5] [i_5])))))), (var_14)));
            }
        } 
    } 
}
