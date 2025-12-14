/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178420
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
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((2730532667U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((arr_1 [i_0]) + (((/* implicit */int) var_6)))) : (arr_1 [i_1 - 3]))))));
                var_14 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (var_10))))), (4272096580U)));
                var_15 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 2] [i_1 - 3])))), (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 4] [i_1 - 2]))));
                var_16 = ((/* implicit */unsigned int) (-(((504403158265495552LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (1174709863U)));
        var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) == (arr_6 [(signed char)12]))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) > (9265517454304346926ULL))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) ((var_7) <= (-1388296682))))));
                    var_20 = ((/* implicit */long long int) ((arr_7 [i_3]) & (arr_7 [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_19 [i_3] [i_3] [i_5] [i_6] [i_7 - 1] = ((((/* implicit */_Bool) (-(arr_17 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (504403158265495552LL)))) : (18446744073709551615ULL));
                                arr_20 [i_3] [i_4] [i_6] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_6)))));
                                arr_21 [i_7] [i_7] [i_3] [i_6] [i_3] [i_4] [16U] = ((/* implicit */signed char) arr_7 [i_3]);
                                var_21 &= ((/* implicit */signed char) arr_18 [i_4 + 1] [(unsigned short)2] [i_7 + 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) var_6);
                            var_24 = ((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_5]);
                            arr_27 [i_4 + 2] [i_3] [i_3] [i_4 + 2] = ((/* implicit */signed char) arr_16 [i_3] [i_3 + 1]);
                            var_25 = ((/* implicit */unsigned char) (signed char)6);
                            arr_28 [i_3 - 1] [i_3] [i_5] [8U] [8U] = ((/* implicit */unsigned int) 15373337999105153186ULL);
                        }
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3])) ? (9007199254740991ULL) : (arr_7 [i_3])));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */int) var_9);
    }
    var_28 = ((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))))));
}
