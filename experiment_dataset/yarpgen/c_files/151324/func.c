/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151324
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
    var_15 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)0] [i_1 - 1] |= ((/* implicit */unsigned char) (~(3363907123250483545ULL)));
                arr_6 [i_0] [i_1] [(unsigned short)14] |= ((/* implicit */unsigned char) ((int) (_Bool)1));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_11 [i_2] = -1764645511;
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((arr_13 [i_4] [i_3] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))))))));
                    var_16 = ((/* implicit */short) (signed char)-82);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_12 [i_3] [i_4]))));
                                var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3363907123250483545ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_18 [i_2] [i_3] [(short)3] [i_3])))) ? ((~(((/* implicit */int) var_13)))) : (((var_1) - (((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_16 [i_5] [i_3])) ? (((/* implicit */int) arr_16 [i_2] [i_6])) : (((/* implicit */int) (short)32762))))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    arr_24 [i_7] = ((/* implicit */short) min(((((((_Bool)1) && (((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2] [i_3] [i_7])))) ? (arr_7 [i_2] [i_7]) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_14)) : (arr_21 [i_7]))))), ((((-(((/* implicit */int) var_13)))) / (((/* implicit */int) var_13))))));
                    var_20 = ((/* implicit */unsigned char) var_13);
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (658480866) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(unsigned short)7] [i_7 - 1] [i_3] [i_2])) >> (((/* implicit */int) var_4))))))) ? ((+(17179869183LL))) : ((+(((long long int) 17611189376983766062ULL))))));
                    arr_25 [i_7] [i_3] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_10 [i_7 + 2])))));
                    var_22 -= ((/* implicit */signed char) (+(max((((/* implicit */int) (_Bool)1)), (var_12)))));
                }
            }
        } 
    } 
}
