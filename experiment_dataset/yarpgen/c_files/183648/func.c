/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183648
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) > (((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((1550068148U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1879048192)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-5880)))))))) ^ (((/* implicit */int) ((((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6807))) : (5U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)6807)) ? (arr_4 [6] [0]) : (((/* implicit */int) arr_2 [(_Bool)1]))))), (((9032221644123731230LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))) == (((/* implicit */long long int) max((max((((/* implicit */int) arr_1 [i_1])), (arr_4 [i_1] [i_1]))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)6793)) : (((/* implicit */int) (short)-5646)))))))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)62184)) : (((/* implicit */int) (short)-6803))))) && (((/* implicit */_Bool) arr_5 [i_1])))))));
    }
    for (short i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((max((((arr_9 [18]) & (((/* implicit */long long int) ((/* implicit */int) var_7))))), (arr_9 [(short)6]))), (((long long int) arr_10 [12ULL])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (arr_12 [(unsigned short)15])));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [(signed char)18]))) ^ (4294967295U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_3])))))));
                }
            } 
        } 
        arr_16 [i_2] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)6802))))), (((((/* implicit */_Bool) 6127656500818712686ULL)) ? (3236413715558690030LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
        var_19 = (+(((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) ^ (0))) != (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 3]))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (int i_7 = 3; i_7 < 8; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_5] [i_8])))) ? (((/* implicit */int) arr_23 [i_7] [i_5] [i_7 - 1] [(unsigned short)10])) : (((/* implicit */int) arr_12 [i_5]))))));
                        arr_27 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (short)-6793)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_5] [i_5] [i_7]))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_2))));
                        var_22 = ((/* implicit */_Bool) ((max((((/* implicit */int) max((((/* implicit */unsigned short) (short)-6803)), ((unsigned short)29273)))), (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))) | (((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_7 + 3])))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [(unsigned short)4])) : (((/* implicit */int) (short)-6807)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 7; i_10 += 2) 
            {
                {
                    var_23 += var_3;
                    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9] [i_10 + 1] [i_10 + 1] [i_10 + 1]))) <= (((long long int) arr_22 [10LL] [4] [i_5]))))), (arr_23 [i_5] [i_5] [i_5] [i_5])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_36 [i_5] [i_5] [(unsigned char)10] = ((/* implicit */int) max((max(((short)-6793), ((short)6793))), (((/* implicit */short) arr_11 [i_5] [i_5] [(short)13]))));
            arr_37 [i_11] [i_5] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_7))))));
            var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (~(arr_33 [(_Bool)1]))))));
            arr_38 [i_5] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6803)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3738405478U)));
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) arr_19 [i_5]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (arr_20 [i_5]))) : (((/* implicit */unsigned long long int) ((arr_29 [i_5]) ? (((/* implicit */int) (short)17044)) : (arr_34 [i_5])))))))));
        }
    }
}
