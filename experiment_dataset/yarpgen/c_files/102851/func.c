/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102851
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned short)27162)) << (((((/* implicit */int) var_8)) + (121))))) : (((/* implicit */int) (_Bool)0)))) ^ ((+(var_3)))));
                            arr_10 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2 - 2] [i_0]);
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((-1898785026) + (2147483647))) << (((((/* implicit */int) (short)21876)) - (21876))))))));
                            arr_11 [i_0] [(signed char)8] [i_0] [4U] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_2 - 1] [(_Bool)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) var_9)))))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((~((~(((/* implicit */int) var_1))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    var_16 = 1898785025;
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) ((unsigned char) (unsigned short)13434))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1] [(short)4])))))));
                }
                for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_18 *= ((/* implicit */short) var_0);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_7 [i_1 - 3] [i_1] [i_5] [i_0]))) ? (((/* implicit */int) (signed char)-123)) : (((int) min((((/* implicit */int) var_10)), (arr_8 [i_0] [i_1]))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_6);
    var_21 = ((/* implicit */signed char) var_10);
}
