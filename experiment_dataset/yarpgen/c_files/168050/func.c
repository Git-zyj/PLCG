/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168050
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) ((long long int) (~(arr_7 [i_1] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) (+(max((max((((/* implicit */unsigned int) var_11)), (arr_4 [i_0] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1650739666424958734LL)) && (((/* implicit */_Bool) var_2)))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_4 - 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64512))) / (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((-(-1650739666424958730LL)))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (-1650739666424958732LL)))) ? ((-(((/* implicit */int) (signed char)78)))) : (((/* implicit */int) arr_0 [i_2]))))) ? ((-((-(arr_8 [i_3 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0]))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((5594146246202075305ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))))));
                                var_23 *= ((/* implicit */signed char) ((int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (short)-4112)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_3]))))), ((~(var_6))))));
                            }
                        } 
                    } 
                    var_24 *= ((arr_5 [i_0]) * (((long long int) (!(((/* implicit */_Bool) 12852597827507476312ULL))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & ((~(((/* implicit */int) (signed char)-65))))))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_6)) ? (3623705108U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
}
