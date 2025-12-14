/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12381
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_17), (((var_3) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_18))))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned int) 2383821281U)))))) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0] [i_1] [(unsigned short)1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_20 = max((((/* implicit */int) max((arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), ((_Bool)1)))), ((-(((/* implicit */int) (short)1984)))));
                            arr_13 [i_1] = ((/* implicit */unsigned char) 3795723176201884996ULL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_24 [i_1] [i_1] = ((/* implicit */_Bool) (-((-(808256347U)))));
                                var_21 = ((/* implicit */unsigned char) ((((unsigned int) ((unsigned short) var_17))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)18499))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_4] [i_6])), (var_6)))) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_4])) : (((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (unsigned short)55742))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10260)) ? (((((/* implicit */_Bool) 3510084716U)) ? (((/* implicit */int) arr_12 [i_1] [i_4] [i_5] [i_6])) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) arr_14 [(unsigned char)9] [(unsigned char)9] [i_6])) : (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (unsigned short)65527);
}
