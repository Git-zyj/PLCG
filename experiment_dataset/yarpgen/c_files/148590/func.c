/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148590
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
    var_17 = ((/* implicit */signed char) ((unsigned short) max((((int) var_0)), (((((/* implicit */int) var_5)) % (((/* implicit */int) var_16)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((var_1) != (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_16))) & (((/* implicit */int) arr_2 [(short)0] [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) var_6);
                                var_20 = ((/* implicit */long long int) ((unsigned short) ((((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (var_3)))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), ((-(var_4)))));
                            arr_20 [i_0] [i_1] [(_Bool)1] [20ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_6] [i_1] [1])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) var_5))))))) - (min((min((var_9), (arr_18 [i_0] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned int) var_10))))));
                            var_22 = ((/* implicit */long long int) var_13);
                            var_23 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [12] [i_0] [i_0])))))) : (((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_5))))) ? (min((var_6), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_14))))))))));
}
