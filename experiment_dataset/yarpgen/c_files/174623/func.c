/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174623
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1] [i_2]);
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) arr_4 [i_3 + 3] [i_0])));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3]))))));
                                arr_13 [i_4] [i_3] [i_3] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 25299426)))))) > (((((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) (signed char)(-127 - 1))))) | (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (_Bool)0)), (17424749737058495961ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                var_16 = ((/* implicit */int) (unsigned char)0);
                                var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_0)))))) ? (((((/* implicit */int) arr_28 [i_9] [i_8] [i_7] [i_6] [i_5])) - (arr_18 [i_6]))) : (((((/* implicit */_Bool) 2251799813685248ULL)) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_23 [i_9] [i_6] [i_7] [i_6] [i_5]))))) : (((/* implicit */int) min((var_10), (arr_15 [i_7])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) > (arr_18 [i_6])))) >= (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_5] [i_6])), (arr_25 [i_11] [i_6] [i_6] [i_5]))))))) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [i_6] [i_6] [i_10] [i_11] [i_5 - 1] [i_10])), (arr_26 [i_10 - 2] [i_11] [i_10] [i_11] [i_6]))))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)14095))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (signed char i_14 = 4; i_14 < 16; i_14 += 4) 
                        {
                            {
                                arr_44 [i_6] = ((/* implicit */signed char) arr_21 [i_5] [i_5]);
                                var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (short)14009))) && (((/* implicit */_Bool) arr_26 [i_6] [i_13] [i_12] [i_6] [i_6]))))) != (((/* implicit */int) ((short) arr_31 [i_5 - 1] [i_5 - 1] [i_14 + 1] [i_14 - 3])))));
                                arr_45 [i_6] = ((long long int) ((int) arr_18 [i_6]));
                                var_21 = ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)-113)))) != (((/* implicit */int) arr_20 [i_6] [i_12] [i_13] [i_14])))) && (((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
