/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128731
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
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */signed char) ((unsigned short) (signed char)-53));
                arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2] &= ((/* implicit */long long int) max((arr_1 [i_0 + 1] [i_1]), (((/* implicit */short) max((((signed char) var_8)), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)49))))))))));
                var_14 = ((/* implicit */unsigned char) arr_1 [i_0 + 2] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))) : (max((0U), (((/* implicit */unsigned int) arr_5 [i_2])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_8)) ? (-3290677803062062566LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2])))))));
            var_17 *= ((/* implicit */unsigned int) (~(arr_8 [i_3] [i_3] [i_2])));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (unsigned char)230);
                        arr_17 [i_5] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4092691596390486402LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_6)));
                    }
                } 
            } 
            arr_18 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) | (arr_9 [13ULL] [i_2])));
        }
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) & (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((~(287667426198290432LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_6] [(short)1] [(short)1] [i_6]))))))));
            var_20 ^= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) (signed char)78))))));
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                var_21 = ((/* implicit */long long int) (signed char)62);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_10))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_25 [(short)8] [20U] [i_2])))))) : (((((/* implicit */int) max((var_5), ((unsigned char)26)))) << (((/* implicit */int) ((_Bool) (_Bool)0)))))));
            }
        }
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-49)))) ? (-3290677803062062559LL) : (((/* implicit */long long int) var_6))))) || (((/* implicit */_Bool) var_7))));
        var_25 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_1 [(short)19] [i_2]))))) ? (max((arr_2 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) -3290677803062062566LL)))) : (((/* implicit */unsigned long long int) arr_23 [i_2] [i_2] [i_2] [i_2])))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) -3290677803062062559LL))) ^ (arr_11 [i_2] [i_2] [i_2] [i_2]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_8])) || (((/* implicit */_Bool) 3290677803062062566LL)))) ? (((/* implicit */unsigned int) max((arr_22 [4LL] [4LL] [i_2]), (((/* implicit */int) arr_15 [i_2] [i_8] [(unsigned short)10] [i_8]))))) : (((unsigned int) 4294967295U))))));
            arr_28 [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (arr_8 [i_2] [i_2] [i_8]) : (arr_8 [i_2] [(signed char)19] [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                        var_29 += ((/* implicit */unsigned char) 4294967295U);
                        var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */_Bool) arr_3 [i_11])) ? (arr_36 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_21 [i_2])) / (((((/* implicit */_Bool) 1097742053706685383LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL))))))));
                            var_33 = ((/* implicit */int) (short)(-32767 - 1));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))) ? (arr_8 [i_2] [i_2] [i_2]) : (((((/* implicit */_Bool) arr_25 [i_2] [i_9] [i_9])) ? (-3290677803062062559LL) : (((/* implicit */long long int) arr_24 [i_12] [i_10] [i_9]))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_35 += ((/* implicit */unsigned int) ((_Bool) (+(arr_11 [i_2] [i_9] [(unsigned short)16] [(unsigned short)16]))));
                            arr_42 [i_2] [i_9] [i_2] [10] [i_9] [i_2] = ((/* implicit */unsigned long long int) arr_38 [i_2] [8] [i_10] [1LL] [8]);
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
    {
        arr_47 [i_14] = ((/* implicit */long long int) var_10);
        var_36 = ((/* implicit */unsigned int) arr_33 [i_14] [i_14] [i_14]);
    }
}
