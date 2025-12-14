/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167293
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
    var_18 = ((/* implicit */unsigned long long int) var_15);
    var_19 = ((/* implicit */unsigned short) (unsigned char)74);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) var_13);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned char)63)))) != (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned char)78)))))), ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) | (-1LL))))))));
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_0] [(signed char)8] = ((/* implicit */unsigned char) max((((long long int) ((long long int) (unsigned short)32780))), (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)73), (((/* implicit */unsigned char) (signed char)-116))))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)49)), ((unsigned short)54117)))) == (((/* implicit */int) (unsigned char)255))));
                                var_23 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)-32767)) / (((((/* implicit */_Bool) (short)9793)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_24 = ((max((((/* implicit */unsigned long long int) (unsigned char)60)), (18446744073709551601ULL))) / (((/* implicit */unsigned long long int) ((-9223372036854775806LL) / (arr_4 [i_0] [i_0] [i_2 + 3])))));
                    var_25 &= ((/* implicit */signed char) (unsigned char)161);
                }
                var_26 ^= 31ULL;
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_19 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_0 - 1])) - (59747)))))) : (((/* implicit */signed char) ((((/* implicit */int) var_13)) >> (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_0 - 1])) - (59747))) + (43839))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6] [4LL] = var_6;
                                arr_26 [i_0] [i_0] [5LL] [i_6] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (31ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-11032))) & (-197311827030882787LL))))));
                            }
                        } 
                    } 
                    var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967273U)) / (arr_5 [i_1] [i_0 - 1] [i_1])));
                    arr_27 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) arr_12 [i_1] [i_5] [0LL] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)10829)) || (((/* implicit */_Bool) arr_2 [i_5] [i_5])))))));
                }
            }
        } 
    } 
}
