/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174484
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)52714)), (((((/* implicit */_Bool) var_4)) ? (12792300697346833161ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)4142)) - (((/* implicit */int) (signed char)-96))));
                    var_13 &= ((/* implicit */signed char) var_1);
                    var_14 = ((/* implicit */unsigned short) max((((unsigned long long int) (short)14)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0])))))));
                    var_15 = ((/* implicit */unsigned long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((max((6958519037217344673ULL), (((/* implicit */unsigned long long int) (unsigned short)16128)))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0 + 2] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12821)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
