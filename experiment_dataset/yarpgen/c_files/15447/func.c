/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15447
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
    var_14 |= ((/* implicit */long long int) ((short) ((unsigned char) var_9)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2])) ^ (((/* implicit */int) arr_6 [i_0] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1])) != (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) -1964566291)) ? (arr_4 [i_0 + 3] [i_1 - 2] [i_1 - 1]) : (arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 2]))))))));
            arr_7 [i_1] |= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-9223372036854775803LL));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((((arr_3 [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [3])))) % (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) (short)-15)) ? (2428508820530584ULL) : (((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1]) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))))));
        }
        arr_8 [(short)0] |= ((/* implicit */int) var_13);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_15 [i_2] [2ULL] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned short)30272);
                arr_16 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (((_Bool)0) && (((/* implicit */_Bool) 3LL))));
            }
            var_17 = ((/* implicit */signed char) (((+(3495958234626454486LL))) >> (((max((((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_3 - 3])), (((((/* implicit */_Bool) arr_11 [22ULL] [i_3])) ? (((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_13 [18LL] [i_2] [i_3] [i_3 - 2])))))) - (20018)))));
            arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3 - 3] [i_3 - 1]))))) ? ((+(max((9223372036854775807LL), (((/* implicit */long long int) arr_9 [11ULL] [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_12 [i_2] [i_3 + 1] [i_2]))))))));
            arr_18 [(unsigned char)12] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [(unsigned char)20] [i_3 - 2] [i_3 - 3] [i_2]))));
            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) 10202826138385032903ULL)) ? (9223372036854775783LL) : ((-9223372036854775807LL - 1LL))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_22 [14U] [14U] [14U] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5] [i_2])) ? (((3078151669U) << (((((-9223372036854775801LL) - (-9223372036854775790LL))) + (39LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_5] [20])))));
            var_19 += ((/* implicit */unsigned short) arr_21 [i_5]);
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_26 [i_2] [i_2] = ((/* implicit */int) (+(arr_10 [i_6])));
            arr_27 [i_2] &= ((((/* implicit */_Bool) arr_9 [(signed char)6] [i_2])) || ((_Bool)1));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-18795)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)20))))))) : (((unsigned int) var_13))));
        var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 9133689013884766554LL)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((((/* implicit */unsigned int) var_2)), (3104319451U))))))));
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 2) 
        {
            arr_34 [i_8] [i_7] [(unsigned char)11] = ((((((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned long long int) arr_19 [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (2428508820530596ULL))))) : (((((/* implicit */_Bool) arr_32 [(signed char)7] [10])) ? (arr_20 [i_7] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [5U]))))))) + (((/* implicit */unsigned int) max((max((arr_19 [i_7] [i_7] [i_7]), (((/* implicit */int) arr_28 [i_7])))), (((((/* implicit */int) (signed char)94)) % (((/* implicit */int) var_2))))))));
            arr_35 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_8] [i_8]))) ? ((+(((/* implicit */int) arr_0 [i_8] [i_8])))) : (((/* implicit */int) arr_0 [i_8] [i_8]))));
            arr_36 [i_7] [i_8 + 1] [i_8] = ((/* implicit */long long int) (signed char)-110);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-97)) ? (min((((/* implicit */long long int) (_Bool)1)), (-9133689013884766536LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            arr_37 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_7] [i_7] [i_8] [i_8])), (min((((/* implicit */unsigned int) arr_32 [i_7] [i_7])), (arr_20 [8] [i_7] [i_8])))))) : (((arr_13 [i_8 - 2] [i_8 - 2] [(short)2] [i_8 + 1]) ? (min((9223372036854775803LL), (((/* implicit */long long int) arr_21 [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_40 [(_Bool)1] [i_9] |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22688)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)14)))));
            var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_10 [i_7]) : (9223372036854775801LL))), (((/* implicit */long long int) 1964566307))));
            var_24 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_25 [i_7])))) != (((((/* implicit */_Bool) max((arr_31 [i_7]), (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_6 [i_7] [i_7])) : (((/* implicit */int) arr_12 [i_7] [i_7] [(signed char)4]))))));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_45 [i_7] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_7]))))) || (((/* implicit */_Bool) arr_23 [i_7] [12]))));
                arr_46 [i_9] [(unsigned char)13] [i_10] = ((/* implicit */int) arr_29 [i_7]);
            }
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_25 = ((/* implicit */_Bool) arr_28 [(unsigned short)8]);
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_1 [(unsigned char)3]))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)42852)) : (((/* implicit */int) arr_2 [(unsigned char)4])))), (((/* implicit */int) (unsigned char)147))))))))));
                arr_49 [(short)14] [i_9] [i_9] = ((/* implicit */long long int) var_4);
            }
            /* vectorizable */
            for (unsigned short i_12 = 3; i_12 < 12; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    arr_56 [i_9] [i_9] [i_9] [i_9] = arr_12 [i_7] [i_9] [i_13];
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_12 - 1] [i_9] [i_12 + 3])) ? (((/* implicit */int) arr_51 [i_12 - 2] [i_9] [i_12 + 1])) : (((/* implicit */int) arr_51 [i_12 - 3] [i_9] [i_12 + 2]))));
                    var_28 = ((/* implicit */short) ((unsigned short) var_0));
                }
                /* LoopSeq 2 */
                for (signed char i_14 = 2; i_14 < 12; i_14 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 1863810829U)) : (-9223372036854775794LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_12] [i_14 + 3])) || (((/* implicit */_Bool) arr_21 [i_9])))))) : (((unsigned int) arr_3 [i_7]))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1406)) ? (-9133689013884766530LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_7])))))) ? (((/* implicit */int) ((549755813887LL) != (((/* implicit */long long int) ((/* implicit */int) (short)32512)))))) : (((/* implicit */int) arr_55 [i_9] [i_9] [i_9] [i_14 - 2]))));
                }
                for (long long int i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    arr_63 [(_Bool)1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) (unsigned char)169);
                    var_31 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-23113)) - (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) arr_58 [4ULL] [4ULL] [4ULL] [i_15])))) : (-1416327705)));
                    arr_64 [i_12] [i_9] [i_12] [i_12] = ((/* implicit */_Bool) ((arr_43 [i_12 + 2] [i_12 + 3] [i_12 - 3]) << (((/* implicit */int) (signed char)38))));
                }
                arr_65 [i_9] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (short)-9405))));
            }
            arr_66 [i_7] [i_9] [i_7] = arr_44 [i_7] [(short)4] [(unsigned short)10] [(unsigned short)10];
        }
    }
    var_32 = ((/* implicit */unsigned char) min((((((var_13) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) -1964566321)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_8))));
}
