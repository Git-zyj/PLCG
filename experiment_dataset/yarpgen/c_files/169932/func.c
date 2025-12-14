/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169932
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)61))))) || (((/* implicit */_Bool) ((int) (signed char)127)))))) << (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)17), (((/* implicit */unsigned short) var_3))))) && (((/* implicit */_Bool) var_9)))))));
    var_11 = ((/* implicit */_Bool) var_7);
    var_12 = ((/* implicit */_Bool) ((min((((1732798701948701438LL) != (((/* implicit */long long int) ((/* implicit */int) var_0))))), (min(((_Bool)0), (var_1))))) ? (min((((/* implicit */unsigned int) ((unsigned short) var_5))), (max((((/* implicit */unsigned int) var_6)), (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2] [i_0]))))) ? (max((((/* implicit */unsigned int) ((short) arr_7 [1U] [i_1] [i_0] [i_0]))), (max((arr_5 [i_2]), (((/* implicit */unsigned int) arr_1 [i_2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(short)11]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) arr_11 [5U] [i_1] [i_3] [i_2]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_3 - 1]), (arr_5 [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (((unsigned int) arr_7 [i_4 + 2] [i_3 - 1] [i_3] [i_3 - 1]))));
                            var_16 = ((/* implicit */_Bool) arr_1 [i_3 - 1]);
                        }
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_3 - 1] [5U] [i_3 - 1] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3] [i_2]))))) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1])) : (((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_3 - 1] [(signed char)6] [i_3] [i_1])) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_2] [i_2]))))));
                        arr_14 [i_0] [i_3] = ((/* implicit */long long int) var_9);
                    }
                    arr_15 [i_0] [1LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned int) ((_Bool) arr_11 [i_1] [i_1] [i_2] [2])))))) ? (((((3486895123U) >= (((/* implicit */unsigned int) 196103316)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_2])))) : (((arr_10 [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (short)-29271))))))) : (((/* implicit */long long int) max((((((/* implicit */int) arr_7 [i_0] [i_1] [4] [i_2])) * (((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */int) (signed char)61)) << (((/* implicit */int) arr_8 [i_0])))))))));
                }
            } 
        } 
    } 
}
