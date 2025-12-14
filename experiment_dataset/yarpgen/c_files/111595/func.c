/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111595
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
    var_20 = ((/* implicit */_Bool) var_9);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_4), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) ((_Bool) (short)-16484)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_12))) ? (((((/* implicit */_Bool) 2928885607U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))) : (((((/* implicit */_Bool) ((unsigned int) var_15))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_8 [i_1] [i_1] |= ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) max((3923697861U), (((/* implicit */unsigned int) var_14)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) / (arr_17 [i_0] [i_3] [i_2] [i_1] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_13 [(_Bool)1] [i_1] [(_Bool)1] [i_0]))))))) << (((/* implicit */int) ((_Bool) var_3)))));
                                var_23 = ((/* implicit */unsigned int) arr_6 [i_0]);
                                arr_18 [i_4] [(unsigned short)12] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_17);
                                arr_19 [(short)12] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (4294967289U)))))));
                            }
                        } 
                    } 
                } 
                var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_13 [(unsigned char)2] [(unsigned char)2] [i_1] [i_0]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)29113)) - (29082)))));
}
