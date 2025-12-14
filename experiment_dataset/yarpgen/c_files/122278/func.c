/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122278
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (unsigned char)103))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139))) <= (492596231U)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) -72057594037927936LL)))))));
                                var_18 -= ((/* implicit */short) (-(((((((/* implicit */int) arr_8 [(unsigned short)7] [i_1] [i_1] [i_4] [(unsigned short)20])) ^ (((/* implicit */int) (unsigned char)140)))) / (((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) (unsigned char)140))))))));
                                var_19 ^= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 2] [i_3] [i_4])) && (var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) 492596217U)) / (10588891689483642472ULL))))))));
    var_21 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) -955139900))));
                    arr_21 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)116)) >= (((/* implicit */int) arr_17 [i_5])))))) & (((var_0) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [(signed char)7] [(_Bool)1] [i_5])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        for (long long int i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_28 [i_6] [5LL] [i_6] [i_8] [i_6] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)8192))))));
                                arr_29 [i_8] [i_8] [(_Bool)1] [i_8] [(signed char)3] = (!(((/* implicit */_Bool) (unsigned char)0)));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14045)) - (((/* implicit */int) (unsigned char)161))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)118)) > (((/* implicit */int) (short)-10980)))) ? (((var_16) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6]))))) : (((long long int) var_14))));
                }
            } 
        } 
    } 
}
