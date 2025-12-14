/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136897
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
    var_15 = ((/* implicit */unsigned short) var_7);
    var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (2076354399U))))))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (var_13)))) + (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (var_4))))));
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0 + 4] [i_0 - 1]), (((/* implicit */unsigned int) var_3))))) ? (max((arr_5 [(_Bool)1] [i_0 + 3] [i_0 + 2]), (arr_5 [i_0 + 3] [i_0 + 4] [i_0 + 1]))) : (min((((/* implicit */unsigned int) var_11)), (arr_5 [(_Bool)1] [i_0 + 2] [i_0 + 1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (((_Bool)1) ? (3024692117U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32668)))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((4005970701328487004LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) != ((-(((/* implicit */int) (_Bool)0))))));
                            var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)145)) ? (var_13) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)1)))))))), (2076354399U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */_Bool) var_14);
}
