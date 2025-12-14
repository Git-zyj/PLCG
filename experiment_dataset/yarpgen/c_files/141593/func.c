/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141593
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((2600065455603467545ULL) + (15066567745965082917ULL)))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((max((max((((/* implicit */unsigned int) (unsigned short)4837)), (arr_5 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) >= (2150761159110254345ULL)))))) / (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_3 - 4])) < (arr_0 [i_2])))), (((3752615570U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19177))))))));
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (signed char)123))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (signed char)0))));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_11 [i_2])) : (arr_3 [i_0] [i_0])));
                        arr_12 [i_0] = ((/* implicit */short) 15846678618106084067ULL);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2])))))) : (-8573126438853196187LL)));
                        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_4 - 1])) >= (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4 - 1]))));
                        var_22 = ((15846678618106084059ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60688))));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (((~((~(16515072U))))) >> (((min((((/* implicit */long long int) (unsigned char)48)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (47LL)))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7321))) > (1718861919370060696LL))))))))) - (min((arr_10 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_10 [i_0])) > (arr_6 [i_0] [i_0] [i_0]))))))))));
                    arr_15 [i_0] [i_0] [i_0] [i_2] = max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), ((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)10))) - (arr_2 [i_0]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            var_26 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))));
            var_27 = ((/* implicit */unsigned short) (-(arr_17 [i_5] [i_6])));
        }
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 15; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-74541041)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)65519)))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32425)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56))))) : (((arr_19 [i_5] [i_8]) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_8 + 1] [i_8])))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2251520646475889223LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7 - 1] [i_8 - 1]))) : (((((/* implicit */long long int) arr_3 [i_5] [i_7])) + ((-9223372036854775807LL - 1LL))))));
                                var_31 ^= ((long long int) arr_4 [i_8 + 2] [i_8 + 2] [i_9 - 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_32 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)65490)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) : ((+(((1063745101) / (1063745111)))))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned short)31))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)119)), (var_9)))) ? (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19038))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)50), ((unsigned short)28)))))))));
    var_34 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)13674))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13680)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) * (13027207188221713184ULL))))));
}
