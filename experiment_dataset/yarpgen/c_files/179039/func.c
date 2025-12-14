/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179039
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (_Bool)1))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63)))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((/* implicit */int) ((unsigned short) 1109467370U))))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_5 [i_0] [i_1]))));
            }
        } 
    } 
    var_15 &= ((long long int) ((unsigned int) ((long long int) 572694553U)));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_17 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)207)))) == (((unsigned int) arr_8 [i_4])))) ? ((((-(((/* implicit */int) arr_16 [i_4] [i_4] [i_2] [i_2])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) ((unsigned char) min((var_8), (((/* implicit */unsigned short) var_10))))))));
                            /* LoopSeq 3 */
                            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                var_18 += ((/* implicit */short) (+((~(6481531999624929214ULL)))));
                                var_19 |= ((/* implicit */long long int) (short)1040);
                            }
                            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                arr_23 [i_7] [i_3] [i_7] [i_3] [i_7] [i_3] |= ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_7] [i_7]))))) >= ((-(23U)))));
                                var_20 += ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_8 [i_4])))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                            {
                                arr_26 [i_2] [(unsigned char)10] |= var_3;
                                var_21 = ((/* implicit */unsigned char) arr_8 [i_2]);
                                var_22 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_14 [i_2] [i_3] [i_3]))))));
                                arr_27 [i_5] [i_3] [i_2] = ((/* implicit */unsigned int) (+(arr_7 [i_4] [i_2])));
                            }
                            arr_28 [i_2] [14] [i_2] [i_2] [i_3] [14] = ((/* implicit */_Bool) ((arr_24 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5]) & (((arr_24 [i_2] [i_2] [i_3] [i_2] [i_4] [i_5]) / (var_3)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18909)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : (0LL)));
                var_24 = ((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_2]);
                arr_29 [i_2] [i_3] = ((((-5791756791550108396LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)0)));
            }
        } 
    } 
}
