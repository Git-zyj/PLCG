/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162694
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned char)119), ((unsigned char)213))))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (min(((unsigned char)128), ((unsigned char)241)))));
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_1 [(unsigned char)18] [i_2]), (arr_4 [i_1] [i_0])))) ? ((~(((/* implicit */int) (unsigned char)26)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)58))))))) < (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_1 [i_2] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))))));
                    arr_9 [i_0] [i_2 - 3] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)58)), ((-((-(((/* implicit */int) (unsigned char)212))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            {
                arr_14 [i_3] [i_3] = var_13;
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            arr_21 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])) * (((/* implicit */int) (unsigned char)201)))))))) <= (((((((/* implicit */int) arr_13 [(unsigned char)4] [(unsigned char)4] [i_5])) / (((/* implicit */int) arr_8 [i_3] [i_4] [i_5] [i_3])))) + (((/* implicit */int) arr_2 [i_3]))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)142)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_9)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) == (((/* implicit */int) arr_2 [(unsigned char)18])))))))) & (((((/* implicit */_Bool) max((arr_0 [i_3 + 1]), ((unsigned char)14)))) ? (((/* implicit */int) arr_19 [i_3 - 1] [i_3 + 1] [(unsigned char)2])) : (((/* implicit */int) var_12)))))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)56)))) + (((/* implicit */int) (unsigned char)135))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) arr_12 [i_3 - 1])) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_4 [i_4] [i_3])))) : ((+(((/* implicit */int) arr_12 [(unsigned char)2])))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)133))))))));
                arr_22 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_3 - 1]))));
            }
        } 
    } 
    var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_14))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * ((-(((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((((unsigned char) (unsigned char)14)), (min((var_0), ((unsigned char)82))))))));
    var_27 = ((unsigned char) var_3);
}
