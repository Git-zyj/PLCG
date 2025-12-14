/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114468
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
    var_10 = ((/* implicit */long long int) var_8);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6448361777397158747LL)) ? (((/* implicit */int) var_7)) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38816))) : (min((var_3), (((/* implicit */long long int) (_Bool)1))))))) ? (var_6) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_0))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_5)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (min((9ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)52294)) : (var_5)))))) : (((/* implicit */unsigned long long int) var_5))));
                                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_8)))));
                                var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)35))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)127)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_5))));
                                var_16 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                    var_17 = ((var_6) << (((var_0) - (788092024))));
                }
            } 
        } 
    } 
}
