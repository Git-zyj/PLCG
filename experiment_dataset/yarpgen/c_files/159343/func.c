/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159343
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17556))))) ? (-1260886981) : (((/* implicit */int) (unsigned short)17580))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_14)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17556)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (-74720842205656697LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17556)) * (((/* implicit */int) (short)-5402))))), (arr_4 [i_1 - 1] [i_1] [i_2]))))));
                    var_18 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((unsigned char) -74720842205656691LL))))) & (((((/* implicit */_Bool) (unsigned short)17562)) ? (var_13) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) << (((arr_6 [i_0]) - (1045906884)))))))));
                    arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)47959), ((unsigned short)17578)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 - 1] [i_2])))))));
                    var_19 = ((/* implicit */signed char) ((((-74720842205656679LL) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)5376)) : (((/* implicit */int) (short)5352)))) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) - (5385)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) * (arr_4 [i_3] [i_1] [i_0])))) ? (max((2143111624), (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])))) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 + 1] [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))) : ((+(arr_4 [i_0] [i_1] [i_3]))))) : (((((/* implicit */_Bool) min((16383U), (arr_4 [i_3] [i_1] [i_0])))) ? (arr_4 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned int) arr_6 [i_1 - 1]))))));
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 2])) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 2]) : (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? ((-(arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 1]))) : (arr_4 [i_1 - 2] [i_1 + 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = (unsigned short)47979;
                                var_21 = ((/* implicit */signed char) var_14);
                                arr_19 [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)126)) + (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_25 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_6 - 2] [i_1 - 2] [i_1])) & (((/* implicit */int) arr_9 [i_6 - 1] [i_1 + 1] [i_1]))))) ? (((((/* implicit */_Bool) arr_9 [i_6 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_9 [i_6 - 3] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_9 [i_6 - 1] [i_1 + 1] [i_1])))) : ((~(((/* implicit */int) arr_9 [i_6 + 1] [i_1 - 1] [i_1 - 1]))))));
                                arr_26 [i_0] [i_1] [i_3] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_21 [i_7] [i_6] [i_3] [i_1] [i_0] [i_0])))) * (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_7]))) : (-74720842205656679LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) -74720842205656697LL)))))) : (((((/* implicit */int) max((arr_9 [i_0] [i_3] [i_7]), (((/* implicit */unsigned char) arr_2 [i_0]))))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)-5352)) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_8] [i_9] &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((unsigned int) 74720842205656684LL))) / (min((-1LL), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0])))))));
                                var_22 = ((/* implicit */signed char) 17824147870102696318ULL);
                                var_23 = ((/* implicit */unsigned long long int) ((short) max((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_10])))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)34035)))))));
                                var_24 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_10] [i_9] [i_8] [i_1])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)47965)) - (47959)))))), (((((/* implicit */_Bool) arr_20 [i_0] [i_1 - 2] [i_8] [i_9] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (arr_0 [i_0]))))) > (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_1]))) : (4637134324483362240ULL)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) (~(max((max((((/* implicit */unsigned long long int) 16383U)), (13809609749226189376ULL))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0]))))));
                    var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_8] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_8] [i_0]))))), (17587689875055538118ULL)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max(((((!(arr_32 [i_11] [i_12]))) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) : (((arr_32 [i_0] [i_8]) ? (((/* implicit */int) arr_32 [i_11] [i_12])) : (((/* implicit */int) var_14)))))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_8]))));
                                var_28 = ((/* implicit */unsigned int) arr_36 [i_12] [i_11] [i_8] [i_1] [i_0] [i_0] [i_0]);
                                var_29 = ((((((/* implicit */_Bool) 74720842205656693LL)) ? (arr_15 [i_0] [i_1] [i_8] [i_11]) : (arr_15 [i_0] [i_8] [i_11] [i_12]))) / (arr_15 [i_0] [i_8] [i_11] [i_12]));
                                var_30 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-1)))) & ((~(((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_38 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_30 [i_8] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 + 1]))) ? (max((((/* implicit */unsigned long long int) (short)-5385)), (arr_30 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 2]))) : (arr_30 [i_8] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1])));
                }
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_13] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_13]))) * (arr_23 [i_13]))) : (((/* implicit */unsigned long long int) arr_34 [i_13] [i_13] [i_13] [i_1] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : ((-(max((arr_4 [i_13] [i_1] [i_0]), (((/* implicit */unsigned int) var_5))))))));
                    var_32 -= arr_35 [i_0] [i_0] [i_1] [i_1] [i_1] [i_13];
                    var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1 + 1] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_31 [i_1 + 1] [i_1] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_31 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_13]))))) ? (((/* implicit */int) arr_31 [i_0] [i_1 + 1] [i_13] [i_13] [i_1] [i_1])) : ((~(((/* implicit */int) (short)-20081))))));
                    var_34 = ((/* implicit */_Bool) ((long long int) ((signed char) 13809609749226189385ULL)));
                    arr_41 [i_13] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) 14739282058825450697ULL));
                }
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 72057594037927935LL)) ? (3707462014884100911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54)))));
                var_36 = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
