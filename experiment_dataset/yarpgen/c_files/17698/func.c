/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17698
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
    var_15 = ((/* implicit */unsigned int) ((short) min(((~(16646144))), ((+(((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (11797785504048692208ULL))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)240)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) -5846879291321731320LL)))))));
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1]))));
            var_18 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])))));
            /* LoopSeq 4 */
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
            {
                arr_9 [i_1] [(signed char)16] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7190868181072037229ULL)) || (((/* implicit */_Bool) var_2))));
                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9309))))))));
            }
            for (signed char i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
            {
                var_20 *= ((/* implicit */short) ((var_8) < (((/* implicit */unsigned long long int) var_4))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (7190868181072037238ULL)))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_3 + 2] [i_4] [i_5 - 1]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) 2147483647))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) arr_11 [i_1]);
            }
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(7190868181072037238ULL))))));
                            var_24 = ((unsigned long long int) ((short) -3900867010696841294LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1278750959464718977LL)) - (arr_18 [i_1] [i_10])));
                            arr_33 [i_0] [i_1] [i_6] [i_1] [i_10] [i_10] = ((/* implicit */signed char) (short)-19638);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 10911473669405814517ULL))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) 17069047175591131078ULL))));
                            arr_34 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)4013);
                        }
                    } 
                } 
                var_28 *= ((/* implicit */_Bool) (unsigned short)57112);
            }
            for (unsigned long long int i_11 = 3; i_11 < 20; i_11 += 1) 
            {
                var_29 += ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (short)-23069)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                arr_37 [i_0] [i_1 + 2] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_1 + 2] [i_11 + 3] [i_11 - 3] [i_11]))));
            }
        }
        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 2; i_14 < 23; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            var_30 *= ((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_39 [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)0)))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((8193292146291406111ULL) - (8193292146291406111ULL)))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) 3669925588725877106ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL)))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
        }
        arr_48 [i_0] = ((/* implicit */short) (-(arr_20 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                {
                    arr_55 [(signed char)7] [(signed char)7] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-12218)) / (((/* implicit */int) (unsigned char)36))))))))) ^ (((unsigned long long int) (!(((/* implicit */_Bool) 3537876190879997646LL)))))));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 1; i_19 < 8; i_19 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((3669925588725877106ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_58 [i_16] [i_17] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (18446744073709551615ULL)));
                        var_35 = ((/* implicit */unsigned short) var_1);
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 10169639053369421761ULL)))))), (((((((/* implicit */_Bool) 3878760788U)) && (((/* implicit */_Bool) 11255875892637514377ULL)))) ? (((-606835208253418277LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : ((~(var_12))))))))));
                    }
                    for (signed char i_20 = 1; i_20 < 8; i_20 += 3) /* same iter space */
                    {
                        arr_61 [i_16] [i_16] [i_17] [i_18] [i_20 + 2] [i_20 + 1] |= ((/* implicit */unsigned long long int) 1006632960U);
                        var_37 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((1006632960U) >> (((((/* implicit */int) (unsigned short)4021)) - (4018)))))), (((((/* implicit */_Bool) 1894212095525973085LL)) ? (((/* implicit */unsigned long long int) 2701293358939142854LL)) : (arr_22 [i_16]))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))), (arr_52 [i_20]))))));
                        var_38 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) * (4294967295LL)))))));
                    }
                    arr_62 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13)))) / (((long long int) -4294967296LL))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_2);
}
