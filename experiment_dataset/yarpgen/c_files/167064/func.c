/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167064
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_3])) : (arr_2 [i_0 - 2])))) > (((unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_2])))))));
                        arr_13 [(signed char)8] [(signed char)8] [2U] [i_1] |= ((/* implicit */unsigned char) (-(134217727LL)));
                    }
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) ((short) (unsigned char)122))) : (((/* implicit */int) arr_3 [i_0] [i_0] [4])))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 3] [i_0 - 2])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 2] [i_0 - 2])))))));
                            arr_20 [i_0] [i_0 + 3] [i_0] [i_0 + 1] [i_2] = ((var_6) ? (((((/* implicit */_Bool) 2251250057871360ULL)) ? (var_1) : (((/* implicit */int) arr_6 [i_4] [i_1] [i_0 + 1])))) : (((/* implicit */int) var_8)));
                            var_15 |= ((/* implicit */_Bool) var_9);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_2])) ? (((/* implicit */int) (unsigned char)162)) : (arr_18 [i_0] [i_1] [i_2] [i_4] [i_5])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            arr_24 [i_0 + 3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((arr_11 [i_0] [i_1] [i_1] [i_6]) ? (arr_19 [i_2]) : (var_2)))))));
                            arr_25 [(_Bool)0] [i_2] [i_6] = ((/* implicit */unsigned int) (unsigned char)3);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0 + 3] [i_2])))) : (min((((/* implicit */unsigned long long int) arr_9 [i_4] [i_2])), (14109816600914640281ULL)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((short) max((var_10), (((((/* implicit */_Bool) arr_6 [(unsigned char)5] [i_2] [i_7])) || (((/* implicit */_Bool) arr_0 [i_4])))))));
                            arr_28 [i_1] [2] [i_2] [i_4] [10ULL] [8ULL] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((long long int) var_7)) + (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [7LL] [i_0])) << (((((/* implicit */int) arr_21 [i_1] [i_1] [(signed char)12] [i_4] [i_4] [i_4] [(signed char)12])) - (19120))))))))), (10269312618978107434ULL)));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
    {
        var_19 = ((/* implicit */int) var_12);
        arr_32 [i_8] = ((/* implicit */int) arr_31 [i_8] [i_8]);
    }
    var_20 = ((/* implicit */unsigned char) var_0);
}
