/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170305
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)0))));
                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (short)-25)))), (((/* implicit */int) (short)9084))));
                arr_6 [i_0] = ((/* implicit */unsigned int) var_11);
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (short)1)) << (((((((((/* implicit */int) var_3)) | (((/* implicit */int) var_6)))) | (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (short)-9105)))))) + (151))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-11046)) / ((-(((/* implicit */int) (signed char)47))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)55)) + (((/* implicit */int) (signed char)46)))))));
                    arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11))))) != (((/* implicit */int) var_5)))))) : (var_1)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((((/* implicit */int) ((9223372036854775807LL) > (var_7)))) - (((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) << (((var_4) + (6379167289192738917LL)))));
}
