/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18214
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
    var_10 = ((/* implicit */int) var_3);
    var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((var_5) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)139)) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) var_5);
                    var_13 = ((/* implicit */_Bool) (+(((int) arr_6 [i_1] [i_2]))));
                    var_14 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned char)103)))) & (((/* implicit */int) var_6)))), ((-((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -192794538))))) : ((((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (+(arr_13 [i_3] [i_3 - 1] [i_4])));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) var_8);
                                var_18 = ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) ((unsigned short) ((unsigned short) arr_15 [i_4] [i_5] [i_6])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_9);
}
