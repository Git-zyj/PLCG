/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134358
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) (short)0);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_6))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_12 [i_0]), (arr_12 [i_0]))))));
                            arr_15 [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] [i_3] |= ((/* implicit */_Bool) arr_12 [i_3]);
                            arr_16 [i_0] = ((/* implicit */_Bool) (short)23);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_14 ^= ((/* implicit */unsigned long long int) var_1);
                        var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 2] [i_5 + 2])) ? (((((/* implicit */int) arr_5 [i_6])) / ((-(var_6))))) : (max((((/* implicit */int) (short)-1)), (max((var_5), (var_5)))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned int) var_3)))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3641381753U)) && (((/* implicit */_Bool) 1311107686)))))) >= (((long long int) var_7)))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (9223372036854775807LL)));
                    }
                } 
            } 
        }
        var_19 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1774223153)) && ((!(((/* implicit */_Bool) 3527276940U)))))) ? (((((/* implicit */_Bool) -1151325360)) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) arr_9 [i_0 - 3] [(_Bool)1] [i_0])))) : (((/* implicit */unsigned int) min((arr_10 [i_0 + 1] [10]), (((/* implicit */int) arr_6 [i_0 + 1] [0LL])))))));
    }
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        for (short i_10 = 2; i_10 < 10; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */signed char) min((max((arr_0 [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_37 [(_Bool)1] [(_Bool)1] [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1LL) % (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) max(((short)-18), ((short)-1)))) : (var_8))))));
                                var_21 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_11] [i_9] [i_10 + 1] [i_12] [i_10 + 1])) / (((/* implicit */int) arr_35 [i_11] [i_11] [i_10 + 2] [i_11] [i_11]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4252958055351528860ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_11] [i_10] [i_11])))), (max((arr_8 [i_12] [i_11] [i_10] [i_9]), (((/* implicit */unsigned long long int) -1))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_10] [i_10 + 1] [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_11] [i_10 + 1] [i_10 - 1] [i_10 - 1] [(short)3] [i_10 - 1]))) : (var_10))) > (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-1)))))))));
                }
            } 
        } 
    } 
}
