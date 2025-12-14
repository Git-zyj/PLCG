/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18469
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
    var_11 = ((/* implicit */unsigned short) 8171012475962390808LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            var_12 ^= ((/* implicit */unsigned short) ((12767761134840766697ULL) + (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_1 - 4]))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                var_13 = ((/* implicit */signed char) ((unsigned short) (signed char)56));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16908186595089384935ULL)) ? (((((/* implicit */_Bool) 478587858629944959ULL)) ? (((/* implicit */unsigned long long int) 1702046842123695738LL)) : (5678982938868784907ULL))) : (((/* implicit */unsigned long long int) (~(-144101784))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(96320182879940654ULL))) : (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_3] [7LL] [i_0 + 1]) << (((((/* implicit */int) arr_9 [i_3] [i_3 + 3] [i_2] [i_2 + 1] [i_1 - 3] [i_3])) - (46276))))))));
                            var_16 = ((/* implicit */unsigned short) (((~(1538557478620166684ULL))) >> (((((/* implicit */_Bool) 18350423890829610961ULL)) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_1])) : (((/* implicit */int) (unsigned short)64262))))));
                        }
                    } 
                } 
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) ((47605995936320460LL) == (-7625584015486724125LL)));
                var_18 = ((/* implicit */int) (-(arr_12 [i_0] [i_0] [i_0 - 2] [i_1] [i_5] [i_1 + 1] [i_0])));
            }
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_19 ^= ((/* implicit */signed char) ((8667179030748123738LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1]))) != (-2645625816745372943LL)))))));
                arr_19 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_0] [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) arr_11 [i_1 - 3]))));
                /* LoopSeq 4 */
                for (long long int i_7 = 4; i_7 < 23; i_7 += 2) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */long long int) (+(-2147483632)))) & (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_6])) ? (-2645625816745372945LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 144942768U)) != (12767761134840766720ULL)));
                    var_22 = ((/* implicit */long long int) ((((478587858629944989ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))));
                }
                for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) 7641049976817195255ULL);
                    arr_25 [i_0] [i_1] [i_6] [i_0] [i_8] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4261836314U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10947)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62663))) : (-8171012475962390819LL))))));
                    arr_26 [(unsigned short)2] [i_8] [i_6] [i_8] = ((/* implicit */short) ((695379245) ^ (((/* implicit */int) arr_10 [i_8 - 2] [i_8] [i_1 - 4] [i_0 + 1] [i_0] [i_8] [i_0]))));
                }
                for (signed char i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    arr_29 [i_1 - 1] [i_6] = ((/* implicit */unsigned char) 2571313420U);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)1295)) : (((/* implicit */int) (unsigned char)248)))))));
                }
                for (long long int i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    arr_32 [i_10] [i_10] [i_6] [i_1] = ((/* implicit */unsigned char) (unsigned short)64236);
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)64273)))))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1702046842123695750LL)) ? (((/* implicit */int) ((16777215ULL) != (((/* implicit */unsigned long long int) 2571313420U))))) : ((+(var_8)))));
                    arr_33 [i_10] [i_10] = ((/* implicit */_Bool) 525526534U);
                }
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((3867635470214283416ULL) % (9068424745583139740ULL))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)38353)))))))));
            }
            arr_34 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) (signed char)-119);
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2072935094U)) & (arr_22 [i_0] [i_0] [i_0 + 1] [i_11]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 2) 
            {
                var_29 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) arr_31 [i_0 + 1] [i_11] [i_11] [i_0] [i_12 + 1]))) == ((~(17681722222765494667ULL)))));
                arr_40 [i_12] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)25538))))));
                var_30 = ((/* implicit */signed char) 17681722222765494684ULL);
                var_31 -= ((/* implicit */unsigned short) 2222032215U);
                var_32 = ((/* implicit */unsigned short) ((-1702046842123695738LL) / (-7962820680437891813LL)));
            }
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) & (var_6)))) | (var_4))))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4294967295U)) >= (((((/* implicit */_Bool) 4497452350167574382ULL)) ? (((/* implicit */unsigned long long int) arr_12 [i_13] [i_13] [i_11] [i_11] [i_11] [i_11] [i_0])) : (5461796254329210113ULL)))));
                var_35 = ((/* implicit */long long int) ((arr_15 [i_13 - 1] [i_11] [i_11]) ? (((/* implicit */unsigned long long int) 1702046842123695707LL)) : (6938577047516713971ULL)));
            }
        }
        var_36 = ((/* implicit */signed char) arr_16 [i_0 + 2]);
        arr_43 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((-3060138229594503810LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53346))))))));
        arr_44 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) 757843800U);
    }
}
