/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118020
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_11)))))) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (var_2))) : (var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] |= ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)84))))));
                    var_17 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_6 [i_2] [i_2] [i_2]))))), (((/* implicit */long long int) ((max(((_Bool)1), (var_15))) ? (var_12) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2]))))))))));
                    var_18 += ((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6036411120084299991LL)) ? (((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_12 [i_4])) : (max((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 428431133U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((((/* implicit */_Bool) var_5)) && ((_Bool)1)))))))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((int) (_Bool)1)) & (((((/* implicit */int) arr_10 [i_3] [i_6])) & (((/* implicit */int) arr_10 [i_3] [i_3])))))))));
                    }
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((arr_13 [i_3] [i_5]) != (((/* implicit */unsigned long long int) (~(var_12)))))) ? (min((((/* implicit */long long int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)9] [i_4] [(unsigned short)9] [(unsigned short)9] [i_5])))))), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (min((var_2), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (((_Bool)1) && (arr_14 [i_3] [i_4])))))))));
                    arr_22 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned short) min((var_7), (((/* implicit */short) arr_14 [i_3] [i_3]))))), (max((arr_10 [i_4] [i_4]), (((/* implicit */unsigned short) var_0)))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) -1);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_7] [i_7])) : (((/* implicit */int) arr_17 [i_3] [i_4] [i_7] [i_7]))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [20LL] [20LL]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1333582168)), (arr_13 [i_3] [i_4]))))))));
                    arr_26 [i_3] [(unsigned short)15] [i_3] [i_3] = ((/* implicit */_Bool) (-((-((-(arr_23 [i_3])))))));
                    var_23 = ((((arr_11 [i_3] [i_3]) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_16 [i_3] [i_4])) : (((/* implicit */int) ((arr_16 [i_3] [i_3]) && (((/* implicit */_Bool) (unsigned char)21))))));
                }
                arr_27 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)226)) : (1333582168))) ^ (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (var_3) : ((~(((/* implicit */int) arr_11 [i_4] [i_3]))))));
            }
        } 
    } 
}
