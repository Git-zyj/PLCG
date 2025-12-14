/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174737
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+((-(((/* implicit */int) ((((/* implicit */int) (signed char)92)) != (((/* implicit */int) (signed char)-3))))))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 + 1]))) <= (8676234300277758883LL)))), (((1944590893U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-32756)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (-8258010832266768854LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))) & (arr_1 [i_1 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) (unsigned char)254);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) (~(((unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-17)))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-7), ((signed char)-42))))))) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-2)) || ((_Bool)1)))), ((signed char)34))))));
                                var_17 = ((/* implicit */unsigned int) (-(((6444277837810784347ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_17 [i_1] [i_2] = ((/* implicit */long long int) (((((-(arr_11 [i_4] [i_2 + 3]))) | (((/* implicit */long long int) ((unsigned int) (_Bool)1))))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61190))))) ? (arr_11 [i_3] [i_3]) : (((/* implicit */long long int) (+(arr_0 [i_3] [i_3])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) -1795574499910722393LL))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 239547613U)) ? (-1) : (((/* implicit */int) (short)-11555)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (1022310388))))) | (((((/* implicit */_Bool) (signed char)-20)) ? (591371271U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (short)229)))), (((/* implicit */int) var_13)))))));
}
