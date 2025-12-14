/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144114
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (min((8345767483234072063LL), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) (short)-22350)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)39033))) ? (((((/* implicit */_Bool) arr_4 [i_1] [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12857))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_20 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_5 [i_1]))));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (arr_3 [11ULL]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) 11U))))))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_21 = ((/* implicit */long long int) arr_4 [i_3] [i_1]);
            arr_12 [(unsigned short)5] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_5 [4U])))) + (2147483647))) << (((((/* implicit */int) ((_Bool) arr_11 [(unsigned char)8] [i_3]))) - (1)))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
        }
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        var_23 = ((/* implicit */long long int) min((((/* implicit */int) ((((unsigned int) arr_11 [i_4] [9])) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4 - 1])) >= (((/* implicit */int) var_6))))))))), ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))))));
        var_24 = ((/* implicit */_Bool) (+(min((var_1), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)61962)), (1762878063U))))))));
        var_25 -= ((/* implicit */short) ((signed char) max((arr_3 [i_4]), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))))));
        var_26 &= ((/* implicit */unsigned char) arr_10 [i_4 + 3] [i_4]);
    }
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((int) arr_5 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    var_28 += ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_12)))) ? ((+(((/* implicit */int) (unsigned short)63637)))) : ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) ((unsigned short) var_2)))));
                    var_29 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) arr_1 [i_5 + 2])) : (((/* implicit */int) var_17))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (signed char i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_30 += ((/* implicit */unsigned short) var_17);
                            arr_32 [i_5] [i_5] [i_5] [i_5] [(unsigned char)4] [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5464333444785139223ULL)))) ? (0LL) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_21 [i_11])))));
                            var_31 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_5] [i_5]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((2060702568) - (((/* implicit */int) (signed char)9))))));
                        }
                        for (short i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            arr_35 [i_5] [i_8] [i_5] = ((/* implicit */short) var_18);
                            arr_36 [i_5] [i_5] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned short)63634))) << (((((/* implicit */int) arr_5 [i_9])) - (216)))));
                            arr_37 [i_5] [9LL] [i_9] [i_10] [i_12] = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2060702568)) && (((/* implicit */_Bool) 17867093720683851524ULL))))), (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2532089234U))))));
                        }
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9 + 1] [i_5 - 2]))) | (arr_20 [i_9 + 1] [i_13] [i_5 + 1] [i_10])));
                            var_33 = ((/* implicit */int) (~(arr_26 [i_5] [i_9] [(short)12])));
                            arr_40 [i_13] &= ((/* implicit */long long int) ((unsigned int) arr_3 [i_9 - 1]));
                            arr_41 [(short)8] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) arr_17 [i_5] [(unsigned char)0] [i_13]);
                            arr_42 [i_13] [i_5] [i_9] [i_10] = ((((/* implicit */_Bool) ((unsigned char) 1762878041U))) ? (arr_4 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        }
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            var_34 ^= ((/* implicit */_Bool) (+(arr_17 [i_5] [i_8] [i_14])));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))), (((/* implicit */int) ((short) max((1762878062U), (((/* implicit */unsigned int) (signed char)99)))))))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)1899))) ? (var_1) : (((((/* implicit */long long int) arr_24 [i_5])) - (arr_21 [i_5])))));
                        }
                        arr_45 [i_5] [i_8] [i_9] [i_5] = ((/* implicit */unsigned short) ((unsigned char) arr_18 [i_9] [i_9] [i_9]));
                        var_37 = ((/* implicit */unsigned char) var_13);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 3) 
                        {
                            arr_48 [i_5 + 3] [12] [12] [(unsigned short)6] [i_5 + 3] [i_5] [i_15] = ((/* implicit */unsigned short) (signed char)99);
                            var_38 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_8])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (unsigned char)133))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15]))) | (arr_21 [i_5]))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            arr_52 [i_5] [i_8] [i_5] [i_5] [(short)0] = ((/* implicit */long long int) (+(((/* implicit */int) min((var_17), (((/* implicit */short) arr_1 [i_5 + 2])))))));
                            var_39 += max((((unsigned char) (+(arr_3 [i_16])))), (((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)126))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10] [i_10]))) >= (arr_0 [i_8]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+((-(((/* implicit */int) var_14)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)65535)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) : (((var_13) ? (-7484985139257732648LL) : (((/* implicit */long long int) (-2147483647 - 1)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_46 [i_17] [i_17] [i_17] [i_17] [i_17])))) : (((/* implicit */int) min((((short) var_6)), (min((var_2), ((short)-1))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_18 = 2; i_18 < 10; i_18 += 3) 
        {
            var_42 += ((/* implicit */_Bool) arr_11 [i_17] [i_17]);
            var_43 &= ((/* implicit */unsigned long long int) (unsigned short)58410);
        }
        var_44 ^= ((/* implicit */unsigned long long int) (~(((long long int) ((unsigned short) (short)26103)))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
    {
        var_45 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_14 [i_19])))));
        var_46 ^= ((/* implicit */long long int) min((min((min((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned short)61974)))), (((/* implicit */unsigned long long int) (signed char)-99)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_62 [i_19] [i_19])))))));
        arr_63 [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)2970)), (arr_8 [i_19] [i_19] [(unsigned short)10]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) -2147483646)), (arr_3 [i_19])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_19])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-2980))))) : (((unsigned long long int) arr_5 [i_19]))))));
    }
}
