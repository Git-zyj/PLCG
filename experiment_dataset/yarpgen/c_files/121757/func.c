/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121757
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */short) var_4);
                        arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) ((short) var_10))) != (((/* implicit */int) var_6)))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-20593), ((short)20575))))) | (var_12))))));
                    }
                    var_21 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)112)) - (((/* implicit */int) ((2899664981U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((unsigned int) var_7)) : ((+(var_4)))))));
                    var_22 = ((/* implicit */unsigned char) ((unsigned short) 4294967295U));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((-(((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_17)))))))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_2))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), (var_7)))));
    var_25 = ((/* implicit */long long int) var_7);
    var_26 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_14))))))) : (max((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) 2689410637U)) > (-7093429179850382965LL))))))));
    var_27 += ((/* implicit */long long int) var_15);
}
