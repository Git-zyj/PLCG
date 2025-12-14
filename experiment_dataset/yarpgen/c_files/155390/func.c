/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155390
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] &= 0LL;
                                var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2 - 4] [i_3] [i_2 - 3])) || (((/* implicit */_Bool) 7933493515542363262LL))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (-6146768642263583237LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))))));
                                var_12 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (unsigned char)38)) : (var_1)))), (2471059747113908390ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_4] [i_3] [(short)4])))));
                                var_13 += ((/* implicit */unsigned int) ((((((var_0) + (9223372036854775807LL))) << (((((/* implicit */int) arr_5 [(unsigned char)10] [i_2] [i_2 + 1] [(_Bool)1])) - (110))))) & (((/* implicit */long long int) 2411038127U))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_1] [0U] [i_6] [i_7] = var_9;
                                var_14 -= ((/* implicit */unsigned int) max(((-(2471059747113908378ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (arr_1 [(unsigned char)5])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned char)15] [i_1] [i_5] [i_6 + 1])) % (((/* implicit */int) arr_14 [5U] [5U] [i_6] [5U]))))))))));
                                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [1] [i_7 - 1] [1] [(unsigned char)0] [(unsigned char)0]), (arr_20 [i_5] [i_7 - 1] [i_7] [i_7] [i_7]))))) > (2417207921U)));
                                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (-((+(2007456234U)))))) ? (max(((+(15975684326595643220ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_5] [i_1] [i_7]))))))) : (((((/* implicit */_Bool) 2147483647)) ? (15975684326595643237ULL) : (((/* implicit */unsigned long long int) 2417207925U))))));
                            }
                        } 
                    } 
                } 
                var_17 += ((/* implicit */unsigned char) ((((var_3) / (((/* implicit */long long int) var_1)))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10))))));
            }
        } 
    } 
    var_18 += ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (int i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_12])) == (((/* implicit */int) (unsigned char)234))))) < (((/* implicit */int) arr_32 [i_10 - 2] [i_10] [i_10] [i_10 - 2] [i_10 + 1] [i_10])))))));
                                arr_36 [i_8] [i_9] [i_9] &= ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 301965977U)) & (15975684326595643226ULL))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_9])))), (((/* implicit */int) arr_34 [i_9] [i_9] [i_9])))))));
                }
            } 
        } 
    } 
}
