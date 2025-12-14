/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131897
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0 - 2] [i_0 + 2] [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) var_4))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */short) arr_0 [i_0]);
                    arr_11 [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) var_1)) : (max(((-2147483647 - 1)), (((/* implicit */int) (short)-7528)))))) > (((/* implicit */int) ((((int) (signed char)38)) > (((/* implicit */int) max(((signed char)-49), (((/* implicit */signed char) arr_5 [i_2] [i_1 + 1]))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)-7548)) ? (max((((/* implicit */unsigned int) var_10)), (var_8))) : (((/* implicit */unsigned int) (-(1373238296)))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) (unsigned short)15635)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)21512)))) : (max((((/* implicit */int) (short)-18222)), (arr_16 [i_4] [i_4]))))) + (((/* implicit */int) (unsigned short)44548))));
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) (short)21527)))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) arr_17 [6LL])) ? (-652653062) : (var_2))), (((/* implicit */int) ((((/* implicit */int) (short)21535)) > (((/* implicit */int) var_4))))))))))));
                }
            } 
        } 
    } 
}
