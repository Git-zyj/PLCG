/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16274
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
    var_17 = ((/* implicit */long long int) (-((-(((((/* implicit */int) (signed char)102)) ^ (((/* implicit */int) var_3))))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) max((var_13), (var_6)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_15)) + (((/* implicit */int) arr_0 [i_1] [i_0])))), ((-(((/* implicit */int) var_3)))))))));
                arr_5 [i_1] = ((/* implicit */signed char) (((((~(var_11))) ^ (((/* implicit */unsigned long long int) -135580394)))) > (((/* implicit */unsigned long long int) ((long long int) (-(var_7)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) (((+((~(var_16))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_2] [i_2]))))));
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) max((((((/* implicit */int) var_8)) / (((/* implicit */int) (short)9627)))), ((-(((/* implicit */int) var_1))))))) <= (max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > (var_4)))), (4294967282U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    arr_17 [i_4] [i_4] [8U] [8] = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9622)))))))) <= ((+(((/* implicit */int) (short)-18362))))));
                    arr_18 [i_5] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (+(var_5)))), (min((((/* implicit */unsigned long long int) (short)18350)), (arr_7 [i_4])))))));
                    arr_19 [i_6] = ((/* implicit */int) (-(((long long int) arr_7 [i_6]))));
                }
            } 
        } 
    } 
}
