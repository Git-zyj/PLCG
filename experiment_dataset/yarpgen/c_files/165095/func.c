/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165095
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
    var_19 = ((/* implicit */short) ((min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_16)))) / (2147483647)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) | (1717666307))), (((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_1])))))) ? (min((max((5530566701060735220LL), (((/* implicit */long long int) (signed char)89)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-89))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((71035567U) - (71035542U))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -5530566701060735220LL)) ? (2798773966U) : (((/* implicit */unsigned int) (+(-1717666336))))))));
                                var_21 = ((/* implicit */_Bool) ((4223931735U) % (((((/* implicit */_Bool) max((((/* implicit */long long int) 1717666307)), (-9021451276772912346LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) : (arr_4 [i_1] [i_1 - 1] [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_22 = (((!(((/* implicit */_Bool) max((arr_5 [i_2] [i_2] [(short)11] [i_2]), (((/* implicit */long long int) (unsigned char)255))))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_5] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)34906), (((/* implicit */unsigned short) var_15)))))) : (max((4223931729U), (((/* implicit */unsigned int) var_9)))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)178))))) ^ (min((((/* implicit */unsigned int) var_7)), (var_2))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4)))) ? (max((((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (signed char)-118)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5573))))) : (var_2)))));
    var_25 = ((/* implicit */_Bool) var_4);
    var_26 = ((/* implicit */signed char) (unsigned short)65535);
}
