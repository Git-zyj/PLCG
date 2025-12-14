/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160167
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_3 [i_0 + 1] [i_4]))));
                            var_19 = ((/* implicit */short) -1876992950);
                        }
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            arr_16 [i_0 + 1] [i_1] [i_2 + 3] [i_3] [i_1] [i_5 - 2] = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)82))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)171)), ((short)32767)))) ? (2516747719U) : (max((((/* implicit */unsigned int) (unsigned char)248)), (1778219576U))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (short)7602)) & (((/* implicit */int) (signed char)0))))))));
                            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(508065316)))) ? (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) ((unsigned char) var_12))))) - (((/* implicit */int) arr_14 [i_1] [i_3]))));
                        }
                        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_3] [i_2] [i_2] [i_1] [i_1]))));
                    }
                    var_22 = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) min(((~(((((/* implicit */_Bool) (signed char)-6)) ? (3543791686005246469LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))), (max((((/* implicit */long long int) ((unsigned int) var_10))), (((((/* implicit */_Bool) 1567676906U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160)))))))));
}
