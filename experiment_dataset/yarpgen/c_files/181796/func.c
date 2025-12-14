/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181796
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
    var_16 = ((/* implicit */signed char) ((short) -1704239575));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) (short)8506)));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_9)) - (((arr_0 [i_0]) + (((/* implicit */long long int) var_9))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                arr_7 [i_1 + 1] [i_0] [i_2 - 3] [i_0] = ((/* implicit */unsigned long long int) (~(-1704239571)));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] [i_1] |= ((/* implicit */unsigned char) (-(arr_5 [i_1] [i_0] [i_1] [i_0])));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((-4983140131612513945LL) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_1 + 1] [i_0 - 3]))))))));
                        arr_14 [i_0] [i_0] [i_0 - 3] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) arr_5 [i_0] [i_1] [i_2 - 2] [i_4])));
                    }
                    for (int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_2 - 1] [i_0] [i_5 - 1] [i_0 - 2] [i_5] = (+((-(arr_4 [i_0] [i_0] [i_5 + 1]))));
                        var_20 = (~(((/* implicit */int) arr_12 [i_0 - 3] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_2 - 1] [i_5 + 2])));
                        arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_9 [i_0 - 1] [i_0] [i_3] [i_0])) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1216)) - (-1704239599))))));
                    }
                }
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) < (((/* implicit */int) arr_8 [i_0]))))))));
                    arr_22 [i_0 - 3] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_12 [i_6] [i_2 - 4] [i_2 - 2] [i_2 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_0 - 1] [i_0 + 1] [i_2 - 1]))))))))));
                }
                for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                        var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1704239583)) / (arr_15 [i_0 - 2] [i_1 - 1] [i_2 + 1] [i_7] [i_8] [i_7 + 1] [i_8]))))));
                    }
                    arr_30 [i_0 + 1] [i_0] [i_2] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((long long int) arr_24 [i_0 - 2] [i_0 - 2] [i_1 - 2] [i_7 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_24 += (!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2 - 2] [i_2 - 1])));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (unsigned char)253))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((int) arr_2 [i_0] [i_2] [i_10]))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (short)-8449)) || (((/* implicit */_Bool) ((int) arr_12 [i_11 + 2] [i_2 - 3] [i_1] [i_2 - 3] [i_1] [i_0] [i_0]))))))));
                        }
                    } 
                } 
            }
            arr_39 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((arr_9 [i_0] [i_0] [i_1 + 1] [i_1 - 2]) + (2147483647))) << (((((((long long int) arr_38 [i_1 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) + (14945LL))) - (16LL)))))) : (((/* implicit */unsigned long long int) ((((((arr_9 [i_0] [i_0] [i_1 + 1] [i_1 - 2]) - (2147483647))) + (2147483647))) << (((((((((long long int) arr_38 [i_1 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) + (14945LL))) - (16LL))) - (17910LL))))));
            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_0] [i_0 - 3] [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1] [i_1])))) / (((/* implicit */unsigned long long int) var_9))));
            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14U))));
        }
        for (int i_12 = 2; i_12 < 22; i_12 += 4) /* same iter space */
        {
            arr_42 [i_0] [i_12] = ((/* implicit */unsigned long long int) -1968457675);
            arr_43 [i_0] = ((/* implicit */unsigned short) 0U);
            arr_44 [i_0] [i_0] [i_12] = ((/* implicit */unsigned char) (~(arr_20 [i_12] [i_12 - 2] [i_12] [i_12 + 1])));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    {
                        arr_51 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551594ULL)) || (((((/* implicit */long long int) -466958629)) > (1317127672140331817LL)))));
                        arr_52 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) (-((~(arr_20 [i_14] [i_13] [i_0] [i_0])))));
                        var_30 *= ((unsigned char) ((unsigned long long int) 4294967295U));
                        arr_53 [i_0 - 2] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_27 [i_0 - 2] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_14] [i_13] [i_12 + 1] [i_0 - 3]))) : (arr_5 [i_0] [i_0] [i_0 + 1] [i_0])))));
                    }
                } 
            } 
            arr_54 [i_0] [i_12 - 1] [i_0] = ((/* implicit */long long int) 15472561563565611458ULL);
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        arr_58 [i_15] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_15])))))));
        var_31 = ((/* implicit */int) ((unsigned int) ((unsigned char) ((short) arr_0 [i_15]))));
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */long long int) (~((-(((/* implicit */int) arr_57 [i_15] [i_15]))))))) ^ (((long long int) ((arr_1 [i_15]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26973)))))))))));
    }
}
