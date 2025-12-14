/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129164
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), ((+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)51))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) : (9814218001781342241ULL)))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_16) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 2]))))))));
                var_19 = ((/* implicit */short) min((8632526071928209374ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)64)))))));
                var_20 = ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (short)-1)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((_Bool) (short)-30453)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_5))))) : (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178)))));
    var_22 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 14; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) >= (var_16))));
                            var_24 = ((/* implicit */long long int) arr_12 [i_3]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) ((unsigned short) arr_7 [i_2 - 3]));
            }
        } 
    } 
}
