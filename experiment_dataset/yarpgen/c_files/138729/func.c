/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138729
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_1)))))));
    var_16 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */int) ((((/* implicit */_Bool) -810752956)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))) : (((/* implicit */int) ((((/* implicit */int) (short)24602)) == (810752971))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [(short)6] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [6U] [i_0] [i_3])) ? (((/* implicit */int) arr_1 [i_0] [13LL])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])))) ^ (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))))), (((((/* implicit */_Bool) (short)24583)) ? (3890001991497734829LL) : (-4516340871396989867LL)))));
                            var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) 810752945)), (-3890001991497734816LL)));
                            arr_14 [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = arr_2 [i_0];
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) (((-(-4390088773921327189LL))) - (((/* implicit */long long int) ((/* implicit */int) ((-3890001991497734816LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)62))))))))))));
                var_18 = min((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-24602)), (3890001991497734829LL)))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [(signed char)10])) : (((/* implicit */int) (!(((/* implicit */_Bool) -3890001991497734827LL))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
