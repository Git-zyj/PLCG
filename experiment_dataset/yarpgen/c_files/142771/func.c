/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142771
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
    var_16 = ((/* implicit */int) var_1);
    var_17 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)-1)))), ((+(((/* implicit */int) ((((/* implicit */int) (short)-1793)) >= (((/* implicit */int) var_9)))))))));
    var_18 ^= ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (arr_2 [i_0])))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) arr_2 [i_0]))))))), ((+(((var_15) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) arr_7 [i_0])), (var_0)))))))))));
                            arr_10 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_1] [i_2] [i_2])), ((unsigned char)249))))))) != (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (min((arr_13 [(unsigned char)1] [i_1] [1ULL] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_4] [i_4 + 1])) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_4 [i_4] [i_1] [i_1]))))) * (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_5])) : (var_14)))))));
                                var_22 = (+(((/* implicit */int) (unsigned char)0)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 4; i_7 < 20; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (short)-32757);
                arr_26 [8LL] = ((/* implicit */long long int) (+(arr_0 [i_7 - 1])));
                var_24 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_9 [i_7 - 4] [i_7] [i_7 - 3] [i_7 - 4] [i_7 - 4] [i_7 + 1])), (var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 + 2])) < (((/* implicit */int) arr_9 [i_7 - 2] [17ULL] [i_7 - 3] [i_7 + 2] [i_7 - 1] [i_7 + 1])))))));
                var_25 ^= ((/* implicit */unsigned char) ((long long int) 10066411846421075384ULL));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    arr_29 [i_9 - 2] [(unsigned char)7] [i_7 + 1] = ((/* implicit */signed char) (unsigned char)6);
                    arr_30 [i_7] [i_7 + 1] [i_7] [i_7] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_4))))) || (((/* implicit */_Bool) var_0)))));
                }
            }
        } 
    } 
}
