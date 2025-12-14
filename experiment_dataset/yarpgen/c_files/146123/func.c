/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146123
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [(unsigned char)2] = ((/* implicit */unsigned char) ((unsigned long long int) var_12));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)220)) - (((/* implicit */int) ((signed char) var_8)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned char) var_11));
                    arr_12 [i_2] [i_1] [(_Bool)1] = ((/* implicit */signed char) (unsigned char)174);
                    var_18 = ((/* implicit */short) (~((-(var_14)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        arr_15 [i_0] [(short)8] [i_3] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) var_10)));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_4] [(signed char)18] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) 16568823426274788315ULL));
                            arr_20 [i_3] [i_1] [i_3] [i_3] [i_4] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) (signed char)-18)))));
                        }
                    }
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_2] [(signed char)7] [i_5 - 2] = ((/* implicit */unsigned short) ((unsigned long long int) 887404363767678157ULL));
                        arr_24 [i_5 + 1] = ((/* implicit */_Bool) (~(var_12)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_28 [i_0] [i_1] [(short)0] [i_2] [i_6] = ((/* implicit */signed char) 15498853949544958277ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_31 [(signed char)12] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)114)))));
                            arr_32 [i_0] [i_1] [13U] [13U] [(short)6] = ((/* implicit */unsigned short) var_16);
                            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                            var_20 = ((/* implicit */_Bool) var_7);
                            var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) <= (var_3));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                            arr_36 [i_8] [i_8] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_5)));
                            arr_37 [(unsigned short)16] [i_8] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)78))));
                            arr_38 [i_0] [i_8] [(signed char)7] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (unsigned char)81));
                            arr_39 [i_8] [i_1] = ((/* implicit */unsigned char) ((short) (short)-17130));
                        }
                        arr_40 [i_6] = ((/* implicit */unsigned short) var_14);
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_44 [i_9] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)27745);
                        arr_45 [15ULL] [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) var_13);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        arr_48 [i_10] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((unsigned char) 4020615638649755843ULL))))) > ((+(((/* implicit */int) (unsigned short)11102))))));
        arr_49 [1ULL] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)90))))) != (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)88)), (var_1)))) <= (((/* implicit */int) (signed char)-89)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            {
                                arr_62 [i_11] = ((/* implicit */unsigned long long int) var_0);
                                arr_63 [i_10] [i_11] [i_11] [9ULL] [9ULL] = ((unsigned long long int) (~(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (unsigned char)176);
                }
            } 
        } 
    }
    for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 2) 
    {
        arr_66 [i_15 - 1] = ((/* implicit */short) (!(((_Bool) var_6))));
        var_24 = ((/* implicit */unsigned char) (!(min(((!(((/* implicit */_Bool) var_5)))), (var_8)))));
    }
}
