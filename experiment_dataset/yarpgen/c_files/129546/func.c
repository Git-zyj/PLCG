/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129546
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [7] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_3] [(unsigned char)8])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)156)))) : (6471917614399421949LL)))) ? (1956413862) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-2086249099) : (((/* implicit */int) (short)16368))))));
                                arr_15 [i_2] [(unsigned short)0] [i_3] [i_2] [i_3] [9ULL] [i_0] = ((/* implicit */unsigned char) (+((-(((0LL) / (-9223372036854775796LL)))))));
                                arr_16 [i_3] = ((/* implicit */_Bool) (-(-1456356949)));
                            }
                        } 
                    } 
                    arr_17 [8U] [8U] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned short) arr_12 [i_2] [i_2] [(unsigned char)10] [(short)6] [(short)4]))) ? ((~(((/* implicit */int) arr_4 [(unsigned char)1] [(_Bool)1] [i_1] [i_2 + 4])))) : (((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (arr_3 [i_0] [i_1 + 1]) : ((-2147483647 - 1)))))), (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned short)63548)) : (-1467628350)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_22 [i_5] [i_5] [i_6]);
                var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((17996806323437568ULL), (((/* implicit */unsigned long long int) -5178553088749261553LL))))) ? (((((/* implicit */_Bool) -9223372036854775796LL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))))) : ((-(1023U)))))) ? (((arr_21 [i_5]) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) arr_21 [i_5])))) : (((/* implicit */int) arr_19 [i_5])));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17071462859741604237ULL)));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 3) 
                        {
                            {
                                arr_33 [i_9] [i_9] [i_8] [22ULL] [21ULL] [i_5] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [9LL] [i_6] [i_7] [i_7] [(_Bool)1] [i_9 + 2])))), (((/* implicit */int) ((((/* implicit */int) var_7)) > (-1)))))));
                                var_20 = ((/* implicit */int) arr_30 [i_5] [i_9]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (+(0ULL)));
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)4432)), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))), (((/* implicit */unsigned int) var_1))))));
    /* LoopNest 3 */
    for (signed char i_10 = 2; i_10 < 14; i_10 += 2) 
    {
        for (int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_10 + 2])) * (((((/* implicit */_Bool) max(((unsigned short)61103), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) ((signed char) arr_38 [i_10] [i_11]))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)22446)) : (((/* implicit */int) (unsigned short)51097))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5775))) >= (((((/* implicit */_Bool) min((arr_35 [i_12]), (((/* implicit */unsigned long long int) arr_41 [0U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_10])) ? (arr_24 [(unsigned char)20]) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_16)))))));
                    arr_42 [i_10] [i_12] [3LL] [i_12] = ((/* implicit */short) max((((/* implicit */long long int) ((short) 7222482516526403123LL))), (((long long int) ((((/* implicit */_Bool) arr_22 [(short)15] [19LL] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_12] [i_10] [i_10]))) : (1567332051025921773ULL))))));
                    var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_30 [i_10 - 1] [i_12])))) ? (((/* implicit */int) arr_37 [i_10 + 1])) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))) / (((((/* implicit */_Bool) -1504518559)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (1932520884400949737LL)))));
                }
            } 
        } 
    } 
}
