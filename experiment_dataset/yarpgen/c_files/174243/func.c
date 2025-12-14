/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174243
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
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((signed char) (+(((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (short)-10001))))));
        var_12 |= -9223372036854775799LL;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned char) arr_4 [i_1]));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3633312834U))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */short) ((((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_5])))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) var_2))));
                                var_16 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_3] [i_4 - 1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_2)) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                }
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_9 [i_1 + 1] [i_1] [i_1]));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 19; i_6 += 1) 
    {
        var_18 -= ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)-11492)) | (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((var_3) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                var_20 = ((/* implicit */unsigned short) ((_Bool) var_0));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 + 3]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_11 = 2; i_11 < 22; i_11 += 2) 
        {
            var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)25)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
            var_23 = ((/* implicit */unsigned int) var_8);
            var_24 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_23 [i_6] [i_6] [i_6] [i_6]) : (arr_23 [i_11] [i_11] [i_11 - 2] [i_11]))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        arr_34 [i_12] [i_12] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_10)))) / ((~(((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_12]))))));
        var_25 ^= ((/* implicit */unsigned int) ((arr_22 [i_12] [i_12]) & (((/* implicit */int) arr_19 [i_12]))));
    }
    var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */int) (unsigned short)472)) / (((/* implicit */int) (short)9977))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
    var_27 = ((/* implicit */_Bool) var_10);
    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (short)-11471)) : (((/* implicit */int) (short)-11497)))) <= ((((~(((/* implicit */int) (signed char)-73)))) * ((+(((/* implicit */int) (_Bool)1))))))));
}
