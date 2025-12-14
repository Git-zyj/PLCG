/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143310
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
    var_18 *= ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) var_8)), (var_12)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_9)))));
        var_19 -= ((/* implicit */int) ((unsigned char) max(((~(((/* implicit */int) var_7)))), ((~(arr_2 [(unsigned char)12]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((-3103978187282803768LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)224)) - (181)))))), ((+(((unsigned long long int) arr_3 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_9 [23] = ((/* implicit */long long int) ((int) var_2));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(arr_6 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146)))));
        arr_10 [i_1] = ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_16)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : ((((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) - (var_16))) : (arr_7 [i_1]))));
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)38))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) (~(1695059329U)))) : (max((8745225136066855654LL), (((/* implicit */long long int) var_8)))))));
            arr_16 [i_2] = ((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) % (((long long int) var_5))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((int) var_5));
                        var_23 += ((/* implicit */unsigned short) (~(13076979367071818657ULL)));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    }
                } 
            } 
            var_25 &= ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_3 - 1] [i_3 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3 + 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3 - 1] [i_3 + 1]))) / (var_16))));
        }
        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [14LL] [i_2] [i_2])) ? (((var_17) | (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2])))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (long long int i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_27 += ((/* implicit */long long int) min((((((/* implicit */_Bool) min((-7358671514544352312LL), (4040450049540069169LL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14702))))), (((/* implicit */unsigned int) (short)-10855))));
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_2])) << (((min((((/* implicit */long long int) var_2)), (var_16))) + (4717657725510995204LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((-(((var_4) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)43078))))))));
                        var_29 += ((/* implicit */unsigned char) (!(var_4)));
                        var_30 = arr_12 [i_7 - 1] [i_7 - 2];
                        var_31 -= ((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned short)0))) + (((/* implicit */int) ((arr_22 [(unsigned char)3] [i_6] [i_6]) || (arr_22 [i_6] [10ULL] [i_8]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_8 [i_9] [i_9])))));
        var_33 *= ((unsigned char) ((arr_6 [i_9]) | (arr_6 [i_9])));
        var_34 = ((/* implicit */unsigned char) (+((~((-(var_12)))))));
    }
}
