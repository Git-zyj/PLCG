/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127079
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [(unsigned short)10] [i_1] [i_3] [(unsigned short)10] [(short)7] = (-(arr_14 [i_3 - 1] [(unsigned char)16] [i_4 - 1] [i_3]));
                                var_19 &= ((/* implicit */unsigned int) ((long long int) 5895179822424153869LL));
                                var_20 = ((/* implicit */_Bool) var_16);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_0 [i_0] [i_1]))));
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    arr_17 [i_0] = ((/* implicit */short) ((long long int) arr_9 [16LL] [i_2] [i_2] [i_0] [i_1]));
                    var_22 -= ((/* implicit */short) (signed char)56);
                }
            } 
        } 
        var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (((arr_12 [14LL] [i_0] [i_0] [15U] [(short)7]) >> (((((/* implicit */int) var_18)) - (5999))))));
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(_Bool)1] [i_0])) >> (((((/* implicit */int) var_18)) - (5985)))));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_25 = (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-29423)), ((unsigned short)20739)))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10373)) ? (((/* implicit */int) (unsigned short)20729)) : (((/* implicit */int) (unsigned short)20739))));
                        var_27 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (~(arr_10 [i_8] [3ULL] [3ULL] [i_6] [i_5])))), (((((/* implicit */_Bool) var_6)) ? (arr_25 [(unsigned short)6] [i_6] [i_8] [(_Bool)1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20753)) << (((317164843734321494ULL) - (317164843734321491ULL))))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */short) var_11);
}
