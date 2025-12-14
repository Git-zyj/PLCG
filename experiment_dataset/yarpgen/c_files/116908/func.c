/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116908
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1]))) > (((((/* implicit */_Bool) (short)17946)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)53))))));
                arr_5 [i_0] [i_0] [(unsigned short)6] |= ((/* implicit */unsigned long long int) (unsigned char)173);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_11))));
                                var_15 *= (!(((((/* implicit */_Bool) arr_8 [i_3] [i_1 - 1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1])))));
                                arr_14 [(unsigned short)14] [i_1] [i_0] [(unsigned short)14] [i_0] = ((/* implicit */_Bool) (~(min((max((290802347), (((/* implicit */int) (unsigned char)43)))), (((((/* implicit */int) arr_4 [i_0] [i_2])) | (((/* implicit */int) var_4))))))));
                                arr_15 [i_0] [16LL] [i_3] [i_2] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21244)) ? (3745133581984450017ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10697)))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((arr_10 [(unsigned char)7] [(unsigned char)7] [i_2] [i_2] [i_2]), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16842)) || (((/* implicit */_Bool) (short)22956)))))) : (max((arr_0 [i_2]), (((/* implicit */unsigned int) var_5)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (unsigned short)19822))));
                arr_22 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */int) (short)5944)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)48694)))))));
    var_19 *= ((/* implicit */unsigned short) var_3);
}
