/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105179
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
    var_13 ^= ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_2)));
    var_14 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) (short)-22254)) ? (((/* implicit */int) (short)-19720)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) ((_Bool) ((unsigned char) max((((/* implicit */long long int) 779687237)), (arr_2 [i_0])))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)32745))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-22262)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12)))) - (arr_0 [i_0] [i_0])))));
        var_17 = ((/* implicit */_Bool) (+(max((((unsigned long long int) 1890745703519145530LL)), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)2] [i_0]))))));
    }
    for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1890745703519145531LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [22LL]))) > ((~(18U))))))) : ((-(arr_4 [i_1 + 1])))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_3 [i_1 + 1])))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) ((-1890745703519145532LL) < (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)31)), (arr_4 [(signed char)2]))))))))));
        var_21 = ((/* implicit */unsigned int) ((short) arr_4 [i_1 - 1]));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((max((((/* implicit */unsigned short) var_8)), ((unsigned short)46362))), (((/* implicit */unsigned short) var_12)))))));
            arr_10 [(short)12] [i_2] &= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 1205110931U))))), (779687237)));
        }
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
                {
                    arr_20 [i_2] [i_4] [i_2] [i_6] = ((/* implicit */int) var_5);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57073)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_2]))) : (4133980088925924307LL)));
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_24 [i_5] [i_4] [i_2] [i_2] [9U] [i_2] [i_4] = ((/* implicit */unsigned int) 287948901175001088ULL);
                        var_24 &= ((/* implicit */int) arr_15 [i_2] [i_4] [i_2] [(short)0]);
                        arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) min((arr_19 [i_2] [i_2] [i_5] [i_6] [(unsigned short)4] [i_4 - 1]), (((/* implicit */long long int) arr_21 [i_2] [i_6 - 1] [i_2] [i_2] [i_7] [i_6])))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_29 [i_2] [(unsigned char)1] [i_4 - 1] [i_4] [i_5] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) arr_26 [i_2] [0U] [i_5] [i_6] [(_Bool)1]);
                        arr_30 [(signed char)12] [i_4] [i_2] = ((/* implicit */short) (-(((((/* implicit */int) (short)31614)) ^ (((/* implicit */int) arr_12 [i_2] [i_5]))))));
                        var_25 = ((/* implicit */_Bool) ((short) (unsigned short)35209));
                        arr_31 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_3 [i_2]))))));
                    }
                    for (short i_9 = 1; i_9 < 14; i_9 += 1) 
                    {
                        arr_35 [i_2] [i_2] [i_5] [i_2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_5] [i_2] [i_9])) ? ((+(((/* implicit */int) (unsigned char)255)))) : ((((-(((/* implicit */int) (unsigned short)17095)))) & (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) (short)-15221)) : (1455190236)))))));
                        var_26 -= ((/* implicit */signed char) (short)-25336);
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1U] [3ULL])) ? (((((/* implicit */_Bool) var_1)) ? (arr_27 [i_6] [i_6] [i_5] [i_6 - 3] [(unsigned char)3]) : (((/* implicit */long long int) 2790617918U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))))))));
                    }
                }
                /* LoopSeq 1 */
                for (short i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    var_28 = ((/* implicit */short) ((((int) arr_7 [i_2])) >> (((max((((/* implicit */long long int) var_1)), (arr_2 [i_4 - 1]))) - (5579LL)))));
                    var_29 = ((/* implicit */_Bool) min((arr_27 [i_2] [(unsigned char)4] [i_4] [i_5] [i_10]), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_4] [i_5] [i_2]))) > (4223734855762046971ULL)))) ^ (((/* implicit */int) arr_13 [(unsigned short)4] [(unsigned char)5])))))));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)167))))) ? ((((_Bool)1) ? (((/* implicit */long long int) 4225480350U)) : (-1890745703519145530LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_4 + 1] [i_10 - 1] [i_10 - 1] [i_4 - 1] [(unsigned short)12])) ? (((/* implicit */int) arr_26 [i_2] [i_10 - 2] [7U] [i_4 + 1] [i_2])) : (((/* implicit */int) arr_26 [i_2] [i_10 + 2] [i_10 + 2] [i_4 - 1] [i_4])))))));
                }
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(((/* implicit */int) arr_37 [i_4 + 1])))) : (((((/* implicit */int) ((((/* implicit */_Bool) 4503565267632128ULL)) && (((/* implicit */_Bool) 4294967273U))))) | (((/* implicit */int) arr_8 [i_2] [i_4]))))));
            }
            var_32 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_16 [(short)14]))))) == (((unsigned long long int) (short)-7989))))), (-3355607154421648540LL)));
            arr_40 [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)22170);
        }
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2])))) + ((+(arr_27 [i_2] [i_2] [(_Bool)1] [i_2] [i_2]))))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_47 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_23 [i_2] [i_2] [i_11] [i_11] [(signed char)8] [i_12] [i_12 - 1]))))))));
                    var_34 = ((/* implicit */unsigned short) (short)-19720);
                }
            } 
        } 
        arr_48 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)224))) * (min((((3957344004U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) arr_8 [i_2] [i_2]))))));
    }
}
