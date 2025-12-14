/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109684
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
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) arr_2 [i_2]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0 - 3] [i_0 - 3] [i_2])), (3085783731U)))) ? ((+(1209183562U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2970177392U))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [5] [5] [(unsigned short)0] [i_4])) ? (arr_4 [6U]) : (4294967280U)))) ? (((((/* implicit */long long int) var_8)) | (var_7))) : (((((/* implicit */_Bool) 1209183564U)) ? (arr_9 [i_0] [i_1]) : (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) min((-1875551550), (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned short)35412)) - (35398))))))))));
                                arr_13 [i_4] [i_3] [i_4] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_2] [(signed char)4] = ((/* implicit */int) (~(3085783731U)));
                    var_15 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (var_11))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (unsigned short)35406);
}
