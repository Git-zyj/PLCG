/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123566
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
    var_19 = ((/* implicit */unsigned int) var_11);
    var_20 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) (unsigned char)246)))), (((/* implicit */int) (unsigned short)9497)))) / ((-(((((/* implicit */int) (unsigned short)9497)) * (((/* implicit */int) var_3))))))));
                var_22 = ((/* implicit */_Bool) (unsigned short)56020);
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((2568103677U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 9; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_24 &= ((/* implicit */signed char) ((int) var_6));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    arr_12 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1726863619U)))) ? ((~(1726863639U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-20132)))))));
                    arr_13 [i_2] [i_3] [i_2] &= ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) / ((~(((/* implicit */int) var_18))))));
                    arr_14 [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) max((((int) var_14)), (((/* implicit */int) ((_Bool) var_7)))))) ^ (min((((/* implicit */unsigned int) arr_3 [i_2 - 4])), (2568103677U)))));
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_6)), (arr_3 [i_5]))))))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)56044)) > (((/* implicit */int) var_0))))) + (((/* implicit */int) min((arr_5 [i_2 - 4] [i_3]), (var_5)))))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 2] [i_2 - 4]))))));
                    var_26 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_3))))), (arr_7 [i_2]))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-8433))))));
                    arr_17 [i_2 - 2] [(unsigned char)2] [(_Bool)1] [i_3] = ((/* implicit */short) ((signed char) (-(min((arr_6 [(unsigned char)6]), (((/* implicit */unsigned int) (unsigned short)56044)))))));
                }
            }
        } 
    } 
}
