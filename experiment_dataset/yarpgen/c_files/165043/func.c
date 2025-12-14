/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165043
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
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (var_10) : (((/* implicit */int) arr_8 [i_0])))) <= (((/* implicit */int) var_8)))))));
                    var_18 = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_14))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) 1747947499)))))) <= (((((/* implicit */_Bool) 1664204980)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_4)) | (((/* implicit */int) var_12)))), (((/* implicit */int) ((signed char) var_9)))))) ? (((/* implicit */int) var_9)) : ((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))));
}
