/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119541
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) max((max((2125937566), (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
                arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 2])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_3] [i_3] [i_2]))))));
                arr_13 [i_3] [i_3] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)16902))) <= (((((/* implicit */_Bool) (~(var_9)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_15 [i_2] [i_3] [i_3]) && (((/* implicit */_Bool) max((min(((short)16916), ((short)16902))), (((/* implicit */short) ((((/* implicit */_Bool) (short)-17)) && (((/* implicit */_Bool) 1658322257))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [i_2] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >> (((max((arr_0 [i_2]), (-1009267020))) - (2060290902)))));
                                arr_22 [i_3] [i_6] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1143117226)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_20 [i_2] [i_3] [i_2] [i_5 + 3] [i_6]) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2]))) * (14692133628073112797ULL))) : (((/* implicit */unsigned long long int) ((long long int) (-2147483647 - 1))))))));
                                arr_23 [i_2] [i_3] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (short)24)) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_24 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4]))));
                    arr_25 [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_4])), (((arr_15 [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16549))) : (3754610445636438796ULL)))));
                    arr_26 [i_2] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) max((3754610445636438819ULL), (((/* implicit */unsigned long long int) (short)-8192)))))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2])))))) : (arr_9 [i_2] [i_3])));
                }
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                {
                    arr_29 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17)) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (var_4) : (var_4))) : (max((arr_17 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) arr_19 [i_2] [i_2]))))))) || (((/* implicit */_Bool) var_4))));
                    arr_30 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_15 [i_2] [i_3] [i_7]);
                }
                /* vectorizable */
                for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        arr_36 [i_2] [i_2] = ((/* implicit */short) var_1);
                        arr_37 [i_2] [i_3] [i_8] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (short)16571)))));
                        arr_38 [i_3] [i_8] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)194);
                    }
                    arr_39 [i_2] [i_2] = ((/* implicit */_Bool) ((arr_9 [i_2] [i_3]) * (arr_32 [i_8])));
                    arr_40 [i_2] [i_3] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)29855)) : (((/* implicit */int) var_3)))) <= (((int) (short)1952))));
                    arr_41 [i_8] [i_3] [i_3] [i_8] = ((/* implicit */int) ((((/* implicit */int) arr_33 [i_2] [i_8 - 1] [i_8] [i_8])) != (((/* implicit */int) var_0))));
                    arr_42 [i_2] [i_3] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2])))) >> (((((((/* implicit */_Bool) (short)6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16549))))) - (2559392947U)))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 = ((/* implicit */signed char) (-(var_5)));
    var_15 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)16549)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) (short)9595)))))));
}
