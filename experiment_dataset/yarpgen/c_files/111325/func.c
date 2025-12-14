/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111325
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) min((8763740097858410648LL), (((/* implicit */long long int) (unsigned char)120))))) ? (min((4988543870333962426ULL), (13458200203375589190ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_3 - 3] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (-2884174246255391021LL)))) : (max((((/* implicit */unsigned long long int) (unsigned short)38908)), (4988543870333962426ULL))))) & (((/* implicit */unsigned long long int) max((var_4), ((~(((/* implicit */int) (unsigned char)56)))))))));
                            arr_10 [i_2] [i_2] = ((/* implicit */long long int) (_Bool)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) 258490386))) << (((((((/* implicit */_Bool) var_4)) ? (12487189380549524180ULL) : (((/* implicit */unsigned long long int) var_3)))) - (12487189380549524164ULL))))) < (((/* implicit */int) arr_0 [i_4])))))));
                            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13458200203375589189ULL)) ? (((/* implicit */int) (unsigned short)40170)) : (((/* implicit */int) (signed char)-77))));
                            arr_15 [i_4] = ((/* implicit */unsigned char) (signed char)78);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (max((((/* implicit */unsigned long long int) (unsigned short)51786)), (4988543870333962443ULL)))))));
}
