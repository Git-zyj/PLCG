/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168477
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
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-90)))))) : (((((/* implicit */_Bool) ((int) arr_0 [0U]))) ? (min((((/* implicit */long long int) arr_0 [8ULL])), (2237819931051127150LL))) : (((/* implicit */long long int) (~(var_9))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (max((((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (arr_2 [6LL]) : (arr_2 [4]))), (((/* implicit */long long int) ((signed char) arr_2 [(short)0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
        var_19 = ((/* implicit */unsigned long long int) (unsigned short)31);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */int) (_Bool)1);
            var_20 -= ((/* implicit */unsigned int) arr_7 [i_1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_21 -= ((/* implicit */unsigned int) arr_7 [i_1] [i_1]);
            var_22 &= ((/* implicit */signed char) ((unsigned short) arr_13 [i_1] [i_3]));
        }
        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_23 = ((/* implicit */long long int) 0ULL);
                var_24 &= ((unsigned int) ((arr_18 [i_4 - 1] [i_4 - 4]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
            }
            arr_19 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 16900988117125931075ULL)) ? (((/* implicit */long long int) 737279455U)) : (8267567959694553910LL)));
            var_25 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_4])) && (((/* implicit */_Bool) (unsigned char)180))))) >> (((max((arr_4 [i_1] [i_4 + 1]), (((/* implicit */long long int) 130048U)))) - (7779502910627828667LL)))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)61440)), (15971462037625301444ULL))), (((/* implicit */unsigned long long int) max((3420399508U), (arr_11 [i_4] [8LL] [i_1]))))))));
            var_26 -= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((1545755956583620541ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))))))) <= (((/* implicit */unsigned long long int) -1807901671))));
            var_27 |= ((/* implicit */_Bool) ((var_10) + (((/* implicit */long long int) (~(((2037104452) + (((/* implicit */int) (unsigned char)4)))))))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_1])) || (((((/* implicit */_Bool) max((arr_16 [i_8] [i_8]), (((/* implicit */unsigned int) arr_22 [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))))))))));
                        var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((1488251725) >> (((((/* implicit */int) (unsigned char)76)) - (73))))) - (186031465)))))), ((~(4063775528963555448ULL)))));
                        var_30 = max((min((((/* implicit */long long int) var_6)), (max((arr_18 [i_1] [i_1]), (((/* implicit */long long int) 4294967295U)))))), (454766467323295040LL));
                        arr_29 [i_1] [4LL] [i_8] [i_1] [i_6] [i_8] = max((((/* implicit */unsigned long long int) min((max((arr_16 [i_7] [i_7]), (2996272391U))), (((/* implicit */unsigned int) ((short) arr_8 [i_8] [i_8])))))), (min((5117003324032217242ULL), (((/* implicit */unsigned long long int) arr_24 [i_1])))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) (+(((unsigned int) arr_27 [i_1] [8U] [8U] [i_1]))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) 4042583559U))), (((unsigned int) (_Bool)1)))))));
            arr_30 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            var_33 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned short)139))))), (arr_3 [i_1]))));
        }
        var_34 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-14547)) + (2147483647))) << (((((/* implicit */int) (unsigned short)17718)) - (17718)))));
        var_35 -= ((/* implicit */short) arr_9 [i_1] [i_1]);
    }
    var_36 = ((/* implicit */unsigned int) ((((16900988117125931074ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 11)) == (2713553215U))))))) < (max((((((/* implicit */_Bool) -122110804)) ? (var_1) : (((/* implicit */unsigned long long int) 8583903114364021276LL)))), (((/* implicit */unsigned long long int) var_6))))));
    var_37 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        var_38 |= 65535U;
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) 3328871528U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_32 [i_9]), (((/* implicit */unsigned int) (_Bool)1)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 290595387U)) >= (var_10))))))))) : (max((arr_31 [i_9] [i_9]), (((/* implicit */unsigned int) (unsigned char)38))))));
    }
}
