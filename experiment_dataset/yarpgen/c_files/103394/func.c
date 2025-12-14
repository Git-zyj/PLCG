/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103394
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)61)), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))))))));
                                var_13 -= ((/* implicit */unsigned short) arr_5 [i_3] [i_1]);
                            }
                        } 
                    } 
                    arr_14 [(_Bool)1] [i_0] [i_0] [(_Bool)1] = arr_6 [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))));
    var_15 = ((/* implicit */unsigned char) (signed char)-53);
    var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_22 [i_6] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_5] [(_Bool)1] [i_7])), (arr_4 [i_5] [i_5])))) ? (((/* implicit */int) min(((signed char)31), ((signed char)-61)))) : ((+(((/* implicit */int) arr_9 [i_5] [i_6] [i_5] [i_7 + 1])))))), (((/* implicit */int) arr_5 [i_7 + 1] [i_7])));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((arr_9 [i_7] [i_7] [i_7 - 1] [i_7 - 1]), (min((arr_9 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2]), (arr_9 [i_7 - 1] [i_7 - 2] [i_7] [i_7 + 1]))))))));
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)12)))))));
                }
            } 
        } 
    } 
}
