/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109550
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48108)) <= ((-(((/* implicit */int) (signed char)7))))))), (arr_6 [i_0] [i_1] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17427)) >> (((((/* implicit */int) (signed char)48)) - (46)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60762))) : (3307654514U))))));
                                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? ((-(((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) (unsigned short)48108))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (-240248579) : (((/* implicit */int) (unsigned short)17428)))) : (max((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [6ULL])) ? (((/* implicit */int) (unsigned short)17427)) : (((/* implicit */int) (unsigned short)17427)))), ((+(((/* implicit */int) var_12))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [16U] |= ((/* implicit */short) ((max((((/* implicit */int) (short)-4278)), (arr_9 [i_0] [i_0] [i_2]))) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_11))));
    var_17 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (unsigned short)7190)))))));
}
