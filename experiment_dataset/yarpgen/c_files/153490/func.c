/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153490
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 -= ((_Bool) (short)-15737);
                            var_13 ^= ((/* implicit */unsigned short) ((((_Bool) arr_0 [i_0] [i_3])) ? ((~(arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_10 [i_2] [i_1] [9LL] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)17)), (arr_3 [i_3] [(signed char)2])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))));
                            var_14 = ((/* implicit */unsigned long long int) (short)-15016);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)0))))), ((~(((/* implicit */int) (short)-8192))))));
                            arr_17 [i_0] [9ULL] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_8 [i_0])) * (max((arr_13 [i_0] [i_4]), (((/* implicit */unsigned long long int) var_6))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 865056734U);
                            arr_19 [i_0] [i_1] [i_0] [5LL] = (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-32757)))));
                            arr_20 [(short)7] [(short)4] [i_4] [i_4] [(unsigned short)7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30886))))) ? (((/* implicit */int) max((((/* implicit */short) ((_Bool) var_8))), (((short) (unsigned short)0))))) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_4]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_0]))))), (max((1057145012U), (((/* implicit */unsigned int) arr_6 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_0])))))))));
                            arr_26 [i_0] [i_0] = ((/* implicit */short) (_Bool)0);
                        }
                    } 
                } 
                arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_34 [i_9] [i_0] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32748))))) > (max((((/* implicit */unsigned int) arr_25 [i_0] [i_8 + 1])), (arr_5 [i_0] [i_0] [i_8] [i_0])))));
                            var_16 = ((/* implicit */signed char) max((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((unsigned int) arr_2 [i_0] [i_1]))));
                            arr_35 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) < (((/* implicit */int) (_Bool)1))));
                            arr_36 [i_0] [i_0] [i_0] [i_9] [i_8 - 2] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_50 [i_12] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) ((((/* implicit */_Bool) ((4485100433005097711LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11] [i_12] [i_12]))) * (var_5)))))))));
                            arr_51 [i_12] [i_13] = max(((((+(((/* implicit */int) var_7)))) > (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-32748))))) || (((/* implicit */_Bool) 1846138899U)))));
                            var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) arr_47 [i_12] [i_12])), (var_10)))));
                        }
                    } 
                } 
                arr_52 [i_10] [i_11] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_11] [i_11] [i_11])) + (((/* implicit */int) (unsigned char)124)))))));
                arr_53 [i_10] [i_11] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (arr_44 [i_10] [i_11]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (short)-32767)))))));
            }
        } 
    } 
}
