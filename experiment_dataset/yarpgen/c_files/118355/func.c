/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118355
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
    var_17 = var_4;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_0 [i_0]))));
                arr_6 [(unsigned char)7] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 36028762659225600ULL)) && (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 3766573812U)) || (((/* implicit */_Bool) (unsigned short)865)))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_8 [12U] [9LL]))));
                }
            } 
        } 
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((unsigned int) arr_1 [(signed char)14])) : (((/* implicit */unsigned int) arr_9 [i_2])))), (((/* implicit */unsigned int) arr_1 [11U]))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)223)), (268435328U))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 -= ((/* implicit */unsigned int) var_6);
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_6] [i_6] = ((/* implicit */long long int) var_3);
            arr_23 [i_6] = var_14;
        }
        for (signed char i_7 = 3; i_7 < 24; i_7 += 3) 
        {
            arr_26 [(_Bool)1] [19LL] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */int) (short)127)) != (((/* implicit */int) (unsigned short)32768))));
            arr_27 [i_7] [i_5] = ((/* implicit */unsigned int) ((arr_24 [i_7 - 3] [i_7 - 2] [i_7 - 3]) >= (arr_24 [i_7 - 3] [i_7 - 2] [i_7 - 3])));
        }
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)127))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6544)) ? (((/* implicit */int) arr_25 [11LL] [i_8] [i_8])) : (((/* implicit */int) ((_Bool) var_4)))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_8])) + (((/* implicit */int) (unsigned short)16863)))))));
        arr_32 [i_8] = ((((/* implicit */long long int) 1712509656U)) + (((((/* implicit */_Bool) arr_17 [i_8])) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31722))))));
        arr_33 [i_8] [i_8] = (!(((/* implicit */_Bool) var_4)));
    }
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((unsigned int) (unsigned short)512))))), ((((!(((/* implicit */_Bool) arr_20 [(signed char)19] [i_9] [i_9])))) ? (var_7) : (((/* implicit */long long int) 33554431U))))));
        arr_36 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32768)) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [i_9] [i_9])), (var_11))))))) : (max((arr_21 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) arr_28 [i_9] [i_9]))))));
        var_28 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned short) ((var_7) != (((/* implicit */long long int) arr_29 [i_9]))))), (((unsigned short) var_7)))));
    }
}
