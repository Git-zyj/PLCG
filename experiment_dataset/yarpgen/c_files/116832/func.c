/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116832
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */int) var_7))))) : ((-(var_0))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) & (var_3))) - (((/* implicit */int) var_11))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_1])), (arr_8 [i_2] [(_Bool)1] [i_1] [(short)16]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6331208843787515025LL))))) : (((/* implicit */int) var_5)));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_14 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))))))), (arr_0 [i_0] [i_1])));
                        arr_15 [i_1] [i_1] [13U] [13U] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_13 = -1796656215;
                        var_14 -= ((/* implicit */unsigned long long int) arr_2 [i_1]);
                        var_15 = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)61055))))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_4]);
                        arr_19 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)253);
                        var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0 + 2]))));
                        var_18 += ((/* implicit */short) var_5);
                    }
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61055)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_1] [(signed char)0] [i_5] [i_5]))) : (max((((/* implicit */long long int) arr_7 [i_0 - 1] [i_0 - 1])), (9223372036854775795LL))))))));
                        arr_23 [i_0] [i_1] [i_1] [i_5] [i_5] [15LL] = ((/* implicit */unsigned char) (-(var_0)));
                    }
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 - 1]))))) + (var_2)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -6331208843787515025LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61071))) : (0LL)));
                                arr_28 [i_0] [i_0] [i_1] [i_6] [15LL] = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_1] [i_6] [i_7]))));
                                var_22 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_7)));
}
