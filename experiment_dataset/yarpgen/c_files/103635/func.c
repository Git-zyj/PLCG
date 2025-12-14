/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103635
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
    var_16 = ((/* implicit */long long int) max((var_12), (((/* implicit */unsigned short) (unsigned char)223))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) 878504673)) ? (var_7) : (((/* implicit */int) (signed char)87))))) >> (((((/* implicit */int) (unsigned short)32927)) - (32914)))));
                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
                arr_7 [i_0] = ((/* implicit */short) var_10);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) max((var_13), (((/* implicit */unsigned long long int) var_6))))))));
                            arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)87))))) != ((-(arr_10 [i_3 + 1])))))) <= (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_15))))))));
                        }
                    } 
                } 
                var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65509))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */int) arr_1 [i_0]))))))) : (((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min(((!((!(((/* implicit */_Bool) var_1)))))), (((_Bool) max((((/* implicit */signed char) var_5)), ((signed char)-88)))))))));
}
