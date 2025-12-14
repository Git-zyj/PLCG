/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154524
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [8] [i_0] = ((/* implicit */int) arr_6 [i_2] [21] [21]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((long long int) var_2)) : (var_2)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((_Bool) arr_5 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_3 - 3] [i_3 - 1] [i_3 + 2] [i_3 - 2])) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3]))))))))));
                        arr_10 [i_0] [i_1] [i_0] [i_2] [i_3 - 4] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0]))) ? ((~(1577544683))) : (((/* implicit */int) (_Bool)1)))));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_8))))) ? (var_2) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_4 [i_0]))))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_4])))))));
                        arr_15 [i_4] [i_1] = ((/* implicit */unsigned char) (~(((((-2032610520) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
                        var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (var_6)))) ? ((+((((_Bool)1) ? (((/* implicit */long long int) var_6)) : (var_7))))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_0)))) + (((var_6) - (((/* implicit */int) (_Bool)1)))))))));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((min((((/* implicit */int) arr_5 [i_4 - 4] [i_4 - 2] [i_4 - 4])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_1] [i_4])) : (((/* implicit */int) var_0)))))) << (((arr_3 [i_0] [i_0] [i_4]) + (726222730)))));
                    }
                    var_14 ^= ((/* implicit */_Bool) var_7);
                    var_15 = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (~(2483661667821809626LL)));
}
