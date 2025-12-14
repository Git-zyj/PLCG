/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124235
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) (~(min((min((var_0), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) arr_0 [i_0 + 1]))))));
        var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4794349442612266614LL))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [7ULL]))) : (var_7)))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 + 1])) >> (((((/* implicit */int) arr_5 [i_1] [i_1 - 1])) + (31380))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) arr_4 [i_1 - 1]))))) ? (min((var_7), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (-4794349442612266628LL)));
        var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_2 [10ULL]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) -4794349442612266615LL)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_13 -= ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_17 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_11 [i_5] [i_2] [i_3]))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), ((+(arr_3 [i_2])))));
                    }
                    for (long long int i_6 = 4; i_6 < 14; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(387669294U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(-4794349442612266615LL)))));
                        arr_20 [i_3] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [6U] [6U] [i_4] [i_4]) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (1225151953)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_3 [i_6 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 905099275)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (-(-1073354543)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [15LL]))) : (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_3]))))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6)))))));
                    }
                    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_24 [i_2] [4U] [2] [i_4] [2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_7])) ? (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [0ULL] [1U] [i_4] [i_7]))) : (arr_3 [(unsigned char)3]))) : (((/* implicit */unsigned int) ((arr_15 [i_2] [(unsigned char)10] [i_4] [i_7]) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_2])) : (((/* implicit */int) arr_0 [i_2])))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22084)) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2 - 1])))))) ? ((~(((/* implicit */int) arr_15 [i_2] [i_2] [i_3] [i_7])))) : (((((/* implicit */_Bool) var_8)) ? (arr_21 [i_2] [i_7] [(unsigned short)3] [i_7] [i_2 - 1] [i_4]) : (((/* implicit */int) (short)-4604))))));
                    }
                    var_19 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        var_20 = arr_13 [i_2] [i_3] [i_4] [i_8 - 2];
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_11 [i_8 + 2] [i_2] [i_3]) ? (arr_22 [i_2] [i_2] [i_4] [i_2 + 1]) : (var_6))))));
                        arr_28 [i_2 + 3] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) var_4);
                    }
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) ? (((arr_11 [i_2 + 1] [10U] [i_4]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_4])))) : (((/* implicit */int) arr_7 [(unsigned char)8]))));
                        var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)32767)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_2))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(-1073354563))))));
        var_25 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(unsigned short)2] [i_2 + 2]))))) ? (((/* implicit */int) arr_25 [i_2] [i_2 - 1] [i_2 - 1] [(unsigned char)3] [i_2] [i_2])) : (((arr_15 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_2)))));
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        arr_39 [i_2] [i_10 - 1] [i_2] [i_12] = ((/* implicit */short) (-((+(-4794349442612266615LL)))));
                        var_26 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_4))))));
                        arr_40 [i_12] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_2] [i_2] [i_2]))))) ? (arr_8 [i_10]) : (((/* implicit */unsigned long long int) var_3))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_11])) ^ ((-(((/* implicit */int) var_9))))));
                        var_28 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(var_3)))) : (((((/* implicit */_Bool) 1450195027U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6902581652575612736LL))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        for (short i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        for (long long int i_17 = 3; i_17 < 18; i_17 += 4) 
                        {
                            {
                                arr_54 [i_17] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_15]))))), (((((/* implicit */_Bool) arr_42 [i_13] [i_14])) ? (4100955629U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_55 [i_13] [i_17] [i_16] [i_13] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_17 - 2])) ? (((/* implicit */long long int) var_0)) : (5096835188832869092LL)))) ? (((/* implicit */int) min((arr_49 [i_13] [i_13] [i_13] [i_15] [i_15] [i_17]), (((/* implicit */short) arr_51 [i_13]))))) : (((((/* implicit */_Bool) var_7)) ? (-115867414) : (((/* implicit */int) arr_49 [i_13] [i_14] [i_15] [i_16] [(_Bool)0] [i_17 + 1]))))))) ? ((+(((/* implicit */int) arr_51 [i_16])))) : ((-(((/* implicit */int) (!(arr_47 [11U] [11U] [i_16] [i_17 + 2]))))))));
                                var_29 = arr_45 [i_16] [i_13];
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_13] [(short)14] [i_13] [(short)14] [i_13] [i_13] [i_13])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))) : ((((!(((/* implicit */_Bool) arr_44 [i_13] [i_13] [i_15])))) ? (((/* implicit */unsigned long long int) (~(arr_45 [i_13] [i_13])))) : (arr_41 [(unsigned char)14])))));
                }
            } 
        } 
    } 
}
