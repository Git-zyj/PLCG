/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104500
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_0] [i_0] [(unsigned char)11] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)11019)) | (((/* implicit */int) arr_2 [i_2] [11U])))) ^ (((((((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2 - 1])) | (((/* implicit */int) arr_9 [i_0] [10ULL] [10ULL] [i_2 - 2] [(short)1])))) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [(unsigned char)12] [i_0]))))));
                            var_18 ^= ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) > (13205041541325941889ULL)))))) - (max((arr_10 [i_1] [7] [i_1] [i_1 + 2] [i_1 + 2]), (((/* implicit */int) arr_1 [i_1 + 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])) - (((/* implicit */int) ((short) arr_3 [i_0] [i_1 + 1])))))));
                    var_20 = max((((((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (536870911U))) << (((8496660572143514793ULL) - (8496660572143514781ULL))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (511899767) : (((/* implicit */int) (unsigned char)139))))), (max((arr_5 [5LL]), (((/* implicit */unsigned int) (short)14)))))));
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 20U)) ? (5241702532383609726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0)))) : (13205041541325941889ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_7] [(signed char)1] [1ULL] [i_7] [i_7 + 4] [i_7] = min(((+(1460327802U))), (((/* implicit */unsigned int) ((arr_9 [i_0] [i_1 + 2] [i_5] [i_7] [10U]) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [1U])) : (((/* implicit */int) (short)-15))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((short) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : ((+(1460327802U)))))))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */signed char) (~(max(((~(((/* implicit */int) (unsigned short)42598)))), (arr_17 [i_1 + 1] [i_1] [i_1 + 1] [i_1])))));
            }
        } 
    } 
    var_24 *= ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (~(var_7)))))));
    var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_14)))))))));
    var_26 ^= ((/* implicit */unsigned short) max(((~(var_9))), (((/* implicit */unsigned long long int) var_5))));
    var_27 = ((/* implicit */unsigned long long int) var_15);
}
