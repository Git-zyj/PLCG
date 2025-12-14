/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161817
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 131071))))))) : (((var_6) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (unsigned char)148)) ? (8716040225381310280LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) var_0)) : (var_8)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (unsigned char)227)))))))));
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned char) var_8);
            arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) (unsigned char)148))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (11ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-90)) + (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (unsigned char)73)))))))));
            var_18 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-960343126))), ((-(((/* implicit */int) var_13))))))));
            var_19 += ((/* implicit */_Bool) (signed char)-1);
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) var_6);
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((arr_7 [i_2] [i_3 - 1] [i_3 - 1] [i_0]), ((-(((/* implicit */int) var_10)))))))));
            }
            var_22 = ((/* implicit */unsigned int) max((var_22), (528154658U)));
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (arr_10 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned char)118)) : (((((/* implicit */int) arr_6 [i_0])) | (((/* implicit */int) var_2))))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)156)), (arr_2 [i_0])))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))))) / ((+(var_3)))))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)21727)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (unsigned char)166)))))) >= ((((!(var_9))) ? ((+(((/* implicit */int) var_9)))) : (((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            var_25 = ((/* implicit */signed char) (+(max((((0ULL) | (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) 112U))))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) -412292021)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
        }
        var_26 = ((/* implicit */long long int) 7U);
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) var_8);
                        var_28 = ((/* implicit */unsigned short) (!(((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8652)))))));
                        arr_26 [i_6] [i_7] [i_6] [i_9] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) ^ (arr_10 [i_9 + 1] [i_9 + 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)4)))) >= (((/* implicit */int) var_10)))))));
                    arr_31 [i_6] [i_10] [i_6] [i_6] = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) arr_23 [i_6] [i_6] [i_11] [i_11]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3168178781215006360LL)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_12])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-9376))) == (-1LL)))) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_11)))))));
            var_31 += ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1))), (((/* implicit */unsigned long long int) max((arr_19 [i_6]), (((/* implicit */unsigned short) var_2))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3379886433U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)56))))) ? (((/* implicit */int) (unsigned char)148)) : (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_9)))))))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? (915080863U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)1337)))))))))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */short) ((((arr_13 [i_13]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_13])))) ^ (((((/* implicit */int) arr_8 [i_13])) & (((/* implicit */int) arr_8 [i_13]))))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) (unsigned char)108))))) | (((((/* implicit */int) (signed char)40)) * (((/* implicit */int) (_Bool)1))))));
        arr_38 [i_13] = ((/* implicit */unsigned short) (-(((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_39 [i_13] [i_13] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) <= (max((((/* implicit */unsigned long long int) (unsigned char)108)), (arr_37 [i_13] [i_13])))))), ((-(((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_13])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)108))))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_34 [i_13])) ? (((/* implicit */int) (signed char)-43)) : (arr_7 [i_13] [i_14] [i_14] [i_13]))), ((-((+(((/* implicit */int) arr_28 [i_13] [i_13] [i_13])))))))))));
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_44 [i_13] = ((/* implicit */short) (unsigned char)108);
                /* LoopSeq 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) (signed char)-1);
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (26ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) : (((var_1) ^ (((/* implicit */unsigned long long int) 0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84)))));
                    arr_47 [i_13] [i_15] [i_16] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_15])))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    var_38 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)227)) >= (((((/* implicit */int) arr_0 [i_13])) & (((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) ? (((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13] [i_13])) : (max((((/* implicit */int) var_12)), (2147483647)))))) : (var_1)));
                    arr_51 [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-592617305)))) ? (3204127602U) : (((unsigned int) (!(((/* implicit */_Bool) 1ULL)))))));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((min((((/* implicit */long long int) arr_3 [i_13] [i_14])), (var_8))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_14] [i_14])))))))));
                }
                for (short i_18 = 1; i_18 < 13; i_18 += 4) 
                {
                    arr_55 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7871581946015371806ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))))) : (((((/* implicit */int) arr_32 [i_13] [i_14] [i_13])) * (((/* implicit */int) ((short) (unsigned char)0)))))));
                    var_40 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) <= (((((/* implicit */int) arr_52 [i_13] [i_13] [i_13] [i_13])) + (((/* implicit */int) (signed char)31))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_15]))) ^ (3ULL)))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (-(var_3))))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                for (long long int i_20 = 0; i_20 < 16; i_20 += 4) 
                {
                    {
                        arr_62 [i_13] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) (+((-(arr_33 [i_14] [i_14] [i_14])))));
                        arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) arr_58 [i_13] [i_13] [i_14] [i_13] [i_19] [i_20]);
                    }
                } 
            } 
        }
    }
}
