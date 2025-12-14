/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169369
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_8)))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_1 [i_0 - 1])))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_4)))))));
    }
    var_11 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) var_6))))));
    var_12 *= ((/* implicit */int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0)))))) : (var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) arr_8 [(unsigned short)0] [i_2] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) (unsigned short)8064)))))));
                        arr_14 [i_4] [(signed char)4] [2] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 2] [i_1])) || (((/* implicit */_Bool) var_3))));
                        var_14 = ((/* implicit */unsigned long long int) (-(arr_5 [i_2 + 1])));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((int) var_3))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8047)))))))));
                        var_16 = (+(var_2));
                    }
                    var_17 = ((/* implicit */unsigned char) max((var_17), ((unsigned char)255)));
                }
            } 
        } 
    } 
}
