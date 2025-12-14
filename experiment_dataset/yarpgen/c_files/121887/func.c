/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121887
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_5)))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_0] = var_5;
                            arr_14 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_10);
                            var_12 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) var_3);
                            var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_5))));
                            arr_18 [i_0] = ((/* implicit */long long int) ((((var_3) ? (var_4) : (((/* implicit */unsigned long long int) var_10)))) == (((/* implicit */unsigned long long int) 614738860U))));
                        }
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_9))));
                        arr_19 [i_0] [i_0] = ((/* implicit */int) var_9);
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_23 [i_1] [i_0] [i_1] [i_1] [i_1] [14U] = ((/* implicit */short) var_8);
                        arr_24 [i_0] [i_1 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((long long int) (_Bool)1)) & (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (min((((/* implicit */unsigned int) (signed char)-84)), (864470830U))))), (((/* implicit */unsigned int) (signed char)-73))));
                        var_16 = ((/* implicit */_Bool) max(((-((+(((/* implicit */int) var_8)))))), (((/* implicit */int) var_8))));
                    }
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_1))));
                    arr_28 [i_0 + 1] [i_0] = var_2;
                    arr_29 [i_2] [i_2] &= ((/* implicit */short) var_10);
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_6))));
                }
            } 
        } 
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((short) ((((/* implicit */_Bool) var_10)) ? (1720538534U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86)))))), (((/* implicit */short) ((signed char) max(((signed char)-75), (((/* implicit */signed char) var_7))))))));
        arr_31 [i_0 + 2] [i_0] = ((/* implicit */short) var_2);
        var_19 = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_9)))) ? (((/* implicit */int) min((var_7), (var_8)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_0)))) * (((/* implicit */int) min((var_7), (var_3))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8))))))) : (var_4)));
    }
    var_21 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
}
