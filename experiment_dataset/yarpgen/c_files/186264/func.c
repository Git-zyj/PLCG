/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186264
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned char)6] [i_0] = ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)52)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [(unsigned char)4] &= ((unsigned char) (~(((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1]))));
                            var_11 &= ((/* implicit */_Bool) var_7);
                            var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((_Bool) arr_22 [(unsigned char)15] [(_Bool)1] [(_Bool)1] [(unsigned char)1]));
                    arr_24 [i_4] [i_5] = ((((/* implicit */int) min((((/* implicit */unsigned char) arr_21 [i_4] [i_5] [i_6])), ((unsigned char)15)))) >= (((/* implicit */int) arr_21 [i_4] [i_4] [i_4])));
                    arr_25 [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_19 [i_5]), (((/* implicit */unsigned char) arr_17 [i_6]))))) ? (((((/* implicit */int) arr_21 [i_5] [i_5] [i_5])) + (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) (unsigned char)52)))) ^ ((-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_14 = var_9;
}
