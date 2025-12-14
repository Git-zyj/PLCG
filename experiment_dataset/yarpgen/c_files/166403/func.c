/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166403
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) (short)46))));
            var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-46)) >= (((/* implicit */int) arr_2 [i_1] [i_1 - 1])))))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 2179913223U)) : (10240306566973808655ULL))));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_13 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_0))))) | (max((arr_0 [i_0]), (0ULL))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_14 -= ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_0]))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_7 [i_3]))))) % (((((/* implicit */int) arr_7 [i_0])) ^ (((/* implicit */int) (short)-17636))))));
            }
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)23449)) && ((_Bool)0))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 3115309445U))))))), ((~(((((/* implicit */int) (short)17636)) >> (((((/* implicit */int) (short)-1041)) + (1043)))))))));
                var_17 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) arr_0 [i_0])))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_18 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_6] [i_7]))) : (317309033U))) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_0] [i_2] [(unsigned short)16] [3ULL]), (((/* implicit */short) (unsigned char)230)))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-46)) || ((!(((/* implicit */_Bool) 2641150675U))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)17636)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-17639), ((short)19))))) : (18446744073709551615ULL))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
                    var_22 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_5] [i_8])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_8]))))))), (((((/* implicit */_Bool) (short)17659)) ? (arr_20 [2U] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-46)))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((~(var_3))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_5] [i_8]))))))))));
                    var_24 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3468)) ? (2739857441U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14009)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (short)-17636)))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3467)) - (((/* implicit */int) (short)-17639))))) : ((+(var_6))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_8] [i_5] [i_2] [i_0])), (((((/* implicit */int) (short)14009)) >> (((arr_4 [i_0] [i_8] [i_5]) - (756337338611559822ULL)))))))));
                    var_25 = ((/* implicit */unsigned short) min((min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_17 [i_8] [i_5] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17637)) | (((/* implicit */int) var_9)))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((9997228069472058842ULL) / (278714585439669578ULL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_12 [i_0] [i_0] [i_9] [i_9]))) - (10237008044295894981ULL))))))));
                    var_27 = ((/* implicit */short) ((((arr_15 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) ? ((-(max((var_6), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2] [i_5] [i_9])))))));
                }
                /* LoopSeq 2 */
                for (short i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((short)29579), (((/* implicit */short) (unsigned char)163))))) / (((/* implicit */int) (short)-3468))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_5] [i_5]))))) / (arr_12 [i_10 + 1] [i_10 + 3] [i_10 - 2] [i_10 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (6265907591053363983ULL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_2))))))))));
                    var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (4018295581U))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (unsigned short)42091)) - (42088)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_1 [i_0] [i_10 + 3])))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_30 = ((((/* implicit */_Bool) ((arr_15 [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) (unsigned short)65508))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_5])) ? (arr_4 [i_0] [i_2] [i_5]) : (((/* implicit */unsigned long long int) var_3)))));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(813940492U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3468)) & (((/* implicit */int) (short)19))))) : (((12945135304990433433ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36)))) / (((/* implicit */int) min((var_4), (var_4))))))) - (((arr_9 [i_0] [i_2] [i_5]) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-12042)) - (((/* implicit */int) (short)-17649)))))));
                }
                var_34 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0])) <= (((/* implicit */int) var_4)))))));
            }
            var_35 = min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_2]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [15ULL] [i_2] [15ULL] [i_2] [15ULL])) : (((/* implicit */int) (short)17637)))) : (((/* implicit */int) max((var_2), (var_1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) (+(arr_3 [i_0] [i_2]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) ((((arr_7 [i_0]) || (var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_12])) || (((/* implicit */_Bool) 2739857456U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                var_37 = ((((((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) & (((/* implicit */unsigned long long int) arr_22 [11U] [i_2] [i_0] [i_0])))) / ((+(var_6))));
            }
            var_38 ^= ((/* implicit */_Bool) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3468))))), (((var_5) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_1)))))) & (max((((/* implicit */int) var_8)), ((-(346134352)))))));
        }
        var_39 = ((/* implicit */unsigned char) (!((!(var_4)))));
    }
    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) var_1))));
}
