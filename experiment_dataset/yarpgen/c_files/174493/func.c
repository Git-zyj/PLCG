/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174493
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_9 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(11013464064882923233ULL)))) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) arr_1 [i_0]))));
                        var_19 = min((((/* implicit */unsigned short) ((short) 4294967292U))), (max((arr_6 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */unsigned short) (unsigned char)0)))));
                        var_20 = ((/* implicit */short) min(((-(arr_4 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) var_17))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_21 *= ((/* implicit */signed char) min((var_16), (min((max((var_16), (7433280008826628383ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11013464064882923240ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))))));
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_12 [i_1]), (max((arr_4 [i_0] [i_1] [(signed char)14]), (((/* implicit */long long int) var_11))))))), ((+(var_16)))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16921))));
                        var_24 = ((/* implicit */short) var_1);
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_8 [i_1] [i_1] [i_1]))) ? (min((arr_12 [i_1]), (var_12))) : (((/* implicit */long long int) ((arr_8 [i_1] [i_2] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)193)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_25 *= ((/* implicit */signed char) arr_0 [i_0]);
                        var_26 = ((/* implicit */unsigned char) var_14);
                        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) arr_2 [i_1] [i_0]))));
                        var_28 = ((/* implicit */unsigned char) (signed char)98);
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_5])) >= (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_5]))));
                    }
                    var_30 = ((/* implicit */long long int) ((unsigned int) 11013464064882923240ULL));
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((arr_15 [i_2] [i_2] [i_1] [i_0] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [(short)2])))))) ? (7433280008826628383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4163)))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((((var_16) <= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-16922)) : (((/* implicit */int) (unsigned short)13494))))))) ? (3856659317104991023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
