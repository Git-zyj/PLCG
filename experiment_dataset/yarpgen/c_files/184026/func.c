/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184026
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
    var_11 = ((/* implicit */unsigned long long int) (signed char)-105);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_0 [(_Bool)0] [i_1 - 1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_1] [12U] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */int) min((var_0), ((unsigned char)169)))) - (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_2] [i_3] [(unsigned char)24])) : (((/* implicit */int) (_Bool)1))))))));
                                var_12 = max((((/* implicit */unsigned int) max((((/* implicit */int) (!(arr_1 [i_4])))), (((((/* implicit */_Bool) arr_10 [i_4] [i_3 - 4] [(unsigned char)12] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))), (arr_10 [i_4] [i_3] [i_2 + 1] [(_Bool)1] [i_1 - 1] [i_0 - 1]));
                                var_13 = ((/* implicit */unsigned char) ((int) 2952272061089809000LL));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */unsigned int) (_Bool)1)), (arr_10 [i_1] [i_1] [i_1] [i_0 + 1] [i_0] [i_0]))))) >> (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)0))))))));
                var_15 -= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_0 + 3] [i_1 - 1] [i_1])))) - (max((arr_10 [i_0] [i_1] [i_0] [i_1] [15ULL] [i_0]), (0U))))), (arr_10 [(unsigned char)17] [(unsigned char)17] [i_0] [i_0 + 1] [i_0] [i_0 + 3])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_3))), (((/* implicit */long long int) 1813817303U))));
}
