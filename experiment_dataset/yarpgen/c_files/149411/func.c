/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149411
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_1))));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) < (var_0))))))), (-3972720201451775375LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2])) < (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2] [i_2 - 1])))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_3))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_1 + 1] [i_2 + 2])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
                        var_16 = ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_2 + 2] [i_2 - 1] [i_1 - 2]))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_1 - 2] [i_0])) ? (14676968311478711727ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63)))))));
                        var_18 = ((/* implicit */signed char) var_4);
                    }
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_1]))))) && ((!(((/* implicit */_Bool) arr_7 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-25664)) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32742))) : (var_3)))) && (((/* implicit */_Bool) (unsigned char)28)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_10);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((~((~(var_0))))) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
}
