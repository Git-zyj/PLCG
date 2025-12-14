/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176751
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)46206)) == (((/* implicit */int) (unsigned short)19333))))) < ((+(((/* implicit */int) (short)-5988)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-4398046511104LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)19341)))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = (~(((/* implicit */int) (_Bool)0)));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_2 [i_1 + 1]))) ? ((-(arr_2 [i_1 - 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)62398))))))))));
                var_15 *= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) / (((/* implicit */int) ((signed char) (signed char)-15))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_11)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) (short)5971)) ? (max((2147483647), (-1))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_3] [i_4]))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1422502305)) ? (var_5) : (((/* implicit */long long int) arr_1 [i_0])))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)46195), (((/* implicit */unsigned short) var_2))))) >> (((((/* implicit */int) var_4)) - (170))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2858938639U)))))))) && (((/* implicit */_Bool) min(((unsigned short)12674), (((/* implicit */unsigned short) var_4)))))));
}
