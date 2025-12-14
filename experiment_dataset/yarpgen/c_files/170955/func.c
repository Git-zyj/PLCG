/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170955
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((signed char) ((((_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [(unsigned short)12] [i_1])))));
                var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((short) var_9))))) : (arr_0 [i_0])));
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_12))) && ((!(((/* implicit */_Bool) var_3))))))), ((+(((/* implicit */int) max(((signed char)127), ((signed char)(-127 - 1)))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((6709974937685153895LL), (((/* implicit */long long int) arr_5 [i_1]))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((((signed char) 2378344692817967433ULL)), (((/* implicit */signed char) ((((/* implicit */_Bool) 903980572)) || (((/* implicit */_Bool) arr_0 [9LL])))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_3] [i_4])), (var_12))))))));
                    var_25 = ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_4] [i_3])) || (var_14)));
                    var_26 = (unsigned short)20787;
                }
            } 
        } 
    } 
}
