/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11134
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (short)32767));
                var_11 -= ((/* implicit */short) min((((/* implicit */int) max(((short)32767), ((short)-32767)))), ((-(var_9)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_5)))))), (-3563488162304907028LL)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */int) ((((((/* implicit */int) arr_4 [11LL] [i_1] [i_1])) * (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)206)))))))) : ((-(((/* implicit */int) var_3))))));
                                arr_17 [i_3] [i_1] [8] [i_3] [i_4] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [i_0])), (var_4)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_9 [i_2])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_5 [i_0] [0ULL]))))) + (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_4))))))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) - (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32766)), ((unsigned short)24042))))) : (var_7))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_9))));
}
