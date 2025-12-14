/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183910
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_16)) | (((/* implicit */int) var_1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) 15U)))))))))));
        var_18 = ((/* implicit */unsigned char) min((4294967280U), (((/* implicit */unsigned int) (_Bool)1))));
        var_19 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) arr_1 [i_3]);
                        arr_11 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_3]))));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (arr_7 [i_0] [i_0] [i_2 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_2 + 2]))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0]))))))))));
                        var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_11)) ? (((arr_0 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) >> (((var_12) - (158949800))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_23 += ((/* implicit */signed char) arr_21 [i_4 - 1] [i_4] [i_4 - 1] [i_6] [i_7]);
                        var_24 = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) arr_16 [i_4] [i_4 + 3]);
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_27 [i_4] [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_11)))) && ((!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
            {
                var_26 -= ((/* implicit */unsigned long long int) arr_15 [i_9]);
                arr_30 [i_4] [i_4] [i_9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_0))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 + 2] [i_4 + 1])))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
            {
                arr_33 [i_4] [i_4] = (i_4 % 2 == 0) ? (((/* implicit */_Bool) max((((max((((/* implicit */long long int) var_4)), (arr_21 [i_4] [i_4 - 2] [i_8] [i_4] [i_8]))) << (((arr_12 [i_4]) - (2733841519244342367LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_4 + 1])) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 + 3] [i_4] [i_4]))) > (var_11)))))))))) : (((/* implicit */_Bool) max((((max((((/* implicit */long long int) var_4)), (arr_21 [i_4] [i_4 - 2] [i_8] [i_4] [i_8]))) << (((((arr_12 [i_4]) - (2733841519244342367LL))) - (2061076969726169368LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_4 + 1])) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 + 3] [i_4] [i_4]))) > (var_11))))))))));
                arr_34 [i_8] [i_4] [i_8] = ((/* implicit */signed char) arr_2 [i_4 + 3] [i_8]);
            }
        }
    }
    var_27 ^= ((/* implicit */unsigned short) var_13);
}
