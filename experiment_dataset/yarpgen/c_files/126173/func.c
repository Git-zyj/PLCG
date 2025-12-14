/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126173
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) min((((var_7) >> (((((/* implicit */int) var_9)) - (660))))), (((/* implicit */unsigned int) ((int) 3051382131U)))))) : (((((/* implicit */_Bool) -1964153682)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (4ULL)))));
                        var_11 = ((/* implicit */long long int) min((((int) arr_5 [i_1] [i_1] [i_3])), (((/* implicit */int) (!(((/* implicit */_Bool) -8712442818570348010LL)))))));
                        var_12 = ((/* implicit */short) var_5);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_0] |= ((/* implicit */short) ((arr_8 [i_4] [i_1]) ? (((((var_3) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [i_4] [i_4]))))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_2)))) ? (min((var_2), (((/* implicit */unsigned long long int) (short)-20694)))) : (((/* implicit */unsigned long long int) (+(var_7))))))));
                                var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1]))))), (((((/* implicit */_Bool) arr_2 [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48606))) : (3592507979U)))));
                            }
                        } 
                    } 
                }
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_0 [i_0]);
                arr_21 [i_1] = ((/* implicit */short) (~((~(min((((/* implicit */unsigned int) var_1)), (3294500720U)))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_7)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_27 [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) 3ULL);
                arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) min(((short)17072), (((/* implicit */short) (signed char)-72))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                            {
                                arr_36 [i_6] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -8712442818570347991LL)) ? (var_7) : (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) ((unsigned int) (signed char)66))) : (min((((/* implicit */long long int) 0)), (arr_35 [i_6] [i_6] [i_7] [i_6] [i_6]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-20694)))))));
                                arr_37 [i_6] [i_7] [i_8] [i_9] [i_10] [i_7] [i_9 + 1] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) min((7460174029582357898LL), (((/* implicit */long long int) (signed char)66))))) || (((/* implicit */_Bool) 702459315U))))), (min((var_6), (((/* implicit */int) (unsigned short)17145))))));
                            }
                            arr_38 [i_7] [i_8] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_5))))));
                            arr_39 [i_6] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-3)) ? (2246791354202117574ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1636)) ? (((((/* implicit */_Bool) 18446744073709551586ULL)) ? (((((/* implicit */_Bool) 702459297U)) ? (8347717868849956230ULL) : (((/* implicit */unsigned long long int) 3592507979U)))) : (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_1)))))))));
    var_16 = ((((/* implicit */_Bool) (short)32543)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) min((((/* implicit */int) (short)32518)), (0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48619))) : (min((((/* implicit */unsigned long long int) (short)-32544)), (10099026204859595386ULL))))));
}
