/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1491
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
    var_12 = ((/* implicit */short) max(((-(4227619359U))), (((/* implicit */unsigned int) (signed char)15))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
            var_13 += ((/* implicit */short) (unsigned char)71);
            var_14 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))));
            arr_5 [i_0] = ((/* implicit */unsigned short) max(((-(var_2))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) 4227619350U)))))));
            var_15 -= ((/* implicit */long long int) (unsigned char)151);
        }
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                            arr_15 [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned short) ((short) 1909431710650414111ULL)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 14368769993431053967ULL);
                            arr_17 [i_0] [i_5] [i_4] [i_3] [i_2] [i_2] [i_0] = ((unsigned char) var_7);
                        }
                    } 
                } 
                var_17 |= (+((+(var_8))));
            }
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_18 [i_6] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)121)))), (((/* implicit */int) (unsigned char)151))))) : (max((((/* implicit */unsigned long long int) (unsigned short)48472)), (var_2)))));
                arr_20 [i_0] [i_6] &= ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) 2009697530)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24349))) : (-7756123380571506814LL))))), (((/* implicit */long long int) arr_11 [(_Bool)1] [i_2 - 1] [i_6] [6LL] [i_6]))));
            }
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(var_11))))))) ? ((~((+(-4700394536813186838LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]))))) ? (max((-4700394536813186838LL), (((/* implicit */long long int) (unsigned char)112)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48479)))))));
            arr_21 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4700394536813186828LL))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        var_20 -= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_13 [i_7] [i_0] [i_2 - 1] [i_0] [i_0] [i_7]), (arr_13 [i_7] [i_7] [i_2 + 1] [i_2] [i_2] [i_7]))))));
                        arr_28 [i_7] [i_0] [i_7] [i_8] [i_8] = (+(min((max((((/* implicit */unsigned long long int) var_11)), (arr_26 [4LL] [4LL] [i_7] [i_8]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-37))))))));
                        var_21 = ((/* implicit */int) arr_26 [i_2 - 1] [i_7] [i_2] [i_0]);
                        var_22 = ((/* implicit */int) arr_3 [i_0] [i_8]);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned char) arr_38 [i_0] [i_0] [i_0] [i_0] [(unsigned char)5]);
                        var_24 &= 1677172082;
                    }
                } 
            } 
        } 
        arr_39 [i_0] = var_2;
        arr_40 [i_0] = max(((-(((((/* implicit */_Bool) 567065672U)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) (-(((/* implicit */int) var_4))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = ((/* implicit */_Bool) var_10);
        var_25 ^= ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_13 [(unsigned short)2] [i_12] [(unsigned char)10] [i_12] [i_12] [i_12]))))) ? ((~(((/* implicit */int) arr_11 [i_12] [i_12] [(short)6] [i_12] [i_12])))) : (((/* implicit */int) (unsigned char)243)))))));
        var_26 = ((/* implicit */short) max((1786070993755269784LL), (((arr_22 [i_12] [i_12] [i_12] [i_12]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        arr_44 [i_12] [i_12] = ((/* implicit */long long int) ((int) arr_41 [i_12]));
    }
    for (int i_13 = 3; i_13 < 17; i_13 += 2) 
    {
        arr_47 [i_13] = ((/* implicit */unsigned int) var_3);
        var_27 -= ((/* implicit */int) ((max((arr_46 [i_13 + 1] [i_13 - 1]), (((/* implicit */unsigned long long int) (unsigned char)167)))) % (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)163)))))))));
        var_28 = ((/* implicit */unsigned char) (~((-((~(var_2)))))));
    }
}
