/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135720
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
    var_18 = ((/* implicit */_Bool) ((max((var_1), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)998)) && (((/* implicit */_Bool) var_3))))))) % (var_4)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)30569))))))) <= (((/* implicit */int) ((short) arr_1 [i_1])))));
                arr_6 [i_0] [i_1] [i_1] = (short)-30540;
                arr_7 [(_Bool)1] [i_1] [(unsigned short)13] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)30559))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((int) ((unsigned short) (short)30543))) : ((~(arr_1 [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_4), (((((/* implicit */_Bool) 8437217418786776757ULL)) ? (var_13) : (var_1))))))));
    var_20 = (~(var_5));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)30557))));
        arr_12 [(short)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 933499444777464277ULL))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_2 + 1]))))));
        arr_14 [i_2] = ((/* implicit */signed char) var_16);
        arr_15 [i_2 + 2] [i_2 + 2] = ((/* implicit */signed char) var_17);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_18 [i_3] = ((/* implicit */short) (~((-(((/* implicit */int) var_3))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            arr_21 [i_3] [i_3] = ((/* implicit */int) (short)-20096);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_26 [i_3] [(short)1] = ((/* implicit */_Bool) var_16);
                arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (short)30575);
            }
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        arr_33 [i_3] = ((/* implicit */short) arr_29 [1] [i_4] [16U] [i_7]);
                        arr_34 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)30569)) ? (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30539))))))));
                    }
                } 
            } 
        }
        arr_35 [i_3] = ((/* implicit */int) (short)3527);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    {
                        arr_44 [i_8] [i_8] [i_10] [i_10] [i_3] = ((/* implicit */unsigned int) var_1);
                        arr_45 [i_3] [i_10] [i_9] = ((/* implicit */unsigned long long int) (short)30580);
                        arr_46 [i_3] [i_3] [(_Bool)1] [i_10] [i_3] = ((var_7) ? (arr_30 [i_3] [i_10] [i_9]) : (((/* implicit */int) (short)-30544)));
                    }
                } 
            } 
        } 
        arr_47 [i_3] [i_3] = (_Bool)1;
    }
}
