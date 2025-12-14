/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121841
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) var_0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_21 *= ((/* implicit */short) (unsigned short)18063);
                    var_22 *= ((/* implicit */short) var_10);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_0 [i_1 + 2]))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_24 -= (!(((/* implicit */_Bool) 2147483647)));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_10 [(short)1] [(short)1] [i_3])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)32640))))) : (min((((/* implicit */long long int) var_1)), (arr_10 [i_0] [i_4] [i_3])))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_14 [i_0] [i_1] [i_0] [i_0]), (var_10)))), (((arr_10 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) arr_2 [i_1])) - (18738))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_16))));
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2147483647) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) var_15))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)190)), (var_12)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)7)))))) : (((/* implicit */int) ((min((((/* implicit */long long int) var_17)), (var_0))) > (((/* implicit */long long int) max((((/* implicit */int) var_13)), (65044548)))))))));
    var_29 = ((/* implicit */_Bool) ((min((((int) var_15)), (((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) var_14)) : (var_7))))) / (((((/* implicit */int) ((var_10) || (((/* implicit */_Bool) var_4))))) / (((/* implicit */int) var_15))))));
    var_30 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)60692)))) + (var_0))));
}
