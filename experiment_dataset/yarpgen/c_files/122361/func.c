/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122361
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) var_6)), (var_12))) >> (((/* implicit */int) ((1682147195U) > (2612820110U)))))) & (max((var_5), (((/* implicit */unsigned long long int) 2612820100U))))));
                    var_13 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 1682147194U)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_8)))) : (((((/* implicit */_Bool) 2612820118U)) ? (((/* implicit */unsigned long long int) 1682147178U)) : (var_12)))))));
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)111)) ? (((((/* implicit */_Bool) 2612820121U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (signed char)79))))));
                    var_14 = ((/* implicit */unsigned long long int) var_0);
                }
                arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_8), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))) ? (((((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) / (((/* implicit */int) min(((_Bool)1), (var_6)))))) : (((/* implicit */int) var_3))));
                arr_14 [i_1] [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)111))))));
                var_15 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (var_0)))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_7) || ((_Bool)1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) var_7)), (1682147216U)))))), ((-((+(var_5)))))));
    var_17 = ((/* implicit */short) var_2);
}
