/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157318
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)241))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_1]);
                            arr_11 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) / (4294934528U)));
                        }
                    } 
                } 
                arr_12 [8U] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0] [i_0])), ((~(((/* implicit */int) var_8))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_4 [0U] [i_4 + 1] [i_4]) ? (32772U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [14ULL] [i_4 - 2] [i_4]))))))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) ((int) ((min((((/* implicit */unsigned int) arr_1 [i_4] [i_4 - 4])), (var_9))) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 3) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [22]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) ((int) (+(arr_15 [i_7]))));
                    arr_25 [i_5] = ((/* implicit */long long int) var_9);
                    arr_26 [i_7] [i_6] [(signed char)7] [i_6] = ((/* implicit */signed char) ((((arr_22 [3U] [11] [(signed char)18] [(unsigned short)4]) & (((/* implicit */long long int) arr_9 [i_7] [(signed char)18] [i_5] [i_5 - 2])))) / (((/* implicit */long long int) arr_21 [i_5] [i_6] [16U]))));
                    arr_27 [i_5] [10LL] [i_5] = ((((/* implicit */int) arr_5 [(unsigned char)12])) << (((/* implicit */int) (unsigned char)15)));
                    arr_28 [i_6] [i_7] = ((/* implicit */unsigned short) ((long long int) (unsigned char)50));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) (unsigned char)9))));
        var_19 = ((/* implicit */int) ((arr_20 [i_8 + 1] [i_8 - 1]) / (6144U)));
        arr_33 [i_8 - 2] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_8])) ? (4294934528U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [10U])))));
        arr_34 [i_8 - 3] = ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) 6132U)));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((_Bool) 2395898320590107516ULL));
                        arr_48 [i_12] = ((/* implicit */signed char) ((unsigned int) arr_39 [i_10] [i_11]));
                    }
                } 
            } 
        } 
        arr_49 [i_9] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (7678982475211599721LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43179))))));
        var_21 -= ((/* implicit */long long int) ((int) arr_30 [i_9] [i_9]));
    }
}
