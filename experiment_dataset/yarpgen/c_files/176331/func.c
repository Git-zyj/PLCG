/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176331
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
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) 822018162259985073LL);
                    var_13 = var_2;
                }
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */signed char) (unsigned char)186);
                    arr_12 [i_0] [i_0] [i_3] = ((/* implicit */int) (short)32753);
                }
                for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [i_5] [(unsigned char)0] = ((/* implicit */unsigned char) var_9);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */long long int) (short)32767);
                            arr_21 [i_0] [i_1] [i_5] [i_4] [i_5 - 2] [i_6] = ((/* implicit */signed char) 985864521);
                            arr_22 [i_0] [i_1] [i_4] [i_5] [(short)5] [i_1] [i_5 - 3] = 598600961;
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_25 [i_5] [i_5] [i_4] [i_1] [i_1] [i_0] [i_5] = (signed char)120;
                            arr_26 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = (signed char)119;
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-126)))))));
                        }
                        arr_27 [i_0] [(_Bool)1] [i_5] [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) (signed char)-122))))));
                        arr_28 [i_5] [14] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (signed char)103);
                        arr_29 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5 - 3] = (signed char)103;
                    }
                    for (long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        arr_33 [(_Bool)1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) var_5))));
                        var_15 = ((/* implicit */_Bool) var_4);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_38 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (short)32761);
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) 
                        {
                            arr_42 [i_1] [(unsigned char)2] [i_4] [(unsigned char)2] [i_10 - 3] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)126))));
                            arr_43 [i_4] [i_9] [i_9] [i_4] [i_10] = ((/* implicit */short) var_4);
                            arr_44 [i_9] = ((/* implicit */unsigned short) var_11);
                        }
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_16 -= ((/* implicit */unsigned int) var_9);
                            arr_48 [i_0] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                            arr_49 [i_0] [i_0] [i_9] = (signed char)(-127 - 1);
                            var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)53918)));
                            var_18 = ((/* implicit */int) var_1);
                        }
                        arr_50 [i_9] [i_4] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (117440512)));
                        arr_51 [i_9] [i_1] [i_9] [i_9] = ((/* implicit */long long int) var_4);
                        var_19 = ((/* implicit */unsigned char) var_12);
                    }
                    arr_52 [i_0] [i_1] [i_4] = ((/* implicit */int) (_Bool)1);
                }
                arr_53 [i_0] [i_0] = ((/* implicit */long long int) var_3);
                arr_54 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 17100367646460828495ULL)) ? (1744174668583915932LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)96)))))));
                arr_55 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 87866680)) ? (((/* implicit */int) var_11)) : (-1642722836)));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_5);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)80)))))));
}
