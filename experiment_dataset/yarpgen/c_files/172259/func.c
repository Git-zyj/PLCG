/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172259
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) (~(-1LL)));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_8)))) ? ((-9223372036854775807LL - 1LL)) : (max((((/* implicit */long long int) var_14)), (1468623660908482257LL)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_0] [13ULL] [i_3] [i_4] = ((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [0U] [i_4]))) : (0LL)));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [8U] = (-(((/* implicit */int) arr_0 [i_0])));
                            arr_18 [i_0] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_0] [i_4] |= ((/* implicit */long long int) ((_Bool) var_2));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)51622)) ? (((/* implicit */int) (unsigned short)51632)) : (((/* implicit */int) arr_8 [i_0])))), (((/* implicit */int) arr_8 [i_0]))));
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_3] [i_5] [i_5] |= ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (arr_13 [i_5] [i_1] [i_2] [i_3] [i_5]));
                            var_17 -= ((/* implicit */unsigned int) (~(-2179941406594737638LL)));
                            var_18 = ((/* implicit */unsigned short) (!((_Bool)1)));
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)(-32767 - 1)))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_26 [i_6 - 1])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) arr_24 [i_6 - 1] [i_6 - 1]))))));
                var_21 = ((/* implicit */short) (unsigned char)75);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32767))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */long long int) 469762048U)), (8525279096991434590LL))) : (((((/* implicit */_Bool) 0)) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))))));
}
