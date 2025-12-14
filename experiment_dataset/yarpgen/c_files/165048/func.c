/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165048
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_12 = max((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65526))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_3 - 2])) ? (((((/* implicit */_Bool) 4082190455U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)190)))) : (((((/* implicit */_Bool) (short)17925)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) : (arr_11 [i_0] [(unsigned short)10] [i_2] [(_Bool)1] [i_4] [5]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4 + 3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) : (arr_6 [i_2] [i_2]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) (+(var_0)));
                    arr_15 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)65527))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_8);
}
