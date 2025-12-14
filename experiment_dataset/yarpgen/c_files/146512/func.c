/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146512
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
    var_19 = ((/* implicit */signed char) ((min((((var_0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-118)))), (((/* implicit */int) var_3)))) == (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)27363))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (signed char)117))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_3))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_13))))));
                    arr_8 [i_0] [i_1] [i_2] [(signed char)14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_7)))), (((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */unsigned char) (signed char)-118);
                                var_22 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)-99)) ? (((((/* implicit */_Bool) (short)19592)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min(((signed char)-118), (var_5)))))));
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_8), (var_8)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_14)), (var_5)))) : (((/* implicit */int) max(((short)-23471), (((/* implicit */short) var_10))))))) > (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = min(((short)-3995), (((/* implicit */short) (unsigned char)141)));
    var_25 = ((/* implicit */unsigned short) var_11);
}
