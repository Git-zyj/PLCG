/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167384
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1])))))) && (((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_12)), (var_16)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) 5601113079046803440ULL))));
                            arr_12 [i_0] = ((/* implicit */signed char) min((((((((/* implicit */unsigned int) -1910736668)) < (18U))) ? (arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0 + 1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33207))))) != (((12845630994662748189ULL) % (5601113079046803426ULL))))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_1)))))))), (arr_7 [i_1 - 1] [i_1 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned short)1))))), (min(((unsigned short)29600), (((/* implicit */unsigned short) (signed char)-1))))))) ? ((-((~(((/* implicit */int) var_15)))))) : (((/* implicit */int) ((short) var_14)))));
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)37479))));
}
