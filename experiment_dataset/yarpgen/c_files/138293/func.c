/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138293
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0 + 2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) -1737435571)) ? (((/* implicit */unsigned long long int) 244398616870699512LL)) : (0ULL)))))));
        arr_5 [i_0 + 1] = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])) >= (arr_2 [i_0 - 2] [i_0 - 1])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_2 + 2] [i_3 + 2] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 244398616870699512LL)), (12348870376831450458ULL))), (((/* implicit */unsigned long long int) ((arr_10 [i_0 + 3] [i_2 - 2]) / (arr_10 [i_0 + 2] [i_2 - 1]))))));
                        arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_0 + 1] [i_0 - 1])), ((+(0ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((-244398616870699529LL), (((/* implicit */long long int) (unsigned char)146))))))) : (min((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_2 [i_2 + 2] [i_0 + 2])))));
                        arr_16 [i_0] [i_1] [i_1] [i_3 - 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((~(-244398616870699527LL))) >> (((((/* implicit */int) ((unsigned char) 1817937149U))) - (220)))))), (arr_2 [i_0 - 2] [i_1])));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_20 [i_0] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_3 [i_0 + 1])), (244398616870699521LL))))) >> (((arr_6 [i_3 - 3] [i_1] [i_0]) - (13301687387655633287ULL)))));
                            arr_21 [i_0 + 3] [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 924581826619878090LL)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)137))))) ? (arr_2 [i_2 - 2] [i_1]) : (((/* implicit */unsigned long long int) (-(-1875315136280298817LL)))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((arr_8 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_0 + 2] [i_0 - 2] [i_0 - 2])))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 12; i_5 += 4) 
                        {
                            arr_24 [i_1] [i_2 - 2] = -1875741458;
                            arr_25 [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((-7633175798649941787LL), (((/* implicit */long long int) (unsigned char)196)))) != (((/* implicit */long long int) 131071)))))) >= (9542631951239994776ULL)));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10; i_6 += 3) 
    {
        arr_30 [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 244398616870699537LL)) ? (((/* implicit */unsigned int) arr_27 [i_6] [i_6])) : (arr_23 [i_6 - 2])))) ? (((/* implicit */long long int) ((unsigned int) -1871113839))) : (arr_10 [i_6 + 1] [i_6 + 1])));
        arr_31 [i_6 - 1] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1737435571)) && (((/* implicit */_Bool) arr_0 [i_6 + 3]))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_36 [i_7] = ((((/* implicit */_Bool) (-(arr_34 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1737435595)))))) : (max((arr_34 [i_7]), (arr_35 [i_7] [i_7]))));
        arr_37 [14] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_32 [i_7]) >= (arr_32 [i_7])))), (min((((((/* implicit */_Bool) 17460262737798572958ULL)) ? (((/* implicit */long long int) 1784672744U)) : (1LL))), (arr_34 [i_7])))));
    }
    /* LoopSeq 2 */
    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_40 [i_8] [i_8] = ((/* implicit */unsigned char) 244398616870699529LL);
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (unsigned char i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        arr_48 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (((!(((/* implicit */_Bool) 6158789592751975050LL)))) && (((/* implicit */_Bool) arr_44 [i_10] [i_10 + 1] [i_9] [i_10])))))));
                        arr_49 [i_8] [i_10] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (~(min((((((-7633175798649941757LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))), (((arr_42 [i_9]) ? (arr_46 [i_8] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_8])))))))));
                        arr_50 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */signed char) arr_42 [i_10])), (var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((+(-1850500662))) : (((/* implicit */int) ((4941491370449705235ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_8] [i_8]))))))))) : (arr_44 [i_10] [i_9] [i_10] [i_11])));
                        arr_51 [i_11] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(2510294541U))))));
                        arr_52 [i_10] [i_9] = ((/* implicit */signed char) (+(max((arr_46 [i_10] [i_10] [i_10 - 1]), (arr_46 [i_11] [i_10] [i_10 + 1])))));
                    }
                } 
            } 
        } 
        arr_53 [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(2510294552U))))));
        arr_54 [i_8] [i_8] = ((/* implicit */signed char) max((max((244398616870699526LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 627084357)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned char)62))))))), (((/* implicit */long long int) (unsigned char)196))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    {
                        arr_65 [i_12] [i_12] [i_13] [i_15] = ((/* implicit */unsigned char) arr_62 [i_13] [i_14] [i_13] [i_12] [i_12] [i_13]);
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            arr_68 [i_12] [i_12] [i_12] [i_15] = ((/* implicit */int) (~(arr_61 [i_12] [i_13] [i_15] [i_15])));
                            arr_69 [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned long long int) (-(arr_56 [i_13] [i_12])));
                            arr_70 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) 3716593565671111590ULL)) ? ((~(((/* implicit */int) (unsigned char)60)))) : (((/* implicit */int) (signed char)-70)));
                            arr_71 [i_12] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) (~(arr_39 [i_12] [i_16])));
                        }
                        arr_72 [i_12] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        arr_73 [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2510294551U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_60 [i_12] [i_13] [i_12])))) <= (((/* implicit */int) arr_41 [i_15] [i_13]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            arr_76 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16547159663054944845ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_17] [i_12])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_12] [i_12] [i_12])))))) : (((((/* implicit */_Bool) arr_43 [i_12])) ? (-924581826619878113LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12])))))));
            arr_77 [i_12] [i_12] = -1LL;
            arr_78 [i_12] [i_12] [i_17] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_38 [i_12]))))));
            arr_79 [i_12] [i_17] [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_12] [i_17]))));
        }
    }
    var_14 = ((/* implicit */_Bool) (~((-2147483647 - 1))));
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 4) 
        {
            {
                arr_86 [i_18] [i_18] [i_18] = ((/* implicit */int) ((long long int) 9223372036854775807LL));
                /* LoopNest 3 */
                for (unsigned int i_20 = 3; i_20 < 20; i_20 += 1) 
                {
                    for (long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
                        {
                            {
                                arr_94 [i_22] [i_19] [i_19] = ((/* implicit */long long int) arr_81 [i_18]);
                                arr_95 [i_20] [i_19] [i_19] [i_19] [i_20] [i_19] = ((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) (unsigned char)193)), (-1357297214)))));
                                arr_96 [i_18] [i_18] [i_18] [i_18] [i_18] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (var_12) : (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-1)))))))));
}
