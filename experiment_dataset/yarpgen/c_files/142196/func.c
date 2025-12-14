/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142196
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] [i_1] [i_0] = ((((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 1] [i_1 - 1])))) || (((/* implicit */_Bool) max((arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 1])))));
                            arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_1 + 1] [9ULL] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_20 *= ((((/* implicit */_Bool) (((_Bool)0) ? (arr_7 [i_1] [i_1] [i_5 + 1] [4ULL]) : (arr_7 [i_0] [i_0] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-119))))) : ((~(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                            arr_18 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) arr_6 [i_0])) == (12239110802042822686ULL))) ? ((~(((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) arr_4 [i_5 - 1] [i_4] [i_1 + 2])))) << ((((~(((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_1 - 1])))) + (13)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0]))));
                            /* LoopSeq 1 */
                            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                            {
                                var_22 |= ((/* implicit */unsigned short) arr_8 [i_0] [i_1 + 3] [i_8]);
                                arr_29 [i_0] [i_8] [i_6] = ((/* implicit */signed char) ((0U) / (((/* implicit */unsigned int) 760827632))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)126)) << (((((/* implicit */int) (unsigned short)255)) - (246)))))) >= ((-(arr_13 [i_8 + 1] [i_1 + 3] [i_0] [i_0])))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_16 [i_8 + 1] [i_1 + 1] [i_1 + 1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_7] [i_1 + 3])) ? (-4645477744241327026LL) : (arr_3 [i_7] [i_7] [i_1 + 2])))) : (arr_16 [i_7] [i_0] [i_1 + 2] [i_0]))))));
                            }
                        }
                    } 
                } 
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_28 [12] [i_1 + 1])) : (arr_15 [i_0])))) ? (((arr_26 [12ULL] [12ULL] [i_1 + 1] [i_1 + 3] [i_1]) ? ((-(arr_28 [(unsigned short)14] [i_1]))) : (((/* implicit */unsigned int) -2147483636)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_8);
}
