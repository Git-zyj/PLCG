/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186769
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((/* implicit */_Bool) arr_0 [i_0]);
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)126))) : ((~(((((/* implicit */_Bool) (unsigned short)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (var_11)))))));
        var_19 += ((/* implicit */unsigned short) arr_1 [i_0]);
        var_20 += ((/* implicit */signed char) arr_0 [(unsigned char)9]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)126))) % (var_8))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((int) ((unsigned long long int) 1931807972022809283LL))))));
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-6358053226258917632LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (arr_0 [i_1])));
    }
    var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((((/* implicit */signed char) var_6)), ((signed char)125))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)126))));
        var_25 -= ((/* implicit */long long int) 94432987);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)44182))))) - (-7647745536439152455LL)));
            var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 1])) != (((/* implicit */int) arr_6 [i_2 - 1]))));
        }
        for (int i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_15 [i_4] [i_2] = ((/* implicit */unsigned int) var_0);
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)86)))))));
                arr_16 [i_2] [i_4 + 1] [i_5] [(unsigned char)4] = arr_9 [i_2 - 1];
            }
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_20 [i_2] [12LL] [i_6] [12LL] = ((/* implicit */signed char) 2841561462306989697ULL);
                var_29 |= ((/* implicit */long long int) ((((arr_9 [i_2]) - (((/* implicit */long long int) -94432990)))) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1])))));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_4 - 2])))))));
            }
            arr_21 [i_2 - 1] [(signed char)18] |= ((/* implicit */unsigned int) (unsigned short)14951);
            arr_22 [i_2] = ((/* implicit */signed char) ((int) (~(2841561462306989697ULL))));
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 1667640557U)) ? ((+(((/* implicit */int) (signed char)-109)))) : (((/* implicit */int) ((((/* implicit */long long int) -94432988)) <= (arr_9 [i_2 - 1]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 10145432646856606876ULL))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_33 ^= ((((/* implicit */_Bool) arr_26 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_2 - 1]))) : (arr_13 [i_2] [(unsigned short)0] [(short)7] [11ULL]));
                arr_28 [i_7] [(unsigned char)19] [i_7] [i_7] = (signed char)-98;
                var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) -2030365327)) ? (1090715534753792ULL) : (((/* implicit */unsigned long long int) 94432987)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)-970))))))));
            }
            arr_29 [i_7] [(signed char)12] [i_7] = ((/* implicit */_Bool) arr_9 [i_7]);
            var_35 = ((/* implicit */int) (((~(arr_14 [i_2 - 1] [i_7] [i_2] [i_2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 1])))));
            arr_30 [i_2] [i_7] = ((/* implicit */unsigned short) arr_23 [i_2] [i_2] [i_7]);
        }
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21339))) + (max((var_5), (((/* implicit */unsigned int) var_14))))));
    var_37 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) 6358053226258917623LL))) <= (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
}
