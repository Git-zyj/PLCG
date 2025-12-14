/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139189
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [19LL] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) > (((/* implicit */int) (unsigned short)63166))))), ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                    var_14 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) || (((((((/* implicit */unsigned long long int) arr_0 [i_0])) & (5913534420131140461ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [(_Bool)1] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_3 - 1] [i_0 + 2]))));
                                var_15 = ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1076736783) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [16]))))))));
                                arr_15 [i_0 + 2] [i_1] [(signed char)24] [i_3 - 1] [i_4] [i_1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [23LL] [i_1] [i_2] [i_3] [i_4])))))) && (arr_7 [i_0])))) : ((+(max((arr_13 [i_0 + 3] [i_0] [i_0] [(signed char)0] [i_0 + 3] [i_3] [i_4]), (((/* implicit */int) (short)-16384))))))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) 6879677619662285230ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_24 [i_5] [i_5] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_10 [i_8] [22] [i_7] [i_6] [i_6] [i_5])))));
                            arr_25 [i_8] [i_7] [i_8] |= ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 9223372036854775807LL)))) || (((/* implicit */_Bool) (~(9223372036854775807LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_7] [i_7] [i_8]))) : ((+(((var_13) * (((/* implicit */unsigned long long int) -6511913428538003295LL))))))));
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) -506543239))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) 12533209653578411154ULL);
                                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((arr_31 [i_5] [i_6] [(signed char)15] [i_10] [i_10] [i_11]) ^ (((/* implicit */int) arr_3 [4ULL] [i_5] [i_5])))) & (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-79)), ((unsigned short)24285))))))) ? (((-1724051776) | (((((/* implicit */_Bool) 12533209653578411154ULL)) ? (1020958986) : (((/* implicit */int) (signed char)-83)))))) : (((/* implicit */int) (_Bool)1))))));
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_5] [i_6] [i_5])) & (((/* implicit */int) arr_21 [i_5] [i_5] [i_5])))) / (((((/* implicit */_Bool) 18361260451334974844ULL)) ? (((/* implicit */int) arr_1 [i_6] [i_10])) : (((/* implicit */int) arr_1 [i_5] [i_10]))))));
                                arr_33 [i_5] = ((/* implicit */unsigned char) var_10);
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_3 [i_5] [6U] [i_9]), (arr_3 [i_5] [i_6] [i_9])))) >> (((/* implicit */int) ((((/* implicit */int) arr_23 [i_5] [i_5] [i_9] [i_10])) == ((-(((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                } 
                arr_34 [i_5] [i_6] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1031))))), (((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) var_1)) : (arr_31 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) -2868776487916717013LL))));
                                arr_49 [i_12] [i_13] [i_15] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) min((var_4), ((unsigned short)24285)))) > (((/* implicit */int) arr_7 [i_14]))))) : (((/* implicit */int) min((min((arr_38 [i_12] [i_13] [i_12]), ((unsigned short)7468))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_12] [i_14] [i_15]))))))))));
                                arr_50 [i_13] [i_13] [i_15] [i_13] [(short)17] = ((/* implicit */unsigned char) arr_11 [i_12] [i_14] [9]);
                                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-26405)) : (((/* implicit */int) arr_46 [i_12] [i_14] [i_14 - 1])))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_14 - 1] [i_14 - 1])))))));
                                var_24 = ((/* implicit */long long int) arr_12 [i_12] [4U] [i_14 - 1] [i_14 - 1] [i_16]);
                            }
                        } 
                    } 
                } 
                arr_51 [i_12] [i_13] [i_13] = ((/* implicit */int) arr_47 [i_12] [i_12] [i_12] [i_12] [i_12]);
            }
        } 
    } 
}
