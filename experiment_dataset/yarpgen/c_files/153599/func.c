/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153599
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
    var_13 = ((/* implicit */short) max(((((-(((/* implicit */int) var_7)))) - (((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))), ((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) min((((/* implicit */short) var_2)), (var_6))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) min((((/* implicit */unsigned char) ((signed char) arr_6 [i_1] [i_1] [i_2]))), (((unsigned char) arr_6 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_0] [i_2] [i_0])) - (109)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((((/* implicit */int) arr_10 [i_0] [i_2] [i_0])) - (109))) + (36))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) max((((/* implicit */short) min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */signed char) (_Bool)0))))), (((short) var_6))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3]))));
                                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_9 [i_3 + 1] [i_3] [i_3] [i_3 + 1])) + (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_4])))), (((/* implicit */int) arr_5 [i_4] [i_3]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)211), ((unsigned char)255)))) == ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))))) >= ((+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) >= (((/* implicit */int) var_2)))))))));
                    var_20 = ((/* implicit */short) max((((((/* implicit */int) (short)6776)) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_10 [i_0] [i_2] [i_2])) - (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
}
