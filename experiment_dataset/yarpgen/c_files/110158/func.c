/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110158
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_17 = 0ULL;
                            arr_11 [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) + (((/* implicit */int) (short)-29878))))) + (var_3)))));
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3 + 1] [i_1] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) 14616783962760030797ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29877))) : (var_11))), (((/* implicit */long long int) arr_0 [i_0]))))));
                                var_18 += ((short) arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 1]);
                                arr_16 [i_0] [(short)0] [i_2] [i_1] [(short)0] |= ((/* implicit */short) ((unsigned int) (+(0ULL))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                            {
                                arr_19 [i_3] [i_1] [i_3] [i_3 - 2] [i_3] [i_5] [i_3 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_5]))));
                                var_19 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) arr_12 [(signed char)2] [(signed char)2] [i_5])) > (var_7)))));
                                var_20 ^= ((/* implicit */signed char) 4833346172952496686ULL);
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
                            {
                                var_21 += ((/* implicit */int) 18446744073709551615ULL);
                                arr_23 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)29877)))) >= (((525795668271593869ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                                var_22 = ((/* implicit */int) (~(5012919477433224867LL)));
                                arr_24 [i_1] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) ((short) 11424299370675165712ULL));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                            {
                                var_23 = ((signed char) (short)-6937);
                                var_24 = ((/* implicit */unsigned long long int) ((unsigned short) 969624597U));
                                arr_28 [i_7] [i_3 - 2] [i_3] [i_1] [i_0] = (+(arr_14 [i_1] [(short)0] [i_2] [i_2 + 2] [i_2 + 1] [i_7] [i_7]));
                                arr_29 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 2041427764)) % (7758742352610791960LL)));
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_2))))), (((short) var_0))));
                var_26 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))));
                var_27 |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_26 [i_0] [i_0] [(unsigned short)16] [i_0] [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) -187729035))))));
                arr_30 [i_0] [i_1] [i_1] = var_12;
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_4);
}
