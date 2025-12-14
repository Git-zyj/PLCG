/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102280
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
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    var_17 = ((/* implicit */short) ((((var_7) ? (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) <= (((/* implicit */unsigned int) min((((/* implicit */int) ((-2085857078) != (((/* implicit */int) var_3))))), ((~(((/* implicit */int) (unsigned short)50269)))))))));
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) 0ULL);
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))) * ((+(9ULL)))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_6 [i_2]))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)-9234)))))));
                        arr_19 [i_3] [i_3 - 1] [i_3] [i_3] = ((/* implicit */short) arr_7 [i_3 - 1]);
                        var_23 = ((/* implicit */unsigned char) arr_11 [i_3] [i_4]);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3] [i_3])) >> (((-10) + (29)))));
                    }
                    var_25 = ((/* implicit */int) var_5);
                }
            } 
        } 
        arr_20 [(unsigned short)1] = ((/* implicit */unsigned int) (signed char)86);
        arr_21 [i_3] [i_3] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3] [i_3]))));
    }
}
