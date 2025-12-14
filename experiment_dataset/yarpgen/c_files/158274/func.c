/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158274
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_0 [8U]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)-27436)) ^ (((/* implicit */int) (short)27435)))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_0 [i_0]))));
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) (_Bool)1);
                        arr_16 [(unsigned char)10] [i_0] [i_3] [i_3] [(unsigned short)20] = ((/* implicit */_Bool) arr_1 [i_0]);
                        arr_17 [i_0] [i_0] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_4])) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (unsigned char)16)))) * (((/* implicit */int) (((-(((/* implicit */int) arr_4 [i_3])))) != (((/* implicit */int) arr_13 [14ULL] [i_3] [14ULL] [(unsigned char)10])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_2 + 2])) * (((/* implicit */int) arr_4 [i_2 - 1])))) & (((((/* implicit */_Bool) (unsigned short)32958)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_2 + 3]))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((unsigned short) 127U))));
                            var_24 = ((/* implicit */unsigned long long int) var_4);
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)218)), (arr_5 [i_0] [i_2] [i_2])))) - (((int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_18 [i_0] [i_0] [i_3] [i_4 - 2] [(_Bool)1] [(unsigned char)21]))))));
                    }
                } 
            } 
        } 
    }
    var_26 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_1))))) << (((/* implicit */int) ((unsigned short) var_18))))));
    var_27 = ((((/* implicit */_Bool) (signed char)-93)) && (((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_18)))))));
}
