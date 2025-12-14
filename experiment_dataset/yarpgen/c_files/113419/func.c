/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113419
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
    var_15 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) (unsigned short)258)) != (-833493957))) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (_Bool)1)))));
    var_16 *= ((/* implicit */unsigned long long int) ((var_13) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((((((/* implicit */int) (signed char)-99)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)45090)) - (45085))))))) + (286)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3287617177393058058LL)) ? (((arr_10 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) var_9))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) arr_9 [i_0] [i_0]))) / (arr_2 [i_0])));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) arr_13 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0]))) ? (5651340493856221143LL) : (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((_Bool) (_Bool)1)))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-1)), ((~(17666572764673088498ULL)))))) || (((/* implicit */_Bool) (~(min((463065061229773787LL), (((/* implicit */long long int) arr_10 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((arr_13 [i_0] [i_0] [i_1 + 2] [i_0] [i_0] [i_6]), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(unsigned short)14] [(unsigned short)14]))))))));
                                var_22 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-100)))) >> ((((~(((/* implicit */int) (unsigned char)255)))) + (260)))));
                                arr_23 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (((~((~(((/* implicit */int) var_1)))))) / ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (var_2))))))));
                                var_23 = ((/* implicit */unsigned short) (~((~((+(((/* implicit */int) (unsigned short)29950))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)106))))), (max((var_2), (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((int) (unsigned char)247)) : (((/* implicit */int) min(((signed char)-116), ((signed char)-99))))))) : (var_13)));
}
