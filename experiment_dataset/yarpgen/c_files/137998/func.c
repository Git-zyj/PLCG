/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137998
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
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = (~(((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_0 [i_1] [i_1 - 1])))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_4 + 1]))))), (arr_7 [i_4] [i_1] [i_4]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)0), (((/* implicit */short) arr_13 [i_2] [i_2] [i_4] [i_3] [i_4])))))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_9 [i_1] [i_4]))))) ? (((/* implicit */int) min(((unsigned short)45779), (((/* implicit */unsigned short) arr_5 [(signed char)10]))))) : (((((/* implicit */int) arr_14 [i_1] [i_3])) ^ (-2081430151))))))))));
                                var_15 = ((unsigned long long int) var_9);
                                arr_16 [i_2] [12ULL] |= ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_14 [i_4] [i_4]))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned short) (((+(max((((/* implicit */long long int) (signed char)-60)), (arr_2 [i_0]))))) | (((/* implicit */long long int) (+(arr_15 [i_0] [i_0] [i_0] [(signed char)4] [i_1 + 1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_22 [i_6] [i_1 + 1] [i_1] [i_5]), (((/* implicit */unsigned long long int) (unsigned short)43513))))))) ? ((-(((arr_7 [i_2] [i_1] [i_6]) >> (((((/* implicit */int) arr_3 [i_2] [i_0])) - (21053))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (signed char)99)))))))));
                                var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) 0)) ? (arr_15 [13] [13LL] [i_6] [i_0] [i_2] [i_1 + 1] [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5] [i_5])))) != (((/* implicit */int) arr_14 [i_6] [i_5])))) ? (min((((unsigned int) -2081430151)), ((-(arr_20 [i_1] [i_5] [15] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) (+(arr_4 [i_1]))))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */int) arr_18 [(_Bool)1] [i_1]);
                                var_19 = ((/* implicit */int) max((arr_8 [i_0] [(_Bool)1] [i_1 + 1]), (((/* implicit */unsigned int) arr_0 [i_0] [(unsigned short)13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (long long int i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            {
                                arr_35 [i_1] = ((/* implicit */unsigned char) -8103350295157988346LL);
                                var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_1] [i_1] [i_7 + 4] [i_10] [i_0])), (8103350295157988364LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))))));
                                var_21 = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                }
                for (unsigned int i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        for (int i_14 = 1; i_14 < 13; i_14 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned int) (~(min(((~(((/* implicit */int) (signed char)-29)))), (((int) (signed char)-23))))));
                                var_23 = ((/* implicit */unsigned int) (+((-(arr_39 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_14 + 2])))));
                                var_24 = ((/* implicit */int) max((arr_33 [(unsigned short)0] [i_0] [3LL] [i_0] [i_0] [i_1]), (((/* implicit */long long int) (short)0))));
                                var_25 += ((/* implicit */unsigned int) (~(((int) (~(-305968066))))));
                                var_26 &= ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_44 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_1])) ? (((/* implicit */int) arr_41 [i_0] [i_1])) : (((/* implicit */int) arr_41 [i_0] [i_1]))))), ((-(-472269111487216167LL)))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_34 [i_0] [i_12 + 1] [i_12] [i_1] [i_1])) : (arr_38 [i_1] [i_12 + 2] [i_12] [i_12])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_1] [i_1]))))) : (var_5)));
                    var_28 = ((/* implicit */unsigned short) (-(max(((-(7063789204286916613LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)55)))))))));
                }
                arr_45 [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((7063789204286916614LL) << ((((+(((/* implicit */int) max((arr_28 [i_1] [i_1]), (((/* implicit */signed char) var_7))))))) - (93)))))) : (((/* implicit */_Bool) ((7063789204286916614LL) << ((((((+(((/* implicit */int) max((arr_28 [i_1] [i_1]), (((/* implicit */signed char) var_7))))))) - (93))) - (20))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 1) 
        {
            for (unsigned char i_17 = 1; i_17 < 17; i_17 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) var_1);
                    arr_55 [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_47 [i_17 - 1] [i_16 + 3])) ? (((/* implicit */long long int) arr_54 [i_16] [i_17] [i_17 + 2] [i_17])) : (-3965559548526296162LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_53 [3] [i_16] [2] [i_16 + 4])))))))));
                    var_31 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) (unsigned short)22022)) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)24875)) : (((/* implicit */int) arr_46 [i_15] [i_16])))))))));
                    var_32 = var_10;
                }
            } 
        } 
    } 
    var_33 += ((int) var_11);
}
