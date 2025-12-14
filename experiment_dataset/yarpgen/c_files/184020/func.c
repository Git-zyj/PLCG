/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184020
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
    var_12 *= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_14 = ((unsigned short) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_16 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4611685949707911168LL)), (arr_9 [i_1])))) ? (131941395333120LL) : (arr_7 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 - 3]))))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)63)))), (((/* implicit */int) (signed char)63)))) != (((/* implicit */int) ((unsigned short) ((signed char) arr_7 [i_4] [i_3 - 3] [i_0] [i_0])))))))));
                            arr_13 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_4 + 2] [i_1] [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4]))))))));
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)95)), (((980940997678127653LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_5 [i_4 + 1]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (long long int i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max((((arr_7 [i_6 - 3] [i_6] [i_6 - 3] [i_6 - 3]) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1]))))), (((/* implicit */long long int) arr_1 [i_7])));
                            var_20 = ((/* implicit */unsigned int) ((unsigned short) min((max((arr_8 [i_0] [i_0] [i_0] [i_6 - 3] [i_6] [i_6 - 3]), (arr_14 [i_0] [i_0] [i_0] [i_5]))), (arr_8 [i_0] [i_0] [i_5] [i_6 - 2] [i_7] [i_0]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) arr_19 [i_1] [i_0]);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_22 ^= ((/* implicit */signed char) ((unsigned short) ((unsigned int) (unsigned short)41834)));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 18; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        {
                            arr_31 [i_0] [i_9] [i_0] [i_0] [i_11] |= ((/* implicit */unsigned short) arr_6 [i_0] [i_11]);
                            var_23 = ((/* implicit */short) (+(arr_19 [i_8] [i_9])));
                            var_24 = ((/* implicit */unsigned char) ((unsigned short) arr_28 [i_8] [i_9] [i_9]));
                            arr_32 [i_0] [i_0] [i_10] [i_0] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_10] [i_11])) ? (((/* implicit */int) arr_28 [i_10] [i_0] [i_0])) : (((/* implicit */int) (signed char)-88))))) ? (((var_5) / (((/* implicit */unsigned long long int) arr_26 [i_0] [i_8] [i_0] [i_10] [i_8] [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10] [i_10 - 1] [i_10] [i_10] [i_8] [i_10 + 1] [i_8])))));
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_0] [i_0]))));
                        }
                    } 
                } 
                var_26 -= ((/* implicit */unsigned short) ((arr_11 [i_8] [i_9]) + (((/* implicit */unsigned long long int) 980940997678127653LL))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)103)) >= (((/* implicit */int) arr_29 [i_0])))))));
                            arr_40 [i_0] [i_0] [i_0] [i_12] [i_13] = ((/* implicit */unsigned short) (+(18013848753668096ULL)));
                            arr_41 [i_0] [i_8] [i_0] [i_0] [i_13] = arr_3 [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                arr_42 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)30058));
            }
            arr_43 [i_0] [i_0] [i_8] = ((/* implicit */long long int) ((arr_9 [i_8]) / (((/* implicit */unsigned long long int) 2067536228U))));
        }
    }
}
