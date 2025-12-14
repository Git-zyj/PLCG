/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137994
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
    var_20 = ((/* implicit */short) min((536870911ULL), (min((((/* implicit */unsigned long long int) (short)1920)), (min((var_19), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)1))) & (min((arr_4 [i_0] [i_0]), (((/* implicit */long long int) var_13))))))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (((var_19) * (arr_3 [i_0] [i_0]))))) : (16272860576341907609ULL)));
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_14), (arr_0 [i_0] [i_0])))) ? (((arr_3 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))));
            arr_7 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (3417956651218914156ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)123)), (arr_2 [i_0])));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_22 = arr_2 [i_0];
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4092)) ? (18014398509350912LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27038)))));
        }
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            var_24 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (max((arr_11 [i_3 - 1]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((unsigned int) arr_8 [i_0] [i_3 - 1] [18ULL])))));
            var_25 ^= ((/* implicit */unsigned long long int) max((max(((+(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)10])))), (((/* implicit */int) (short)2048)))), (((/* implicit */int) (short)2048))));
            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4076))) < (3417956651218914167ULL))))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) <= (7134880304200906086ULL)))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */int) ((signed char) 3482823225499432227LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        }
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)15360))) / (arr_1 [i_0]))))))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_19);
                        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) min(((short)-4104), (((/* implicit */short) (_Bool)1))))))));
                        arr_25 [i_4] [i_4] = ((/* implicit */short) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    }
                } 
            } 
        } 
        var_29 |= (unsigned short)14310;
        arr_26 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3840)) ? (2251782633816064ULL) : (((/* implicit */unsigned long long int) 3737324239U))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        for (short i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            {
                var_30 |= ((((_Bool) 1073741824U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min(((-(var_18))), (min((((/* implicit */unsigned long long int) arr_28 [2U])), (var_1))))));
                arr_31 [i_8] [i_8] [i_8] = ((/* implicit */short) min(((((-(arr_19 [i_8]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46373))))))))));
                var_31 = ((/* implicit */unsigned int) (~(arr_3 [i_8] [i_9])));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) arr_29 [i_9]);
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        for (short i_12 = 1; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((long long int) arr_21 [i_8] [i_9] [i_10 - 1])))));
                                var_34 = ((/* implicit */short) (-(((/* implicit */int) arr_33 [i_12 - 1]))));
                                var_35 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10 + 1] [i_10] [i_10] [i_10 - 1] [i_10 + 1]))) : (18446744073172680704ULL))))));
                            }
                        } 
                    } 
                    arr_41 [i_8] [i_8] [i_8] [i_10 + 1] = ((/* implicit */unsigned short) min((min((((arr_19 [i_9 + 2]) << (((var_1) - (15871392310273387469ULL))))), (((/* implicit */unsigned long long int) min((arr_8 [i_8] [i_8] [i_8]), (arr_28 [i_8])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_8] [i_8])) / (((/* implicit */int) arr_38 [i_8] [i_8])))))));
                }
                for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_5)) ? (arr_40 [i_8] [i_9 - 1] [i_9 - 1] [i_13] [i_13] [i_13] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_13]))))))) << (((((((/* implicit */int) arr_27 [(signed char)2])) | (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_17 [i_13])))))) - (29802))))))));
                    arr_44 [i_8] [i_9] [(signed char)14] [(signed char)14] |= ((/* implicit */unsigned long long int) (-(var_17)));
                    arr_45 [(short)10] [i_9] [(short)10] &= var_5;
                }
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) var_2);
}
