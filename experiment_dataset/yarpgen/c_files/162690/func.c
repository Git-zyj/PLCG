/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162690
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
    var_18 = (signed char)-82;
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 52376611))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (4725855141153193215LL))), (((/* implicit */long long int) min((-1832230208), (((/* implicit */int) (short)-29259))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_12)) <= (-497596879))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-99)) ? (-4725855141153193224LL) : (((/* implicit */long long int) 2147483639))));
        var_21 &= ((/* implicit */int) (short)-23511);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] |= arr_6 [i_1] [i_1];
        var_22 = arr_4 [i_1] [i_1];
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_3 - 1])) ? (9223372036854775777LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_3 - 1])))))) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) ((unsigned char) arr_4 [i_2 + 1] [i_3 - 1])))));
                    arr_14 [i_1] [i_2 + 4] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)54)) ? (369070479) : (((/* implicit */int) (unsigned char)243)))), (min((((/* implicit */int) arr_13 [i_1] [i_2 + 3] [i_3 - 1])), (arr_12 [i_3 - 1] [i_2] [i_2 + 3] [i_1])))))) ? (((/* implicit */int) arr_5 [i_1])) : (min(((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3]))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3 + 1])) + (((/* implicit */int) ((unsigned char) arr_9 [i_1])))))) ? ((+(((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 4]))) : (1076558746U))))) : (((/* implicit */unsigned int) min((min((arr_10 [i_1] [i_1] [i_1] [i_1]), (arr_11 [i_1] [i_2] [i_3] [i_3]))), (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_3 - 1])) ? (arr_12 [i_3] [i_2 + 4] [i_3] [i_2]) : (-2147483634))))))));
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)103))))), (min((0U), (((/* implicit */unsigned int) (unsigned char)171))))))) % (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (-5971406423573182570LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        arr_27 [i_6] [i_7] &= ((/* implicit */unsigned int) 9007198180999168LL);
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) min(((short)32767), (((/* implicit */short) ((unsigned char) (unsigned char)253)))))), (arr_16 [i_6])));
                            var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (-9223372036854775780LL) : (((/* implicit */long long int) arr_25 [i_5])))), (((/* implicit */long long int) ((signed char) arr_30 [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] [i_4])))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((long long int) ((arr_5 [i_4]) ? (((/* implicit */int) (unsigned short)41018)) : (((/* implicit */int) arr_26 [i_6]))))), (((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 - 1] [i_5])) ? (5971406423573182556LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 - 1] [i_5 + 1] [i_5 + 1]))))))))));
                            var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (arr_11 [i_8] [i_5 + 1] [i_4] [i_5 - 1])))), (min((((/* implicit */int) arr_20 [i_5 - 1] [i_5])), (arr_11 [i_8] [i_5 + 1] [i_5] [i_5 + 1])))));
                        }
                    }
                } 
            } 
        } 
        arr_32 [i_4] &= ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (short)2048)), (2394933991U))));
        arr_33 [i_4] [i_4] &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) || (((/* implicit */_Bool) arr_9 [i_4]))))) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_4])), (arr_23 [(unsigned char)2]))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        arr_36 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [14U])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_9]))))) : (min((3619131302U), (((/* implicit */unsigned int) (signed char)-88))))))) ? ((+(2147483639))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)3)), (arr_21 [10U] [i_9 + 1])))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_22 [(unsigned char)0] [i_9 + 1] [i_9] [i_9 + 1])))) : ((~(((/* implicit */int) arr_19 [i_9])))))));
        arr_37 [i_9 + 1] = ((/* implicit */int) ((signed char) min((((/* implicit */long long int) (unsigned char)3)), (-9223372036854775778LL))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            var_28 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)245)) ? (((629226755) / (((/* implicit */int) arr_23 [i_10])))) : (((/* implicit */int) min((arr_28 [i_9] [i_9] [i_9 + 1] [i_9] [i_10] [i_10]), (((/* implicit */unsigned char) arr_39 [i_10] [i_9 + 1]))))))), ((-(((/* implicit */int) (signed char)-67))))));
            var_29 &= ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_21 [i_10] [i_10]) : (((/* implicit */int) arr_4 [i_9 + 1] [i_10]))))), (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9 + 1] [i_9] [i_9 + 1]))) : (arr_25 [i_10]))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)255)), (361712750))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        arr_52 [i_13] [i_12] [i_13] [i_13] |= ((/* implicit */unsigned char) min(((~(min((((/* implicit */long long int) (unsigned short)26125)), (1846036982115225589LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (min((arr_50 [i_14] [i_12] [i_12] [i_11]), (((/* implicit */unsigned int) arr_41 [i_11] [i_11])))))))));
                        arr_53 [i_12] [i_13] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) arr_49 [i_11] [i_12])) : (((/* implicit */int) (unsigned char)2))))) ? (min((arr_43 [i_12]), (((/* implicit */unsigned int) 1920772426)))) : (((arr_42 [i_11] [i_12]) ? (321078107U) : (((/* implicit */unsigned int) arr_46 [i_11]))))))) ? (((min((arr_50 [i_14] [i_12] [i_12] [i_11]), (((/* implicit */unsigned int) (short)28511)))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_12])) ? (((/* implicit */int) (unsigned short)65393)) : (((/* implicit */int) (short)28672))))) ? (((((/* implicit */_Bool) 19)) ? (((/* implicit */int) (unsigned char)236)) : (arr_48 [i_11] [i_12] [i_13]))) : (((/* implicit */int) (short)-28540)))))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(1609886361))) > (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)31))))))))) >= (min((arr_43 [i_11]), (arr_43 [i_11])))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)-28527), (((/* implicit */short) ((((/* implicit */_Bool) (short)-28558)) && (((/* implicit */_Bool) (unsigned char)81)))))))) == (((((/* implicit */_Bool) ((int) (short)11))) ? (((/* implicit */int) arr_45 [i_11] [i_12] [i_13])) : (min((1853600767), (((/* implicit */int) arr_51 [i_11] [i_12] [i_13] [i_14]))))))));
                    }
                } 
            } 
        } 
        arr_54 [(short)20] |= ((/* implicit */unsigned char) ((long long int) (signed char)5));
        arr_55 [2] &= (~(1847145388));
        var_32 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_45 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_45 [i_11] [i_11] [i_11])))));
    }
    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) arr_44 [i_15] [(short)0] [i_15]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_56 [i_15] [i_15]))))) : (((unsigned int) arr_48 [i_15] [i_15] [i_15])))), (((((/* implicit */_Bool) arr_44 [i_15] [10U] [i_15])) ? (((((/* implicit */_Bool) arr_11 [i_15] [i_15] [i_15] [i_15])) ? (arr_50 [i_15] [i_15] [(_Bool)1] [i_15]) : (arr_43 [8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15] [i_15] [i_15] [i_15])))))));
        arr_58 [i_15] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_8 [i_15] [i_15] [i_15]))) ? ((~(((((/* implicit */int) (unsigned short)19)) | (((/* implicit */int) arr_56 [i_15] [i_15])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_15] [i_15])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) 801774101)), (arr_40 [8] [8])))))))));
    }
}
