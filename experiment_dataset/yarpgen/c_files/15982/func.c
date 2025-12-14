/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15982
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -591091228)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37980))))));
                            arr_8 [i_0] [i_1] [i_2] [i_1] = (-((-(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_6))))))));
                            var_13 = ((/* implicit */unsigned short) (-((-((-(var_4)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_15 [i_5] [i_5] [i_4] [(unsigned short)14] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [(unsigned char)16] [i_1] [i_1] [21])))), (((/* implicit */int) arr_2 [i_1 + 1]))))) ? (max(((-(var_9))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)27556)) : (((/* implicit */int) var_11)))), (-1973721919))))));
                            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) (signed char)-43));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_10)), (var_9)))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_8))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max(((-(((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) var_11))))));
    var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)19591)) >= (((/* implicit */int) (_Bool)1)))))))));
}
