/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158393
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
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) min((1827841213648310705LL), (((/* implicit */long long int) var_3))))) ? (((unsigned int) var_8)) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) max(((signed char)127), ((signed char)-108))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_4] = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_4] [i_3 + 1] [i_2 + 4] [i_2] [(signed char)4] [i_0]))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_2 + 3] [i_2 + 3] [i_3] [i_4]))))))));
                                arr_15 [i_0] [(unsigned char)11] [i_0] [i_0] [i_0] [(short)10] = ((/* implicit */_Bool) arr_1 [i_3]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)106))) & (1827841213648310705LL))))));
                            var_18 = ((/* implicit */unsigned char) ((_Bool) min((arr_17 [i_0] [i_0] [i_5]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_5])))));
                            var_19 = ((/* implicit */signed char) ((3892437347U) >> (((max((((((/* implicit */int) (unsigned char)83)) * (((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) (unsigned short)3)))) - (5439307)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (_Bool)1);
}
