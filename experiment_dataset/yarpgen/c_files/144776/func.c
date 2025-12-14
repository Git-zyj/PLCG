/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144776
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max((max((((/* implicit */int) ((short) (short)252))), ((+(((/* implicit */int) (short)13)))))), (((/* implicit */int) var_5))));
                                var_12 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)36572), (((/* implicit */unsigned short) var_10))))))))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 687178820U)) && (((/* implicit */_Bool) (short)252))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */int) max((arr_8 [i_0] [i_0]), (arr_8 [i_0] [i_0])))) > (((/* implicit */int) max(((short)-16), (((/* implicit */short) (signed char)10)))))));
                                var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_2] [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)))));
                                var_16 = ((/* implicit */signed char) var_10);
                                arr_17 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) min(((signed char)105), (((/* implicit */signed char) arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_0]))))) | ((+(((/* implicit */int) (short)-255))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))), ((signed char)-1)));
}
