/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12215
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
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) - (((var_14) ? (((/* implicit */int) (unsigned short)22856)) : (((/* implicit */int) var_4)))))))));
                var_20 *= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0] [(unsigned char)22] [(unsigned short)12]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0])) / (((/* implicit */int) arr_10 [i_0] [i_3]))));
                                arr_14 [(unsigned char)16] [(unsigned char)16] [i_2] [(_Bool)1] [i_4] = ((/* implicit */short) ((arr_6 [i_0] [i_0] [(short)12]) << (((/* implicit */int) arr_0 [i_0] [i_1]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((short) var_3))))) | (((/* implicit */int) (unsigned char)85))));
    var_24 *= ((/* implicit */_Bool) (signed char)-6);
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_25 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-57)))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_28 [i_5] [i_6] [i_6] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_5] [i_5]))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_5] [i_5])) != (((/* implicit */int) arr_24 [i_5] [i_6] [i_6] [(short)10] [i_9] [i_6]))))) ^ ((-(((/* implicit */int) (unsigned short)14996)))))))));
                                var_26 += ((/* implicit */long long int) (+(var_9)));
                                arr_29 [i_5] [i_5] [i_7] [i_5] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_27 [i_5] [i_6] [i_7] [i_8] [i_9]), (((/* implicit */long long int) arr_13 [i_5] [(unsigned char)18] [i_6] [i_7] [i_8] [i_8] [i_9]))))) ? (((arr_25 [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))))) : ((~(((((/* implicit */unsigned long long int) arr_22 [i_7] [i_5])) + (581987702826299537ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            {
                var_27 = ((/* implicit */unsigned int) ((((arr_34 [i_10] [i_11] [i_11]) < (((long long int) 961199000U)))) || (((/* implicit */_Bool) var_7))));
                var_28 -= ((/* implicit */_Bool) ((((/* implicit */int) (((-(var_9))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_31 [i_10] [8U]))))))) >> ((((+((+(1749009738))))) - (1749009732)))));
                arr_35 [i_10] [i_11] = ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_10] [i_10])) : (((/* implicit */int) (signed char)100)))) ^ (((/* implicit */int) arr_31 [i_11] [i_10])))) == (((/* implicit */int) min((arr_4 [i_10] [i_10] [i_10]), (arr_4 [i_10] [i_10] [(unsigned char)23])))));
            }
        } 
    } 
}
