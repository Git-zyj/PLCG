/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181217
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) -1926614888);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13754981893669376142ULL)))))) : (((long long int) arr_13 [(unsigned char)4] [i_2] [i_2] [i_3 + 1] [i_2] [i_2]))));
                            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)15] [i_3 - 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)23)))))) - (((4691762180040175473ULL) & (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6525203464706010697LL))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(2047)))) ? (4691762180040175473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))))) != (((/* implicit */unsigned long long int) 4294967295U))));
                var_21 = ((/* implicit */signed char) (unsigned char)169);
                arr_14 [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(-2068)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (arr_5 [i_0] [i_1])))) : ((-(65535ULL)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_3);
    var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)54022))));
}
