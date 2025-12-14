/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170594
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_2] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (signed char)95)) ? (9421560692358831131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0LL] [i_1])))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (signed char)3)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9025183381350720485ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)33270))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))) : (((/* implicit */int) (unsigned short)10375))))))))));
                }
                for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_3] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)8] [i_3] [i_0])) ? (9421560692358831136ULL) : (arr_9 [11LL] [i_0] [i_0])))) ? (((/* implicit */long long int) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) arr_14 [i_0] [i_3 + 1]))))) : ((~(-7181388603259056059LL)))))) ? (((((/* implicit */int) min(((unsigned short)55175), (((/* implicit */unsigned short) (short)-20504))))) >> ((((-(arr_9 [i_3] [i_0] [i_0]))) - (2343341922377719705ULL))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_3 + 1] [i_0])) == (((/* implicit */int) (short)-7523)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)8] [i_3] [i_0])) ? (9421560692358831136ULL) : (arr_9 [11LL] [i_0] [i_0])))) ? (((/* implicit */long long int) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) arr_14 [i_0] [i_3 + 1]))))) : ((~(-7181388603259056059LL)))))) ? (((((/* implicit */int) min(((unsigned short)55175), (((/* implicit */unsigned short) (short)-20504))))) >> ((((((-(arr_9 [i_3] [i_0] [i_0]))) - (2343341922377719705ULL))) - (3550742023134516739ULL))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_3 + 1] [i_0])) == (((/* implicit */int) (short)-7523))))))));
                    var_18 -= ((/* implicit */int) (signed char)-87);
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) (+(10388329352557738801ULL)));
                        arr_23 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_13 [i_0] [i_0] [i_5] [i_4])));
                    }
                    for (signed char i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6 + 1])) ? (arr_19 [i_6 - 1]) : (arr_19 [i_6 - 1]))))));
                        var_20 = ((/* implicit */long long int) 986476210U);
                    }
                    for (signed char i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_1] [i_4] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_0])) ? (7319184226435901700LL) : (((/* implicit */long long int) 524287)))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_4] [i_1] [i_7 - 1] [i_7]))))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_26 [i_1] [i_7] [i_7 + 1] [i_7] [i_7 + 1]) - (6969999908914007176LL))))))));
                    }
                    arr_29 [i_0] [i_1] [i_1] [i_4] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((3479873800U) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_7 [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [7])) : (((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1])))))));
                var_23 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) 16985387088107898087ULL)) || (((/* implicit */_Bool) arr_4 [i_1]))))), (min((-6), (((/* implicit */int) (unsigned short)16483))))));
                arr_30 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_13);
                arr_31 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))), ((((_Bool)0) ? (643568650) : (((/* implicit */int) arr_18 [i_0] [4U] [4U] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_9);
}
