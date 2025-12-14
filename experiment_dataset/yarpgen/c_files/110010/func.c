/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110010
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2U])) ? (((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_0 [(unsigned short)3]))))))) : (min((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) / (((/* implicit */int) arr_0 [i_0]))))), ((-(var_7)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 3; i_3 < 7; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) var_19);
                            var_21 = ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)128)))), (((/* implicit */int) (_Bool)1))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))));
                        }
                        var_22 &= ((arr_3 [(unsigned short)4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_13 [i_5] [i_5] = ((/* implicit */signed char) ((((0U) << (((((/* implicit */int) min(((unsigned char)249), (arr_12 [(signed char)12] [(unsigned char)7])))) - (219))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5])))));
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) ((127LL) >= (((/* implicit */long long int) 4294967295U)))))), ((-(((((/* implicit */_Bool) (unsigned short)62128)) ? (((/* implicit */int) (short)-12498)) : (((/* implicit */int) arr_12 [10U] [i_5]))))))));
        arr_14 [i_5] = ((/* implicit */long long int) arr_11 [i_5] [7U]);
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-47)) && (arr_21 [i_9 - 3] [i_8] [0ULL] [0ULL] [i_6] [2LL])));
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1800968579)), (15U)))) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (short)-12498)))) : (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) (unsigned char)101)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_5] [i_5])))) < (min((((/* implicit */unsigned long long int) 0U)), (var_18))))))));
                        }
                    } 
                } 
            } 
            arr_24 [(unsigned char)12] [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) (unsigned char)78)), (-127LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [(signed char)9] [i_6])) : (((/* implicit */int) (unsigned char)214))))))) * (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_16)))), (((((/* implicit */_Bool) 3811569030210595809LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
            var_26 &= ((((/* implicit */_Bool) var_11)) && (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_6]))) > (arr_15 [i_5]))));
        }
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((var_3), (((/* implicit */unsigned long long int) var_11)))))));
            var_28 = var_3;
            arr_29 [i_10] [i_10] [i_10] &= ((/* implicit */unsigned char) var_8);
        }
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_29 |= ((/* implicit */unsigned char) (+(((((((/* implicit */int) arr_30 [i_5] [i_5])) + (((/* implicit */int) (short)32767)))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_5] [i_12])) : (((/* implicit */int) (unsigned char)122)))) + (16)))))));
                arr_35 [i_12] [i_11] [i_12] = ((/* implicit */unsigned long long int) -1438719832288278168LL);
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (long long int i_14 = 1; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) max((max((((/* implicit */long long int) var_8)), (var_10))), (((/* implicit */long long int) 18U))));
                            arr_41 [i_12] [i_12] [i_12] [i_12] [i_11] [i_12] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_12] [9U] [i_12] [i_13] [i_14])) ? (((/* implicit */long long int) var_16)) : (var_14)))), (((((/* implicit */_Bool) (unsigned short)31743)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12] [i_11] [1LL] [i_13] [(unsigned char)7]))) : (var_15)))))) ? ((+((+((-9223372036854775807LL - 1LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) - (arr_37 [i_5])))) ? ((-(arr_15 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_14 + 1] [3]), ((unsigned char)155))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 1; i_15 < 12; i_15 += 2) 
            {
                var_31 = ((/* implicit */long long int) var_0);
                var_32 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_1)), (7760227730306745727LL))), (((/* implicit */long long int) max((arr_31 [7U]), (((/* implicit */unsigned short) (short)-17630))))))))));
                arr_45 [i_15] [i_15] = ((/* implicit */unsigned short) (unsigned char)12);
                arr_46 [i_15] [i_11] [6U] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_36 [i_5] [i_15] [(short)1] [4LL] [i_15])) ? (arr_15 [(signed char)1]) : (127LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [6ULL])) ? (((/* implicit */int) (unsigned short)31743)) : (((/* implicit */int) (unsigned char)122)))))))) ? (((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [i_5])))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_19)))))) : (min((((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) (unsigned char)134)))));
            }
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                var_33 = 3178950421U;
                arr_50 [i_11] [i_11] [(signed char)13] [(signed char)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned char)248)), (arr_49 [i_5] [i_5] [10ULL] [i_16]))), (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (short)12506)) : ((+(((/* implicit */int) ((129LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                arr_51 [i_5] [7ULL] = ((/* implicit */unsigned char) var_16);
            }
            arr_52 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33772))))) ? ((~(((/* implicit */int) (short)9424)))) : (((/* implicit */int) var_11)))))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 2; i_17 < 13; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    {
                        var_34 += ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_31 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (-1370792713070211004LL))), ((~(var_7))))), (((/* implicit */long long int) -392947610))));
                        arr_61 [i_18] [i_18] [(unsigned char)9] [i_11] [(unsigned char)9] [(unsigned char)9] = ((((/* implicit */_Bool) ((int) (short)(-32767 - 1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [2LL] [i_18] [i_18]))) : (arr_27 [i_5] [(short)2]));
                    }
                } 
            } 
            arr_62 [i_11] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [(unsigned short)5] [(_Bool)1] [(unsigned char)1])) ? (((/* implicit */int) min((((/* implicit */signed char) arr_26 [(short)12])), (arr_39 [i_11] [6LL] [6LL] [i_11] [i_11])))) : (((((/* implicit */int) (short)-17658)) | (((/* implicit */int) (unsigned short)33772)))))))));
            arr_63 [i_5] = ((/* implicit */unsigned long long int) -2796646057712364399LL);
        }
    }
    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-6)) && ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_8)))))) : (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned long long int) var_16))))))) ? (((/* implicit */long long int) var_12)) : (-127LL)));
    var_36 = ((/* implicit */unsigned int) ((unsigned char) (((+(var_15))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536964872)) ? (((/* implicit */long long int) var_16)) : (-127LL)))))));
    var_37 = ((/* implicit */signed char) 536964872);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        var_38 *= ((short) arr_44 [i_19] [(_Bool)1] [(unsigned char)4] [10LL]);
        arr_66 [i_19] = ((/* implicit */unsigned long long int) ((((unsigned int) 6293106945878326352ULL)) ^ (((((/* implicit */_Bool) (unsigned short)31764)) ? (1662065132U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52005)))))));
    }
}
