/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145938
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
    var_12 = ((((/* implicit */_Bool) (+(((((/* implicit */long long int) 153779185U)) / (var_4)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)48316), (((/* implicit */unsigned short) (_Bool)1)))))) + (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))))))) : (((min((((/* implicit */unsigned long long int) var_1)), (13297011315862527956ULL))) + (((((/* implicit */_Bool) (unsigned char)244)) ? (5149732757847023646ULL) : (var_8))))));
    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((15294956013911490591ULL) * (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) (signed char)127))))) : (((unsigned long long int) var_11)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((unsigned char) arr_0 [i_0]));
                            var_15 = ((/* implicit */_Bool) arr_1 [i_3]);
                            var_16 ^= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3])) && (((/* implicit */_Bool) -58075506))))), (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned int) arr_2 [i_1] [(_Bool)1])) : (10690058U))))), (((/* implicit */unsigned int) ((int) arr_9 [i_0] [i_2] [i_1] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)149)))))));
                            var_18 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [13LL] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (arr_1 [i_0])))) && (((/* implicit */_Bool) ((unsigned short) (_Bool)1))))));
                            var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_5])) || (((/* implicit */_Bool) 4284277238U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [(unsigned char)3] [i_5]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((arr_0 [i_0]) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1])))) + (2147483647))) >> ((((-(10690058U))) - (4284277223U))))))));
            }
        } 
    } 
}
