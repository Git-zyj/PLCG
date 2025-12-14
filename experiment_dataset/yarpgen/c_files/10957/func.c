/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10957
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)89), ((unsigned char)210)))) != (((/* implicit */int) var_7))))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (+(min((13U), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)19345)) : (((/* implicit */int) var_5)))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((2055343491), (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_0 - 1]))))) + (13U)));
                                var_18 -= ((/* implicit */long long int) max((((/* implicit */int) ((short) ((((/* implicit */int) (short)24950)) / (((/* implicit */int) (short)-1)))))), ((+(((/* implicit */int) max(((short)-1525), (arr_4 [(unsigned short)10] [i_1] [i_1] [i_4]))))))));
                                var_19 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_1]))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) -91562370518674247LL))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_9);
}
