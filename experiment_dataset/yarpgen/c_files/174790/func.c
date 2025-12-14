/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174790
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
    var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) - (max((var_0), (((/* implicit */long long int) var_7))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */int) arr_3 [2LL] [(short)5])), (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_5)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = (unsigned char)142;
                            arr_17 [i_2 + 3] [i_1] [i_2 + 3] [i_2 + 1] = ((/* implicit */int) var_1);
                        }
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_18 |= ((/* implicit */unsigned long long int) ((short) var_10));
                            var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) : (((var_7) | (arr_8 [i_2] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((~((+(var_0)))))));
                            var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) != (arr_11 [i_0] [i_1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)162)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) var_12))));
                        }
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-89)) * (((/* implicit */int) min(((short)0), (((/* implicit */short) (unsigned char)162)))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned short)57629))));
                        arr_22 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_3 - 1] [i_1] [i_1] [i_0]))));
                        arr_23 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2 - 1] [i_2 + 2] [i_3 + 1])) < (((/* implicit */int) var_14))))) <= (((/* implicit */int) var_11)))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_0), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((_Bool) (unsigned char)17)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)56366)) << (((18446744073709551612ULL) - (18446744073709551608ULL)))))))) : (var_1)));
}
