/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105173
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_1 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126)))))) ^ ((-(14984987111266216745ULL)))))));
                    var_10 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) var_6)))));
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) min((arr_3 [(short)11]), (((/* implicit */long long int) arr_6 [i_7] [i_7] [i_5] [i_7]))))))))) : ((~(min((var_3), (3461756962443334850ULL)))))));
                                var_13 = ((/* implicit */int) max((var_13), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_2)))))))) : (((26ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (9223372036854775807LL)))))))));
                    var_15 = -9223372036854775807LL;
                    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) / (var_3)))) || (((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_4] [i_3 + 1] [i_4]))) : (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (2570589622U)))))))) : (min((min((9223372036854775807LL), (((/* implicit */long long int) (short)-9456)))), (((((/* implicit */_Bool) -7729940004959771797LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16878))) : (-7729940004959771785LL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_10 = 2; i_10 < 21; i_10 += 2) /* same iter space */
            {
                arr_29 [i_10] [i_9] [i_9] |= max((((/* implicit */long long int) arr_27 [i_8] [i_9] [i_9])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42)))))) : (((long long int) var_5)))));
                arr_30 [i_8] [i_8] [i_10 + 1] [i_10 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_22 [i_8])))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_7))));
            }
            for (long long int i_11 = 2; i_11 < 21; i_11 += 2) /* same iter space */
            {
                arr_34 [i_8] [16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 1724377671U)) ? (var_9) : (9223372036854775806LL))) ^ (((/* implicit */long long int) (+(var_1)))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38838)))))) & (((arr_21 [i_8] [i_11]) & (((/* implicit */unsigned long long int) 3671884194U))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_26 [i_11] [i_9] [i_11] [(short)4])) : (((/* implicit */int) var_7))))))) : (max((((/* implicit */long long int) var_6)), (-7198640894638380792LL)))));
            }
            for (long long int i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
            {
                var_20 ^= var_4;
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (unsigned char i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (var_2)));
                            var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_28 [i_12 - 2] [i_9] [i_12] [i_14 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))))))) : (6957990844130382194ULL)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_43 [i_12 + 3] [i_12] [i_12 - 1] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) arr_32 [i_8] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1327669213)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38829))) : ((-9223372036854775807LL - 1LL))))))) : (max((arr_39 [i_8] [i_9] [i_12] [i_12 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65535)), (9223372036854775807LL))))))));
            }
            var_24 ^= ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_0))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))))));
            arr_45 [i_8] = (i_8 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */int) arr_31 [i_8])) >> (((((/* implicit */int) arr_31 [i_8])) - (72))))) * (((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_31 [i_8])) : (((/* implicit */int) arr_31 [i_8]))))))) : (((/* implicit */short) ((((((/* implicit */int) arr_31 [i_8])) >> (((((((/* implicit */int) arr_31 [i_8])) - (72))) + (70))))) * (((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_31 [i_8])) : (((/* implicit */int) arr_31 [i_8])))))));
            var_25 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3978150927349208298LL)) ? (-9223372036854775806LL) : (((/* implicit */long long int) var_1))))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-6923326675823951302LL)))) ? (min((((((/* implicit */_Bool) arr_44 [i_8] [i_15] [i_8])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_15] [i_8] [i_8])))));
            arr_48 [i_8] [i_8] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_8] [i_8] [i_8])) - (((/* implicit */int) arr_33 [i_8] [i_8] [i_15]))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_8))) : ((+((+(var_3)))))));
            var_27 -= ((/* implicit */short) (+((+(var_5)))));
            var_28 = ((/* implicit */short) var_0);
            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8] [i_8] [i_15] [i_15])) - ((-(((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_8]))))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (+(max((-1327669213), (((/* implicit */int) (signed char)(-127 - 1))))))))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
        {
            arr_51 [i_8] [i_8] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 2381896550U)), ((~(0ULL))))) ^ (min((14984987111266216745ULL), (((/* implicit */unsigned long long int) 9223372036854775802LL))))));
            arr_52 [i_8] [i_8] [i_16] = ((/* implicit */signed char) (-(((unsigned long long int) (_Bool)1))));
            var_30 -= ((/* implicit */unsigned int) ((long long int) max((arr_32 [i_16] [i_16] [10ULL]), (arr_32 [(short)8] [i_16] [(short)8]))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1327669214)), (max((((/* implicit */unsigned int) (signed char)-8)), (var_0)))))) ? (((/* implicit */unsigned long long int) (-(((int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22275)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (signed char)19)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            var_32 += ((/* implicit */int) ((((/* implicit */_Bool) ((((4294967294U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2105773700U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_17] [i_17] [i_17]))) : (var_5)));
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                for (short i_19 = 4; i_19 < 21; i_19 += 2) 
                {
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_17])) && (((/* implicit */_Bool) (unsigned char)173)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_19 - 1]))))) : (((/* implicit */int) ((short) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                        var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1)))))), ((-(arr_39 [i_17] [i_19 - 4] [i_19 + 3] [i_19])))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 24; i_20 += 1) 
        {
            for (long long int i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                {
                    arr_67 [i_8] [i_20] [i_20] [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_37 [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8]))))) - (max((arr_61 [i_8] [i_20]), (((/* implicit */unsigned long long int) (signed char)-8)))))), (max((var_5), (((/* implicit */unsigned long long int) arr_42 [i_20]))))));
                    var_35 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) -9223372036854775779LL))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6167)))))))), (max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_6)), (arr_37 [i_8] [(short)12])))), (max((arr_65 [i_8]), (var_0))))));
                    var_36 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [(signed char)18] [8LL]))));
                    arr_68 [i_8] = (((~(min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_1))))) >= (((3201961494U) / (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)-55)))))))));
                }
            } 
        } 
    }
}
