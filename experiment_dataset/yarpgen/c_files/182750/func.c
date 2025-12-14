/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182750
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
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (+(arr_3 [i_0] [i_2]))))) ? (min((arr_2 [i_0 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0]))))))) : (max((var_0), (max((0LL), (((/* implicit */long long int) var_11))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = arr_15 [(unsigned short)10] [i_1] [(unsigned short)10] [i_3 + 4] [9LL];
                                var_16 = ((/* implicit */long long int) min((var_16), (var_4)));
                                var_17 = ((/* implicit */unsigned int) (-(arr_13 [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] [i_1] [i_3] [i_4])));
                                var_18 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) min((var_8), (arr_7 [i_1 + 2] [i_1 + 2] [i_4])))), (1986866701868775121LL))), (((/* implicit */long long int) 1521207071))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) var_8)) | (max(((-(536870656U))), (((/* implicit */unsigned int) var_5)))))))));
    var_20 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */int) ((unsigned short) ((unsigned short) (-2147483647 - 1)))))));
    var_21 = ((/* implicit */_Bool) var_12);
    var_22 = ((/* implicit */unsigned int) -1521207048);
}
