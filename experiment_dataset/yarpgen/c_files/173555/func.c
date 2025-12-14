/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173555
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 2732336908U))));
                var_20 -= ((/* implicit */unsigned int) (-(5184140322772889905LL)));
                arr_6 [i_0] [10U] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 1562630387U)) || (((/* implicit */_Bool) (short)29670)))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) (-(arr_5 [i_1])));
                arr_10 [i_1] = ((/* implicit */short) ((_Bool) var_18));
            }
            arr_11 [i_0 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 + 1]))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) | (((/* implicit */int) (!(((/* implicit */_Bool) 2732336908U)))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_23 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_4 [i_0] [i_0] [8U] [8U])))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_20 [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((-7381161243864927051LL) < (-5184140322772889895LL)));
                            var_24 = ((/* implicit */unsigned int) (~(var_10)));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            arr_23 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)21218)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)2275)))))) : (133169152U)));
            arr_24 [i_0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0 + 1]))));
        }
        var_25 = ((/* implicit */short) ((arr_2 [i_0 - 1] [i_0 + 1]) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_0])))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((((/* implicit */int) ((short) -5184140322772889925LL))) - (((/* implicit */int) var_8))))));
    var_27 = var_17;
}
