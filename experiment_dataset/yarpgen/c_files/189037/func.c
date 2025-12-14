/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189037
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
    var_10 = ((/* implicit */int) var_4);
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((min((var_8), (var_4))), (((/* implicit */unsigned short) ((signed char) var_7))))))));
    var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_4)) : (max((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) var_7)))), ((+(((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) var_9);
                    arr_7 [i_0] = ((/* implicit */int) ((max((8353436272826649026ULL), (((/* implicit */unsigned long long int) 1032611786U)))) >> ((((+((~(((/* implicit */int) arr_0 [i_0])))))) + (32586)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_3] = ((((/* implicit */_Bool) ((max((13106796439597876017ULL), (((/* implicit */unsigned long long int) (unsigned char)207)))) << (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */long long int) 1491452050U)) : ((+(max((((/* implicit */long long int) -376192365)), (281474842492928LL))))));
                                var_13 = ((/* implicit */unsigned long long int) ((_Bool) 13482098203824031679ULL));
                                var_14 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4] [(signed char)4] [i_2] [i_1] [i_1 - 2] [(unsigned char)3])) << (((var_0) + (1857432541)))))) <= (var_3))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(3227760653U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65511))))) : (((/* implicit */int) (unsigned short)10197))));
                }
            } 
        } 
    } 
}
