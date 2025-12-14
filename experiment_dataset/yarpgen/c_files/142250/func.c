/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142250
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
    var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22614)) * (((/* implicit */int) (signed char)-88))))) ? (((9029848804153701551ULL) << (((/* implicit */int) (_Bool)1)))) : ((~(18013186572888976516ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) -2119110246)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_3 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((2218536513648347076ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) >> ((((~(2061235575U))) - (2233731710U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15643895339826058732ULL)))))) + ((+(12521207848738524785ULL))))))))));
                var_18 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)25773))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (-((~(((unsigned long long int) var_14))))));
                            var_20 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 3403031422908905863ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)127))))));
                            var_21 = ((/* implicit */signed char) max((var_21), ((signed char)(-127 - 1))));
                        }
                    } 
                } 
                arr_8 [i_0] [i_1] [i_1] = min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (+(666664877580990429ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)768))))) : (((((var_6) + (2147483647))) >> (((/* implicit */int) arr_1 [i_1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) (unsigned char)138))))));
}
