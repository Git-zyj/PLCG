/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141332
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_3 [i_1] [i_0 - 2] [(unsigned short)4]);
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((arr_2 [i_0 - 3]), (arr_2 [i_0 + 1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((short) arr_8 [(_Bool)1] [5U]));
        arr_11 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) arr_7 [20U])), (var_15))))))), (((unsigned int) (unsigned char)141))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) max(((~(var_1))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)48)), (401190771U))), (arr_10 [i_3] [i_3]))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned long long int) (+(((var_0) - (((/* implicit */long long int) ((/* implicit */int) (short)-12674)))))));
            arr_19 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(_Bool)1] [i_4])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
            {
                var_19 ^= ((((3893776547U) == (var_14))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) var_9))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(401190771U))))));
                arr_22 [i_5] [i_5] = ((/* implicit */int) var_1);
            }
            for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)49219)))) >= ((~(((arr_13 [21U]) + (((/* implicit */long long int) 3893776524U))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (max((((/* implicit */unsigned int) arr_9 [i_6 + 2])), (((unsigned int) ((((/* implicit */int) arr_24 [i_3] [i_3] [i_3])) & (((/* implicit */int) arr_20 [i_3] [i_3])))))))));
                var_23 = ((/* implicit */_Bool) max(((((+(3893776525U))) / (1317126433U))), (((/* implicit */unsigned int) (unsigned short)48135))));
            }
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_24 ^= ((/* implicit */unsigned long long int) var_2);
                    arr_30 [i_3] = ((/* implicit */signed char) max((-7404303957887552209LL), (((/* implicit */long long int) (signed char)125))));
                }
                var_25 ^= ((/* implicit */unsigned char) (_Bool)1);
            }
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_9))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (4262224083U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)245)))))));
                        arr_37 [i_3] [24LL] [i_9] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_36 [i_10] [i_9] [i_4] [i_4] [i_3] [i_3]);
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 24; i_11 += 3) 
                        {
                            arr_41 [i_11] [i_3] [i_11] [i_10] [(unsigned short)3] [i_10] [i_11] = ((/* implicit */unsigned short) 8752733048983646529ULL);
                            arr_42 [i_3] [i_4] [i_9] [i_10] [i_10] [(unsigned char)19] = ((/* implicit */unsigned char) ((int) var_2));
                            var_28 -= max((max(((~(arr_32 [i_11] [i_9] [i_4]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_15 [i_11] [i_9] [i_3])), (arr_10 [i_3] [i_4])))))), (((/* implicit */unsigned long long int) var_15)));
                        }
                        var_29 &= (+(((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)180))))) : (((unsigned int) (unsigned short)0)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_13 = 3; i_13 < 24; i_13 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_0))));
                arr_50 [i_3] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) 2054388694U)) ? (((/* implicit */long long int) var_11)) : (arr_23 [i_13 - 1] [i_13 + 1])));
            }
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                arr_54 [i_14] [i_14] = (-(1173653077U));
                arr_55 [i_3] [i_3] [i_3] [i_14] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-21689)), (3544257736U)));
            }
            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)72))))), (15868595898888645089ULL)));
            var_32 = ((/* implicit */unsigned int) var_8);
        }
        arr_56 [i_3] = ((/* implicit */_Bool) max(((+(4264750475U))), (((/* implicit */unsigned int) arr_28 [i_3]))));
    }
    var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1374595037U)) == (2578148174820906527ULL)))), (var_4))))));
}
