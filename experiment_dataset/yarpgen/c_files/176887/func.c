/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176887
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
    var_12 = ((/* implicit */unsigned char) max(((+(var_1))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_6) < (((/* implicit */long long int) 16)))))))));
    var_13 *= ((/* implicit */short) (((+(((((/* implicit */_Bool) -327792221)) ? (((/* implicit */long long int) var_1)) : (var_7))))) > (var_6)));
    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)-105)))) * (((/* implicit */int) var_5)))) / ((+((-(((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */short) (~(var_10)));
                    arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)119))))) : (((((/* implicit */_Bool) (~(-3181528618733126246LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((+(var_6)))))));
                    arr_10 [i_0] [11ULL] = ((/* implicit */signed char) arr_6 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (short)-14574);
                                var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_0)), (arr_13 [i_0 + 1] [i_2] [i_2] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)114)) ? (-840909266435594100LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
}
