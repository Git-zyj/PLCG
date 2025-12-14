/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177194
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_17)))) ? ((+(((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) (signed char)64))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [(short)7] [(signed char)8] [i_1] [(unsigned char)21] [(unsigned char)8] [i_4] [11LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56038)) & (((/* implicit */int) (signed char)3))))) && (((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)78)))))));
                                arr_15 [(short)7] [i_3] [i_1] [(short)7] [(short)7] [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)1)) & (((/* implicit */int) (short)29038)))));
                                arr_16 [(unsigned short)2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_3] [15LL]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                    var_22 = ((/* implicit */int) (unsigned char)189);
                }
                var_23 = ((/* implicit */short) arr_12 [i_0] [(_Bool)1] [i_0] [(short)11] [i_0] [i_0] [(_Bool)1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_5] [(unsigned short)2] [i_6])), ((~(((/* implicit */int) arr_4 [i_5] [i_5 + 3] [i_6]))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)182))))) < (((/* implicit */int) arr_13 [i_5 + 3] [14ULL] [i_5 + 1])))))));
                arr_23 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_3 [i_5 + 3])), (arr_9 [i_5 + 2] [i_5 - 1] [i_5])))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [12ULL])) ? (5574576385175774358ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)229)), (2568044353U))))));
            }
        } 
    } 
}
