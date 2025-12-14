/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122539
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 |= ((/* implicit */short) (-(((/* implicit */int) (short)15404))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max(((short)19749), ((short)19749)))) ? (((/* implicit */int) max(((short)3841), (var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-12169), ((short)19751))))))))))));
                    var_20 = (short)32759;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = (short)19749;
                                var_22 = ((/* implicit */short) ((((/* implicit */int) var_8)) + ((-(((/* implicit */int) (short)13768))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_6))))), (var_0))))));
                                var_24 = ((/* implicit */short) max((var_24), (((short) (short)0))));
                                arr_14 [(short)1] [i_1] [i_2] [i_3] [i_4 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-19775))))) ? ((((!(((/* implicit */_Bool) (short)7168)))) ? (((/* implicit */int) max((var_1), (var_15)))) : (((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) (short)2))))))) : (((/* implicit */int) (short)9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_1))))));
}
