/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147408
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (-(min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                    var_15 = ((/* implicit */unsigned short) (~(((unsigned int) 67092480U))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (4227874815U)));
                    var_16 = (~(((/* implicit */int) ((max((9007199254736896ULL), (1729382256910270464ULL))) == (((/* implicit */unsigned long long int) 4227874816U))))));
                }
            } 
        } 
    } 
    var_17 = var_7;
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (292783256) : (((/* implicit */int) (unsigned char)126))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_15 [i_3] [i_4] [i_4] = ((_Bool) (-(16717361816799281141ULL)));
                    arr_16 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        arr_17 [i_3] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-98)) : ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (292783234))));
        arr_18 [i_3] = ((/* implicit */unsigned char) ((short) arr_3 [i_3] [i_3] [i_3 - 2]));
    }
    for (short i_6 = 1; i_6 < 21; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] [(unsigned short)0] [i_6] &= ((/* implicit */unsigned short) arr_4 [i_9]);
                        var_20 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned char)1] [(unsigned char)1] [i_9]))))) ? (((/* implicit */unsigned long long int) min((218193111U), (((/* implicit */unsigned int) arr_22 [i_9] [i_7]))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_6] [i_7] [i_8])), (arr_24 [i_6]))))), (((/* implicit */unsigned long long int) 1371796503U))));
                        var_21 -= ((/* implicit */unsigned int) arr_4 [i_9]);
                    }
                } 
            } 
        } 
        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) 67092480U)), (6157138156223508284ULL))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_26 [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) arr_23 [i_6] [i_6])) : (((/* implicit */int) (signed char)95)))))) : (((/* implicit */int) ((((/* implicit */_Bool) -292783257)) || (((/* implicit */_Bool) min((607808235750262139LL), (((/* implicit */long long int) 67092480U))))))))));
    }
}
