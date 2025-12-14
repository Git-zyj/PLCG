/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152575
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)885)), (((min((1991912624U), (((/* implicit */unsigned int) (short)9028)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)36758)), ((-(arr_1 [i_0]))))))));
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36767))))) : ((~(arr_1 [i_0])))));
        var_16 = ((/* implicit */long long int) (~(var_5)));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_17 *= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) ((short) -810891027079645878LL))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)29462)), (((unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_13)))))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_14 [10LL] [i_2] [(_Bool)1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) (_Bool)1))))) : ((+(arr_13 [i_2] [i_2]))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((arr_13 [i_3 + 2] [i_2]) - (((/* implicit */long long int) 16383U)))))))));
                    var_20 ^= ((/* implicit */unsigned short) ((((_Bool) 0)) ? ((-(max((arr_13 [i_2] [i_2]), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_2])) / (((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) / (((unsigned int) ((long long int) var_11))))))));
                                var_22 = ((/* implicit */long long int) max((var_22), ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3646815384U)) ? (((/* implicit */long long int) 65535)) : (arr_21 [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_4 [(signed char)23])) ? (arr_8 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65504), (((/* implicit */unsigned short) var_11))))))))) : (max((294207909393917326LL), (((/* implicit */long long int) arr_18 [i_6] [i_3 + 2] [i_4] [i_6]))))))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned short)2810))));
                                var_24 -= ((/* implicit */short) arr_21 [i_3] [i_3] [i_3] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
