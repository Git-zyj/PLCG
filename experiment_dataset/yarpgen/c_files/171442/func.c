/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171442
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (15088622966463339302ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */long long int) 1875769169U)) != (var_4)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_4))) && (((((/* implicit */long long int) var_2)) >= (((long long int) 814305707))))));
                var_12 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)209)), (524287)));
                arr_6 [i_0] = ((/* implicit */int) ((unsigned char) (unsigned char)46));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_4] = ((/* implicit */unsigned char) -770787545);
                    var_13 = max((((/* implicit */int) var_0)), (-814305707));
                    var_14 = ((/* implicit */_Bool) max((var_14), ((!((!(((/* implicit */_Bool) (short)-30428))))))));
                    arr_14 [i_2] [i_3] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (var_4))))));
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
                }
            } 
        } 
    } 
}
