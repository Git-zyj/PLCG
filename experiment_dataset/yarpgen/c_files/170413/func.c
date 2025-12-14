/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170413
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) var_12);
                            var_18 += ((/* implicit */unsigned char) max((((arr_7 [i_1] [i_2] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))))), (((/* implicit */long long int) arr_3 [i_1] [i_2]))));
                            arr_13 [19LL] [i_1] [i_0] [19LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1955324433)) || (((/* implicit */_Bool) (unsigned char)43))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22408))) * (4294967295U)));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_14))))) ? (((((926463599474651121LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (min((var_2), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                arr_21 [i_4] [2LL] [i_4] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) 4012826076900025140ULL)) || (((/* implicit */_Bool) (unsigned short)13195)))) || (((/* implicit */_Bool) var_16)))))));
                arr_22 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) min((14433917996809526472ULL), (((/* implicit */unsigned long long int) arr_18 [i_4]))))) ? (((((/* implicit */int) (unsigned char)43)) << (((1889982105) - (1889982097))))) : (((/* implicit */int) arr_5 [(signed char)14])))) >> (((((/* implicit */int) ((short) arr_7 [14LL] [14LL] [i_4]))) + (28095)))));
                arr_23 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_4] [i_5] [i_4]), (((/* implicit */long long int) arr_18 [i_4]))))) ? (max((((/* implicit */unsigned long long int) var_7)), (4012826076900025143ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_5)))))))) ? (min((((/* implicit */unsigned int) var_10)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (short i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) min((((/* implicit */long long int) (unsigned char)88)), (var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_10)))))));
                            arr_30 [i_7] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_7] [i_7] = ((/* implicit */long long int) 18446744073709551606ULL);
                            var_20 = ((/* implicit */short) ((unsigned char) var_1));
                            arr_31 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned char)243)) - (232)))))) >= ((~(14433917996809526444ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((var_6) | (((/* implicit */unsigned int) min((((((/* implicit */int) var_10)) | (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))));
}
