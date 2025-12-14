/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182798
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)53713)), (((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_0] [i_4] = ((/* implicit */long long int) arr_6 [(short)0] [i_2] [i_3] [i_4]);
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_4])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 + 1]))));
                                var_13 -= ((/* implicit */unsigned char) ((int) (short)-19));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(unsigned short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)15))))) ? ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2])))) : (((/* implicit */int) arr_2 [i_1 + 1]))));
                    var_14 = ((arr_7 [i_2 + 1] [i_1 - 1] [i_2]) << (((arr_7 [i_2 - 1] [i_1 + 1] [i_2]) - (5694757629471739788LL))));
                }
                var_15 = ((/* implicit */short) ((((/* implicit */int) var_4)) << (((((((/* implicit */int) (unsigned short)53707)) >> (((((/* implicit */int) (short)36)) - (5))))) << (((((/* implicit */int) (signed char)-1)) + (12)))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((((/* implicit */int) arr_10 [i_1] [i_5] [i_6])) == (((/* implicit */int) max((var_4), ((short)5169)))))))))));
                                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */short) (unsigned char)81)), ((short)-32761))), (((/* implicit */short) (unsigned char)0))))) ? ((~(((/* implicit */int) (unsigned short)54942)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-32754)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)48071)) : (((/* implicit */int) (_Bool)1))))))));
}
