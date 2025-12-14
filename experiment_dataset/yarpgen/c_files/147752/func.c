/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147752
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */short) ((_Bool) -6062853429963314771LL))), (var_9)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [7] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), ((+(arr_4 [i_0] [15] [15])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [8LL] = ((/* implicit */signed char) ((var_16) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))))));
                                arr_13 [i_4] [0ULL] [i_4] [0ULL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-5063338142303486916LL)))) ? (((((/* implicit */_Bool) 2010936657351233815LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32691)))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) : (((arr_0 [i_4]) << (((/* implicit */int) arr_10 [i_0] [i_1]))))));
                                arr_14 [i_4] [i_0] |= ((/* implicit */unsigned char) ((long long int) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)22)))))))));
                                arr_15 [i_4] [9] [4U] [11ULL] [11ULL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_2] [i_2] [i_3]), (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)22), (((/* implicit */unsigned short) var_0)))))) : ((+((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        arr_26 [i_0] [i_0] [i_6] [i_6] [i_7] = ((/* implicit */int) 9223372036854775807LL);
                        arr_27 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((3203851746U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [3ULL] [i_5] [i_5])))))));
                    }
                } 
            } 
            arr_28 [(unsigned short)17] [i_5] [i_5] = ((/* implicit */long long int) (unsigned char)118);
        }
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_30 [15] [i_0] = ((/* implicit */int) min(((+(16832099692479524305ULL))), (min((((/* implicit */unsigned long long int) (unsigned short)65504)), (16832099692479524305ULL)))));
    }
    var_18 = ((/* implicit */unsigned short) 1091115556U);
}
