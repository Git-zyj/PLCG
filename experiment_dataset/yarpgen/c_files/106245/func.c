/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106245
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) 1001316747U);
                    var_15 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) 3314841001849173256LL)) / (max((var_10), (((/* implicit */unsigned long long int) 3071982005U))))))));
                    arr_9 [i_1] [i_0] = ((/* implicit */int) (-(2642914310640416291ULL)));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)3)) / (((/* implicit */int) (((-(var_10))) >= (((((/* implicit */_Bool) 15803829763069135325ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (2642914310640416291ULL))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_4)), (1222985301U))), (max((3071982005U), (1222985279U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                var_18 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) > ((+(var_9))));
                arr_15 [(unsigned char)15] [i_4] = ((/* implicit */short) min((((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */int) (signed char)100)) + (((/* implicit */int) max((var_2), (var_7))))))));
                arr_16 [i_3 - 1] = ((/* implicit */_Bool) 4294967295U);
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((var_10), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2192479143758426062ULL)) && (var_4))))))) && (((/* implicit */_Bool) 2192479143758426036ULL))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_9), ((+(3071982001U))))))));
}
