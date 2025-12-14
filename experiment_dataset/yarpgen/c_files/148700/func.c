/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148700
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -661743602))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) var_16);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_4))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 496532690))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 2822712830572995960ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (528482304LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 &= ((/* implicit */unsigned char) 10392318381934507296ULL);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (min((((((/* implicit */unsigned long long int) 3089569326U)) + (0ULL))), (((/* implicit */unsigned long long int) (~(arr_1 [i_1])))))) : (9042368678813273591ULL))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        var_23 = arr_1 [i_3];
                        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_2]) >> (((((/* implicit */int) var_17)) - (16)))))) ? ((~(arr_6 [i_0]))) : (((/* implicit */unsigned long long int) arr_7 [i_3] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)159)) ? (15624031243136555647ULL) : (5163386993126624362ULL)));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 971854644U)) ? (10392318381934507292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                        arr_14 [i_2] [i_2] [(unsigned char)10] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 794422407U)) ? (-4878007189891863146LL) : ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                    }
                }
            } 
        } 
        var_27 += (unsigned char)47;
    }
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) var_5);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                arr_30 [i_5] [17U] [i_7 - 1] [i_8] [i_5] [i_8] [10LL] = ((/* implicit */unsigned int) 8537421093111612547ULL);
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_7 - 1] [i_6] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned long long int) min((1198771954U), (((/* implicit */unsigned int) (unsigned char)211))))), (8537421093111612531ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((((-1107905117) + (2147483647))) >> (0ULL));
    var_30 += ((/* implicit */unsigned int) var_12);
}
