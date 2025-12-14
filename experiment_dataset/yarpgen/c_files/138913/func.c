/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138913
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_12))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) > (var_9)))), (var_10)));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((short) (((+(814817566U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)216)) + (((/* implicit */int) var_3)))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */int) (signed char)4)) / (((/* implicit */int) ((short) ((signed char) var_7))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-3))))))));
                                var_18 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) -2030906557)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1)))) > (((((/* implicit */int) (!(((/* implicit */_Bool) 2030906554))))) % (((-2030906541) + (((/* implicit */int) (unsigned char)12))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_4))))));
}
