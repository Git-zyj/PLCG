/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18005
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) (-(var_1))))));
    var_11 = ((unsigned short) ((((-7780705208608251536LL) + (9223372036854775807LL))) >> (((6992644549707243162ULL) - (6992644549707243137ULL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_2 [i_0]));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_15 [i_3] [i_0] [i_2] [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */int) (-(6992644549707243152ULL)));
                            arr_19 [4LL] [i_0] [i_0] [i_3] [i_4] [(_Bool)0] = ((/* implicit */int) ((_Bool) ((short) 5490209094893807415ULL)));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_1]))))) + (((long long int) arr_5 [i_3] [i_1] [i_0])))))));
                            arr_23 [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [10LL])) & (((/* implicit */int) arr_17 [(short)7] [i_1] [i_1] [i_0])))) ^ (((/* implicit */int) var_3))));
                            arr_24 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((var_2) / (((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_2] [i_3] [i_5])))) ^ (((/* implicit */unsigned long long int) var_0))));
                            arr_25 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned int) ((arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [1LL]) >= (arr_22 [i_2 - 1] [i_3] [i_5] [i_5] [i_5])));
                        }
                        for (int i_6 = 4; i_6 < 10; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (11454099524002308464ULL)));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_29 [i_2] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((12956534978815744176ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> (((unsigned int) (_Bool)1))));
                        }
                        arr_30 [i_0] [i_0] [9U] [4LL] = (-(var_6));
                    }
                } 
            } 
            arr_31 [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
            arr_34 [i_0] = ((/* implicit */unsigned int) (+((-(820005348)))));
            arr_35 [i_0] [i_7] = ((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-6905053526527021315LL))) % (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)3235))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0])))));
        }
        arr_36 [i_0] = ((/* implicit */unsigned int) ((11454099524002308476ULL) == (((/* implicit */unsigned long long int) 1492499781U))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
        {
            for (short i_9 = 1; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_43 [i_0] [i_8 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [3ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_8] [i_8] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9 - 1] [i_0]))) : ((+(549755809792LL)))));
                    arr_44 [5ULL] [i_8 + 1] [4ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_8 - 2] [i_8 - 2] [i_9 - 1] [i_9 + 1])) != (((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 2] [i_9 - 1] [i_9 - 1]))));
                    arr_45 [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_0] [i_9 - 1]))));
                }
            } 
        } 
    }
    var_19 = var_2;
}
