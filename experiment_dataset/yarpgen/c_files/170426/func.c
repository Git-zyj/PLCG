/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170426
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (+(-600500493)))), (min((((/* implicit */long long int) (unsigned char)255)), (9223372036854775783LL))))), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))) + (2205305455U)))) * (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (-9223372036854775779LL)))))));
                    var_18 += ((/* implicit */unsigned long long int) 9223372036854775779LL);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0 + 3] [i_0 + 3] [i_2] [i_2]), (arr_4 [i_0 + 1] [i_0 - 1] [i_0] [i_1])))) || ((!(((/* implicit */_Bool) 2089661853U))))));
                }
            } 
        } 
        arr_7 [i_0 + 1] [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_5 [i_0] [4])), (4586404628241848693LL)))));
        arr_8 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)250)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) > (5032765043034265238LL))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */unsigned long long int) max((2089661853U), (317208625U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47159))) / (14936217343493157398ULL)))))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_0 + 2]) / (arr_4 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38038)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4483970285383655072ULL)))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)70))));
        var_21 |= ((/* implicit */long long int) 3853967969U);
        /* LoopSeq 3 */
        for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            var_22 *= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)123)))), (((arr_13 [i_4 + 2] [i_4 + 2]) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 2])) : (((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 2]))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((arr_10 [i_3] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))))))), (((((/* implicit */int) (unsigned short)45948)) == (((/* implicit */int) ((-9223372036854775779LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195)))))))))))));
        }
        for (int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            arr_16 [i_3] [i_3] = ((/* implicit */short) arr_10 [i_3] [i_3]);
            var_24 = arr_15 [i_3];
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44983)) | (((/* implicit */int) (short)-17882))))), (((5032765043034265238LL) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3])))))));
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
        {
            var_25 ^= ((/* implicit */unsigned short) 2862650449683759689ULL);
            /* LoopNest 3 */
            for (signed char i_7 = 3; i_7 < 21; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        {
                            arr_28 [i_6] [22ULL] [i_7] [i_6] [i_3] = ((/* implicit */unsigned char) arr_20 [(_Bool)1] [i_6]);
                            var_26 += ((/* implicit */unsigned short) ((9223372036854775766LL) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_6])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))))), (7477954384012177836ULL))) - (255ULL)))));
                            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48620))));
                        }
                    } 
                } 
            } 
        }
    }
    var_28 = ((/* implicit */_Bool) min((((/* implicit */int) min((var_2), (var_7)))), (((((/* implicit */int) (unsigned char)234)) / (2147483647)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        var_29 = ((/* implicit */short) (~(2976606367U)));
        arr_31 [i_10] = ((/* implicit */unsigned long long int) -9223372036854775792LL);
        arr_32 [i_10] = ((/* implicit */long long int) (signed char)127);
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((2147483622) / (((/* implicit */int) (short)-2289))))), (((((/* implicit */_Bool) var_7)) ? (9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) || (((/* implicit */_Bool) var_3))));
}
