/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180917
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
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [(signed char)12] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((arr_1 [9]), (-21))))));
    }
    for (int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_2))) % ((+(arr_6 [i_1])))));
            arr_12 [i_1] [i_1] = ((((((/* implicit */int) (unsigned short)57129)) >> (((var_11) - (1670587718))))) << (((((/* implicit */int) var_3)) + (30292))));
        }
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) 3565461065183810541LL);
                        arr_20 [i_1] [i_3] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((-7723575729453780522LL) < (((/* implicit */long long int) arr_18 [i_1 + 2] [i_1 + 2] [i_1 - 2]))))), (arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 1])));
                        arr_21 [i_1] [i_4] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) 429070663)), (arr_16 [i_1] [i_3] [i_4] [i_5])))));
                        arr_22 [i_1] = ((/* implicit */int) arr_6 [i_1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_30 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) var_4));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_1] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1337825968)) ? (((/* implicit */long long int) var_4)) : (134217727LL)))))));
                        arr_34 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1 + 1] [i_8 - 1]))) + (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) ((arr_29 [i_1 + 1]) ? (((/* implicit */int) arr_26 [i_1] [i_1 - 1] [i_8 - 1])) : (((/* implicit */int) arr_29 [i_1 - 2])))))));
                        arr_35 [i_1 - 1] [i_6] [i_1] [i_8 - 1] [i_1 + 2] = ((/* implicit */short) arr_26 [i_1] [i_1 + 2] [i_8 - 1]);
                    }
                    for (short i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        arr_38 [i_9 - 1] [i_1] [i_7] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) arr_29 [i_9 - 3]);
                        arr_39 [i_1] [i_1] [i_1] = ((/* implicit */short) var_4);
                        arr_40 [i_7] [(_Bool)1] [i_9 - 3] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -118909842)) ? (max((var_9), (min((((/* implicit */long long int) var_3)), (var_7))))) : (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)65535)) ^ (-1))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_43 [i_1 + 1] [i_6] [i_1] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) < ((+(arr_42 [9])))))), (var_5)));
                        arr_44 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (var_1)))) ? ((+(((/* implicit */int) var_3)))) : ((-2147483647 - 1))))));
                    }
                    arr_45 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)772)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_6] [(signed char)14] [i_7]))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -5956335366528121401LL)) : (arr_16 [0ULL] [i_6] [i_6] [i_6])))) && (((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) var_1))))))))));
                    arr_46 [i_1] [i_6] [i_1] [i_7] = ((/* implicit */short) arr_7 [i_1] [i_6]);
                }
            } 
        } 
        arr_47 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))))))) : (arr_31 [i_1] [(short)9] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? (max((((/* implicit */int) (short)32754)), (var_11))) : (((/* implicit */int) (unsigned short)30302))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (long long int i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    {
                        arr_55 [i_11] [i_11] &= var_1;
                        arr_56 [i_1] [i_11] = ((signed char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13] [i_12] [i_11] [i_11] [i_1]))) : (((((/* implicit */_Bool) var_2)) ? (arr_28 [i_1]) : (((/* implicit */unsigned long long int) var_7))))));
                        arr_57 [i_1 - 2] [i_1] [i_1] [i_13] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) 1725656568238460577LL)), (arr_52 [i_1 - 2] [i_1 - 2]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_53 [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (max((var_9), (((/* implicit */long long int) 2147483647)))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_14 = 1; i_14 < 16; i_14 += 2) 
    {
        arr_60 [i_14] |= ((/* implicit */signed char) 7277747862274154626LL);
        arr_61 [i_14 + 2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_59 [i_14] [i_14 + 3]), (arr_59 [i_14] [i_14]))))) : (min((((/* implicit */long long int) var_6)), (0LL))))));
        arr_62 [i_14] [i_14] = ((/* implicit */int) arr_59 [i_14] [i_14]);
        arr_63 [(unsigned short)13] [18LL] = ((/* implicit */int) arr_59 [i_14] [i_14 + 4]);
    }
    var_13 = var_11;
}
