/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174007
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
    var_16 = ((/* implicit */short) ((int) 2ULL));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_0] [i_1] [(unsigned char)1] = ((/* implicit */short) ((unsigned char) ((unsigned short) (short)-3498)));
                        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) 9223372036854775807LL))))), (min((arr_10 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0])))))), (arr_0 [i_0] [i_0])));
                    }
                } 
            } 
        } 
        arr_12 [10U] |= ((/* implicit */unsigned int) max((((arr_5 [i_0] [i_0] [12U]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((346231384U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [10ULL] [i_0] [i_0]))))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [(short)10]))) << (((/* implicit */int) (!(((/* implicit */_Bool) 737829413312548080ULL))))))))));
        arr_13 [i_0] = ((/* implicit */_Bool) ((signed char) arr_6 [i_0] [7ULL]));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((_Bool) ((_Bool) (unsigned char)243))))));
                            arr_29 [i_6] [15ULL] [(unsigned short)12] [i_8] [15ULL] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))))));
                            arr_30 [0ULL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_8 - 1] [i_5] [i_5 - 2] [i_8 - 1])) >= (((/* implicit */int) arr_22 [i_8 + 1] [13ULL] [i_5 + 3] [i_7]))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)43)))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            arr_33 [i_9] [i_9] [i_9] = ((/* implicit */signed char) 541540103);
            arr_34 [i_9] [i_9] = (_Bool)1;
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (short)5712))) ? ((+(-8253337948201961989LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) << (((arr_16 [8U] [2U]) + (883185811)))))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_21 = ((/* implicit */_Bool) arr_14 [i_10]);
            arr_38 [i_4] [i_10] [14ULL] |= (+(((unsigned int) arr_37 [i_4] [i_10] [i_10])));
        }
        /* LoopSeq 1 */
        for (int i_11 = 4; i_11 < 15; i_11 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((_Bool) ((4294967290U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))));
            var_23 = ((/* implicit */unsigned short) ((((long long int) (unsigned char)133)) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (293885804) : (((/* implicit */int) arr_8 [10U] [12U])))))));
            var_24 = ((/* implicit */signed char) (unsigned short)35825);
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (15717330448753117510ULL))))))));
        }
        arr_41 [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)3))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_4)), (2147483647)))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
}
