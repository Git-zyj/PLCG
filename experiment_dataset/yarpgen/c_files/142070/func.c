/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142070
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_7 [6] [i_0] [i_1] [i_2 + 1] = ((/* implicit */signed char) arr_1 [i_0] [0LL]);
                    var_12 = ((/* implicit */long long int) ((arr_2 [8ULL]) >> (((((/* implicit */int) (signed char)-36)) + (68)))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) var_9);
                        var_14 *= ((/* implicit */unsigned int) ((signed char) var_2));
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [(signed char)5])) || (((/* implicit */_Bool) (signed char)36))));
                        arr_11 [i_0] [8LL] [(_Bool)0] [i_0] = ((var_5) / (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_3]))))));
                    }
                    arr_12 [7U] [i_1] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_1))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(short)8] [i_4 + 1])) ? (var_4) : (arr_6 [i_0] [i_4 + 1])));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_17 = ((/* implicit */long long int) 3239437934666081541ULL);
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -2054247154418117036LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807ULL)) ? (arr_4 [(signed char)7] [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (2361270503626600368ULL)));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((signed char) arr_9 [i_0] [i_4 + 2] [i_4])))));
                var_20 = ((/* implicit */short) 634187780);
            }
            arr_22 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        for (short i_7 = 1; i_7 < 7; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((-(5608904675300213127LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)1016))))))));
            var_22 = ((/* implicit */_Bool) ((unsigned long long int) (-(9223372036854775807LL))));
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                var_23 = ((/* implicit */signed char) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) -5608904675300213128LL))));
                var_24 = var_10;
                arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_6))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 1385481908)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (short)-3664))));
            }
        }
        arr_28 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
        var_26 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) == (((/* implicit */int) (short)16681)))) ? ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) (signed char)-51)) / (((/* implicit */int) (signed char)-90))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) 
    {
        for (int i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            {
                var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (signed char)42)), (5608904675300213132LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 492960548U)) || (((/* implicit */_Bool) var_7)))))))), (max((((((/* implicit */_Bool) 13390623383284718989ULL)) ? (((/* implicit */unsigned long long int) -2054247154418117023LL)) : (var_4))), (((/* implicit */unsigned long long int) (-(var_1))))))));
                var_28 = ((/* implicit */long long int) arr_32 [i_9] [i_9]);
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) -2054247154418117036LL))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_30 *= ((/* implicit */short) -2441904491416065198LL);
                    var_31 = ((/* implicit */signed char) max((((/* implicit */int) max(((unsigned char)193), (((/* implicit */unsigned char) (_Bool)1))))), ((+(((/* implicit */int) arr_32 [i_11] [i_11]))))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) ((unsigned char) var_5));
}
