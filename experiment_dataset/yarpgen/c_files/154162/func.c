/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154162
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((5374777277987179834LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-1772))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    var_20 = ((/* implicit */unsigned int) (-(min((min((((/* implicit */unsigned long long int) var_15)), (var_0))), (((unsigned long long int) var_17))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_3);
                                arr_12 [(signed char)14] [12ULL] [8LL] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_1 [2U] [i_2]))))))) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) arr_2 [i_0])), (arr_8 [i_1] [i_2] [i_4]))))) : (min((((((/* implicit */int) var_16)) / (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (unsigned short)5665))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) var_5))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))), (var_7))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
}
