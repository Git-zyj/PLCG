/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134265
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_1))));
    var_13 = ((/* implicit */unsigned char) ((var_5) != (min((((/* implicit */unsigned long long int) var_1)), (min((var_5), (((/* implicit */unsigned long long int) (short)15280))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15280)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (12507942213750891999ULL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) var_11)))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_5)));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) (unsigned short)8191);
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)15280)))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_19 -= ((/* implicit */unsigned char) arr_1 [i_3]);
        var_20 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_10 [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1840440883U)) ? (-2765956449286044188LL) : (((/* implicit */long long int) 4194176U)))))))), (((((/* implicit */_Bool) 7879706058151286764ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (4754555428703550389LL)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) min((12LL), (((/* implicit */long long int) (short)-15286)))))))) >> (((((((((/* implicit */int) (unsigned char)250)) != (((/* implicit */int) var_2)))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (493707035U)))));
        var_22 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))) : (((((/* implicit */_Bool) 1840440883U)) ? (144115188075855360LL) : (1737640254735745971LL))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] [i_4] [i_3] &= ((/* implicit */long long int) (unsigned char)242);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) 1059806186U))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3])))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (0ULL)))) ? (((/* implicit */int) ((arr_0 [i_6]) || (arr_0 [i_6])))) : (((/* implicit */int) (!(arr_0 [i_6])))))))));
        arr_21 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((arr_1 [i_6]), (arr_7 [9ULL] [i_6])))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) + (arr_18 [i_6])))));
        arr_22 [i_6] = ((/* implicit */_Bool) var_10);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_30 [i_9] [i_9] [i_9] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (var_5) : (274877906943ULL))))) * (((/* implicit */int) (_Bool)0))));
                        var_25 ^= ((/* implicit */int) arr_8 [i_7] [i_8] [i_9]);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_26 = ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [i_10]))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8190))) & (771647209868323385LL))));
        var_27 &= ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)57320)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_0))))))));
        var_28 = ((/* implicit */unsigned char) var_9);
        var_29 = ((/* implicit */unsigned char) min(((_Bool)0), ((_Bool)1)));
    }
}
