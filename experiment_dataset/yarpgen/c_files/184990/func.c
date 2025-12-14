/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184990
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)216))));
        arr_3 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) < (1602141421137727773ULL))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)16))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_1 [i_0]))), (max((((/* implicit */unsigned int) (unsigned char)106)), (1705400236U))))))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        arr_8 [(unsigned char)2] = ((/* implicit */unsigned long long int) ((unsigned char) 3040038115202753633ULL));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_20 [(signed char)6] [(signed char)6] [i_2] [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) ^ (3040038115202753633ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_19 [(short)3] [i_3 + 2] [i_3 + 2] [i_3])) <= (((/* implicit */int) arr_4 [i_1] [i_2 - 3]))))) <= (((/* implicit */int) arr_4 [i_3 - 1] [i_2 - 2])))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_24 [2] [(signed char)6] [2] = ((/* implicit */signed char) arr_18 [i_1] [i_3] [i_4] [i_5]);
                            arr_25 [0ULL] [0ULL] [i_3 - 1] [(unsigned short)2] [i_4] [i_5] = (~((~(((/* implicit */int) var_7)))));
                            arr_26 [(signed char)2] [i_2 - 2] = ((/* implicit */unsigned int) arr_6 [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_30 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1289326139)) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 2]))));
                            arr_31 [i_2] [i_2 - 3] [i_2 - 3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30080)) < (((/* implicit */int) (short)-18328))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_35 [i_2] [i_2] [(signed char)1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_33 [i_2]);
                        arr_36 [i_7] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) arr_4 [6ULL] [i_7]);
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            arr_39 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_8] &= ((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_28 [i_8])));
                            arr_40 [i_8] [i_8] [i_3] [i_8] [i_1 + 3] = ((/* implicit */_Bool) ((unsigned int) 718273179U));
                            arr_41 [6LL] [i_2] = ((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_7] [i_2]);
                        }
                    }
                    arr_42 [i_2 - 3] [i_2 - 3] [(unsigned char)6] &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [4ULL] [(unsigned short)4])) : (((/* implicit */int) var_2)))));
                    arr_43 [(_Bool)0] [i_2] [i_2] [i_1] = ((/* implicit */long long int) var_6);
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_47 [i_9] = ((/* implicit */int) 0U);
        arr_48 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned char) arr_44 [i_9]);
        arr_49 [i_9] [i_9] = ((/* implicit */int) ((long long int) arr_44 [i_9]));
    }
    var_15 = var_7;
}
