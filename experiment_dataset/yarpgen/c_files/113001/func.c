/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113001
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22533)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-22520))));
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) var_15))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned long long int) (short)22533)), (var_17)))))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */int) (short)32757)), (0))) / (((((/* implicit */_Bool) 18446744056529682432ULL)) ? (((/* implicit */int) (short)-12929)) : (((/* implicit */int) (short)18871))))))), (min((var_9), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_17)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7369418315973638520LL)) ? (((/* implicit */int) (short)-22537)) : (((/* implicit */int) (signed char)100))))) ? (((var_17) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16119))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (+(((int) arr_2 [i_0] [i_1]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_12 [(signed char)4] [i_2] [(short)1] [i_3] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16114))))), (((var_14) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22519)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22540))) % (var_6)))))));
                            var_24 = arr_11 [i_0] [i_0] [i_0] [i_1] [(signed char)1] [i_0];
                        }
                    } 
                } 
                arr_13 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0] [0]), (((/* implicit */unsigned long long int) var_3))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((var_5) != (((/* implicit */unsigned long long int) var_18))));
}
