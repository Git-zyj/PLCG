/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166744
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */unsigned int) ((signed char) (-((~(arr_1 [i_2] [i_3 - 2]))))));
                        var_11 = (~((~(arr_6 [i_0] [(short)10] [i_1 + 1] [0]))));
                        var_12 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) arr_5 [i_2 - 3] [i_2])), (var_1))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_2 - 2] [(signed char)6])))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_0] [i_0] [8U] [i_0])))));
                        var_13 = (-((-(((/* implicit */int) arr_11 [(unsigned short)4] [i_1] [i_2 - 1] [i_1 + 1] [i_0] [i_0])))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [(unsigned char)14] [i_0] [i_1] = ((/* implicit */int) ((short) arr_0 [i_0]));
                        arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)32283))));
                        arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((var_8) < (((/* implicit */long long int) var_1))))))), (((int) (~(((/* implicit */int) var_9)))))));
                    }
                    var_14 = ((/* implicit */unsigned int) ((_Bool) var_1));
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (-((((+(((/* implicit */int) var_5)))) << ((((~(((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_6] [i_6] [(unsigned short)14])))) - (42)))))));
                    /* LoopSeq 4 */
                    for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) var_8);
                        var_17 = ((/* implicit */unsigned int) max((var_17), (var_7)));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */int) var_2);
                            arr_28 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) > ((~(((/* implicit */int) arr_4 [i_0] [(signed char)5])))))))));
                        }
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_33 [i_0] [(_Bool)1] [(short)8] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [8LL] [i_1] [i_1] [i_6] [i_9] [i_9])))))));
                        arr_34 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (_Bool)1)))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        arr_38 [i_1] [(unsigned char)1] [(signed char)13] [i_10] = ((/* implicit */short) (-((~(((/* implicit */int) var_3))))));
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            var_19 = ((/* implicit */int) var_2);
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((_Bool) var_5));
                            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                            arr_43 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((signed char) (-((-(10))))));
                        }
                        var_21 = ((/* implicit */unsigned short) max((min(((~(var_1))), (arr_35 [i_1] [18] [(short)8] [i_1 + 1] [i_1 + 1] [i_1]))), (((/* implicit */unsigned int) ((int) arr_7 [i_0] [i_0])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        arr_46 [i_1] [i_1 + 1] [(unsigned char)0] [i_1 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_8) - (var_8))))));
                        arr_47 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (-((+(var_6)))));
                        var_22 = ((/* implicit */long long int) (-((-((+(((/* implicit */int) var_0))))))));
                        arr_48 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) var_1);
                    }
                    arr_49 [i_1] [i_1] = ((/* implicit */unsigned short) min((var_4), ((!(((/* implicit */_Bool) 13ULL))))));
                    var_23 = ((/* implicit */int) (!(var_4)));
                }
                arr_50 [i_1] [(short)1] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) (!(var_5)))), (var_6))));
}
