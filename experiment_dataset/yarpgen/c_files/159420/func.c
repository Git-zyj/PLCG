/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159420
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 |= ((/* implicit */unsigned long long int) (short)11492);
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0)))))));
                    var_22 = ((/* implicit */_Bool) ((unsigned int) (+(16776960))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)12288))));
        var_24 = ((/* implicit */unsigned short) min((((long long int) (unsigned char)6)), (((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) (short)18484)), (4078896320U)))))));
    }
    for (short i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((-605813914) ^ (((/* implicit */int) (unsigned short)7029)))))) ^ (((/* implicit */int) ((short) 3560086205805499773ULL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3317310366U)) * (0LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_4])) != (10898765421831894151ULL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (short)15424)))))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((10LL) ^ (((/* implicit */long long int) 2147483647))))) && (((/* implicit */_Bool) ((short) (_Bool)0)))));
            var_28 = (~(((((/* implicit */_Bool) (unsigned short)44194)) ? (1193921691687798178ULL) : (((/* implicit */unsigned long long int) 2147483647)))));
            var_29 = (((((_Bool)1) ? (13099008150322955155ULL) : (((/* implicit */unsigned long long int) 1788823691)))) + (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)17)) + (((/* implicit */int) (signed char)84))));
            arr_20 [16ULL] [i_6] [i_6] = ((/* implicit */unsigned short) arr_18 [i_4] [i_4]);
            var_31 |= ((/* implicit */unsigned short) max((max((((/* implicit */int) ((10701040755640565772ULL) != (((/* implicit */unsigned long long int) 4294967293U))))), (((((/* implicit */int) (unsigned short)60705)) >> (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_11 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15291)))))))));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)73)) >> (((4294967287U) - (4294967272U)))))) ? (((((((/* implicit */int) (short)-8427)) + (2147483647))) >> (((arr_21 [i_4] [i_4]) + (701081748))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-52)))))))));
            arr_23 [7U] = ((/* implicit */unsigned long long int) (signed char)-52);
            var_33 = ((/* implicit */unsigned short) (+(arr_11 [i_7])));
            var_34 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (short)15947)))));
        }
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 23; i_8 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)69)) | ((~(((/* implicit */int) arr_26 [i_8 - 2] [i_8]))))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((signed char) ((unsigned int) (unsigned short)28640))))));
    }
    /* LoopSeq 1 */
    for (signed char i_9 = 3; i_9 < 17; i_9 += 2) 
    {
        arr_29 [(unsigned short)14] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_9 + 3])))) * (((unsigned long long int) (unsigned char)36))));
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            var_37 = (i_9 % 2 == 0) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (!((_Bool)1)))) >> (((((((/* implicit */_Bool) -1530643786)) ? (((/* implicit */int) arr_9 [i_9] [i_9 + 1] [i_10])) : (((/* implicit */int) arr_22 [i_9 + 2])))) - (2976))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (!((_Bool)1)))) >> (((((((((/* implicit */_Bool) -1530643786)) ? (((/* implicit */int) arr_9 [i_9] [i_9 + 1] [i_10])) : (((/* implicit */int) arr_22 [i_9 + 2])))) - (2976))) - (30798)))))));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((((((18446744073709551615ULL) >> (((8070450532247928832ULL) - (8070450532247928820ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_16 [i_10] [i_9])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 6291456ULL))) > ((+(((/* implicit */int) (unsigned short)1060))))))))))));
            var_39 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)60)) + (((/* implicit */int) (unsigned short)65535))));
            var_40 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_18 [i_9 + 4] [i_9 - 1])))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_37 [i_11] [i_11] [(short)10] |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-77)) >= (((/* implicit */int) ((unsigned short) arr_19 [i_11] [i_9 - 1])))));
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)184)) / (((/* implicit */int) (signed char)-122))))) ? ((-(((/* implicit */int) (short)-10383)))) : (-1187362895)));
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)30337)) != (((/* implicit */int) arr_9 [(short)4] [i_9 - 1] [(short)20]))))))));
        }
        var_43 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-90)) ? (((unsigned long long int) 3751336301U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)16527), (((/* implicit */short) (unsigned char)245)))))))), (((((/* implicit */_Bool) (short)-26096)) ? (min((8099423068966816065ULL), (((/* implicit */unsigned long long int) arr_28 [i_9 - 1] [(unsigned short)12])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_44 |= ((int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) arr_22 [i_9]))))));
    }
}
