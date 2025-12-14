/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179462
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned long long int) 164977243)), (12771243754011163602ULL));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -164977250)) || (((/* implicit */_Bool) arr_1 [i_0]))))) ^ (max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0]))))))) ? (var_8) : (((/* implicit */long long int) (~(((((/* implicit */unsigned int) -164977250)) % (var_2))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9476037678062322297ULL)) ? (-164977262) : (((/* implicit */int) (unsigned char)245))));
        arr_4 [i_0] = ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (min((-164977223), (164977268))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((164977286) > (((/* implicit */int) (_Bool)0))));
    }
    for (short i_1 = 4; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_1 - 2] [(unsigned short)9] = (-(((/* implicit */int) arr_14 [i_1 - 1])));
                        arr_16 [i_1 - 2] [i_2] [7U] [i_3] [i_4] [i_4] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_3] [i_2])) + (((/* implicit */int) arr_9 [i_1] [i_2] [i_4])))));
                        var_13 = ((/* implicit */int) ((short) arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 4]));
                        arr_17 [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [5])) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))))))));
                    }
                    arr_18 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? (((((long long int) 7083051641232996668ULL)) | (((/* implicit */long long int) ((((/* implicit */unsigned int) var_6)) | (3096669759U)))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (arr_13 [i_1] [(short)1] [i_3] [i_3] [i_3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_25 [i_3] [22ULL] = ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_6])) ? (((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) ((short) -8609822026456814065LL))))))) : ((~(((/* implicit */int) ((((/* implicit */int) arr_20 [i_1] [i_3] [i_6])) > (164977249)))))));
                                var_14 = ((/* implicit */long long int) arr_24 [i_2] [i_3] [i_5] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_1] = ((/* implicit */unsigned short) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
        arr_27 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3751822851U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_14 [i_1 - 2]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max(((unsigned char)7), (((/* implicit */unsigned char) (signed char)105))))))), (min((((/* implicit */int) ((unsigned short) (signed char)-9))), (-164977261)))));
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) arr_29 [i_7]);
        var_16 -= ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) -1765785612)), (0U))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max(((unsigned char)3), ((unsigned char)0))))));
    }
    var_18 = ((/* implicit */long long int) (((~(((/* implicit */int) var_10)))) > ((-(164977243)))));
    var_19 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10840)) ? (var_4) : (9877583235087793536ULL)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)208)))));
}
