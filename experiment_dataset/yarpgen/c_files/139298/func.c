/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139298
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), ((!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2740336637U)))) ? (((/* implicit */int) arr_7 [i_4] [i_1] [(_Bool)1] [i_4])) : (((/* implicit */int) ((unsigned char) var_6))))))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)50324), (((/* implicit */unsigned short) ((_Bool) (_Bool)1)))))) ? (max((arr_9 [i_1] [i_2] [i_4 + 2] [i_1] [i_4] [i_2]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-11), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((arr_11 [i_4 + 1] [i_0] [(short)4] [i_0] [12U]) + (arr_11 [i_4 - 1] [i_0] [i_0] [i_0] [i_0])))));
                                arr_15 [i_4 - 1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_4]);
                                var_15 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) (signed char)-11);
                }
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1843986875U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))))));
}
