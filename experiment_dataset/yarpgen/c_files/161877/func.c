/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161877
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)72)) ? (((((/* implicit */int) (unsigned char)126)) - (-1716457280))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)65535)), (32)))))))));
            arr_7 [i_1] = ((/* implicit */int) ((unsigned long long int) (-(-1709416892))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_1]);
                            arr_17 [17U] [21U] [i_1] [(unsigned short)11] [i_4] = ((/* implicit */unsigned int) arr_15 [i_0] [i_3 - 2] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_1] [i_5] = ((/* implicit */short) ((arr_11 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2] [i_2 + 1])))));
                    var_18 = ((/* implicit */signed char) var_12);
                }
            }
            var_19 |= ((/* implicit */signed char) ((((/* implicit */int) (short)9435)) <= (((/* implicit */int) (short)-16583))));
        }
        var_20 ^= ((((9160337565879529844LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_18 [(unsigned short)2] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    {
                        arr_33 [i_7] [i_7] [i_8] [i_7] [i_6] [i_8] = ((/* implicit */short) arr_10 [i_7 + 1] [i_7] [i_7]);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-9415)) / (((/* implicit */int) (unsigned short)20239))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_6])))));
        var_23 = ((short) 135592061364687713ULL);
        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6]))));
    }
    var_25 = ((/* implicit */unsigned int) var_6);
    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9548403907705994251ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7132))) : (3031112666439763627LL))) << ((((~(((/* implicit */int) (unsigned char)248)))) + (249)))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)5289)) : (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)17865)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_13))))))));
}
