/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163930
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
    for (int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_0])), (arr_5 [i_0] [i_1])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) var_8)))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((-(min((-2263671427142184953LL), (((/* implicit */long long int) (_Bool)0)))))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [10U]))) : (((unsigned int) ((((/* implicit */int) arr_8 [i_0] [9LL] [i_3] [i_4])) >= (((/* implicit */int) var_12))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    var_21 = ((/* implicit */int) max((min((min((var_6), (var_6))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) (unsigned char)57)))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                var_22 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) arr_17 [i_5] [i_6]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_5])))), (((/* implicit */int) ((unsigned char) ((_Bool) arr_14 [i_5]))))));
                arr_19 [i_5] [i_5] = ((/* implicit */short) arr_3 [i_6] [i_5]);
                var_23 = ((/* implicit */long long int) max((var_23), (((long long int) arr_9 [i_5] [i_6] [i_6] [i_6]))));
            }
        } 
    } 
}
