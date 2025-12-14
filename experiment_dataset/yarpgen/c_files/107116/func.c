/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107116
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_18 &= ((/* implicit */int) ((arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2505200512U))))));
                        arr_14 [i_2] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
                        var_19 = ((((/* implicit */_Bool) (+(arr_5 [i_2] [i_1])))) ? (var_0) : ((~(-2608825220866144936LL))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_3])) ? (10388238894257251185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))))) ? (((((/* implicit */_Bool) (signed char)-8)) ? (var_10) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_21 = arr_10 [i_0] [i_0];
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
            var_23 -= ((/* implicit */long long int) ((short) arr_12 [(unsigned short)0] [i_0 - 1] [i_0] [(unsigned short)0]));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_17);
            arr_19 [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -1556203436)) ? (arr_3 [i_5]) : (((/* implicit */unsigned int) (~(-1))))));
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_25 &= ((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_0] [i_0] [i_6] [i_0]);
            arr_23 [i_6] [i_0] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)36961);
        }
        for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            var_26 *= (((!(((/* implicit */_Bool) arr_7 [i_0] [i_7 - 1] [i_0 - 2])))) ? (arr_22 [i_0 - 3] [i_7 - 1]) : (((((/* implicit */_Bool) arr_0 [i_0] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_16))));
            arr_27 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16167)) ? (arr_9 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            var_27 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 3221225472U)) || (((/* implicit */_Bool) arr_26 [i_7 + 2])))));
            var_28 = arr_1 [i_0 - 3];
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            {
                var_29 ^= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned char)83)) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1))))))));
                var_30 = ((/* implicit */_Bool) var_0);
                var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2050677423)) * (11116638700102506459ULL)));
            }
        } 
    } 
}
