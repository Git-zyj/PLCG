/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120272
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (1524961946)))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 ^= ((/* implicit */unsigned short) 5143818979655722730ULL);
                            var_12 -= ((/* implicit */int) ((var_9) << (((((max((((/* implicit */unsigned long long int) 1932214561)), (var_3))) & ((+(arr_9 [i_0] [i_0] [i_2] [i_3]))))) - (9295582561125270722ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                arr_16 [i_5] = ((/* implicit */unsigned char) var_6);
                arr_17 [i_4] [i_4] [i_5] = (+((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))));
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) + (2147483647))) << (max((((/* implicit */long long int) (signed char)-75)), (0LL)))));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)47133)) ? (((3971439755U) << (((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) * (0LL))))) : (((/* implicit */unsigned int) -1450920311)))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-55)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) arr_20 [i_6]))), (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_24 [i_6] [i_6] [(signed char)14])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_22 [i_7])))))))))));
            arr_25 [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)49)) << (((var_5) - (3101983082051692057ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            arr_26 [i_6] [i_6] [16ULL] = ((/* implicit */unsigned long long int) ((_Bool) max(((-(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */int) (unsigned short)31707)) : (((/* implicit */int) arr_21 [i_6] [i_7]))))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)-56)) <= (((/* implicit */int) var_2))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) -4804783348713273627LL))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_7))))) ? (max((arr_31 [i_9] [i_9]), (arr_31 [i_9] [i_9]))) : (((((/* implicit */_Bool) arr_31 [i_9] [i_9])) ? (arr_31 [i_9] [i_9]) : (((/* implicit */unsigned long long int) var_6))))));
        arr_34 [i_9] [(unsigned char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)75)) - (0)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38559))) != (3971439755U)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) && (((/* implicit */_Bool) arr_33 [i_9] [i_9])))))));
        arr_35 [i_9] = ((/* implicit */signed char) (~(-1063638359547274383LL)));
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((-652700109) | (((/* implicit */int) (unsigned char)255))))) - ((((_Bool)0) ? (arr_31 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 0LL))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_33 [(unsigned short)10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_32 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9]))))) : (arr_33 [(signed char)20] [i_9])))) : (max((((/* implicit */long long int) var_7)), (min((var_8), (((/* implicit */long long int) arr_30 [i_9] [i_9]))))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((int) (_Bool)1)))));
        arr_39 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(unsigned char)9] [i_10] [i_10] [i_10])) ? (652700109) : (((/* implicit */int) arr_5 [i_10] [i_10] [i_10] [i_10]))));
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_23 &= ((/* implicit */signed char) var_10);
                            arr_50 [i_12] [i_10] [i_12] [i_10] [i_10] &= ((/* implicit */signed char) ((arr_9 [(unsigned char)4] [i_12] [(unsigned short)6] [i_14]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        }
                        var_24 -= (-(((int) (unsigned short)5586)));
                    }
                } 
            } 
        } 
    }
    var_25 *= ((/* implicit */signed char) var_5);
}
