/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188567
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) (!((!(arr_7 [i_0] [0LL] [i_1])))))))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_2] [i_3 - 1] [i_0]) : (((/* implicit */unsigned int) arr_10 [i_2] [(_Bool)1]))));
                                var_19 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (unsigned char)201)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)47251)) ? (max((var_9), (((/* implicit */long long int) (unsigned short)18296)))) : (((/* implicit */long long int) ((/* implicit */int) (short)20500)))))))));
                            arr_17 [i_0] [i_1] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) arr_0 [i_5 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_7;
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1333114682653837138LL)) ? (1333114682653837137LL) : (((((/* implicit */_Bool) 1590083220)) ? (-1333114682653837143LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
}
