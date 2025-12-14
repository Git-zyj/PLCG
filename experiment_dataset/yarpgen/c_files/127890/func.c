/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127890
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
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_2 [i_0])))))) ? ((+(((/* implicit */int) (unsigned char)192)))) : ((~((~(((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                var_21 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) 3319549838U))))), ((-(((/* implicit */int) arr_1 [i_3]))))));
                                arr_13 [i_0] = ((/* implicit */short) min((min((arr_7 [i_2] [i_3] [i_4]), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_4])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1])))))));
                            }
                            var_22 = ((/* implicit */_Bool) (~((~(arr_0 [i_0] [i_3])))));
                        }
                    } 
                } 
                var_23 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) ? (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
                var_24 = ((/* implicit */signed char) min(((short)7440), ((short)-14432)));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)13496)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) + (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)63)), (var_0)))))))));
}
