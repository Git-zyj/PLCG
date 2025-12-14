/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155738
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) var_0))))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) (~(9223372036854775807LL)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_2 [i_0])))) * (((/* implicit */int) var_10))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) >= (((/* implicit */int) arr_5 [i_0] [i_0 + 1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (7698444792460698498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) : (((arr_6 [(signed char)1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19904)))))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((((unsigned long long int) var_1)) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_5 [i_3] [i_3]))))))) ? ((-(((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_2])) : (((/* implicit */int) arr_2 [i_0])))))) : (min(((-(((/* implicit */int) (unsigned char)200)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((-1334333141744267593LL), (((/* implicit */long long int) (_Bool)1))))) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (((_Bool)1) || (((((/* implicit */int) arr_10 [(unsigned char)0])) != (((/* implicit */int) (short)19899)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4246039122907294416LL)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (short)9487))))), ((+(min((((/* implicit */unsigned long long int) (unsigned short)27244)), (8352810858130306480ULL))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (((((_Bool)1) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_2])) || (((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_4] [1LL] [i_4]))))))) : (min((max((18446744073709551607ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((((/* implicit */_Bool) var_10)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))));
                        }
                        var_23 = ((/* implicit */signed char) ((unsigned char) ((_Bool) ((signed char) arr_6 [i_4]))));
                        var_24 = ((/* implicit */signed char) min((18446744073709551604ULL), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_8)))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (unsigned char)87)))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)45616)) != (((/* implicit */int) var_9)))))))) ? (min((max((arr_15 [i_0]), (((/* implicit */unsigned long long int) (signed char)12)))), (((/* implicit */unsigned long long int) ((long long int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19924)))));
        }
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned char) var_9)))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])), (arr_15 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2461133177U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_15 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])) : (arr_15 [i_0 + 1]))))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        var_28 = (!(((/* implicit */_Bool) (unsigned short)45599)));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_21 [i_7]))));
            var_30 -= ((/* implicit */long long int) var_9);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) (-(8838449744402025771LL)));
                        var_32 ^= 2436338639959769435LL;
                        var_33 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)124)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4111930084U)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 4) 
            {
                for (int i_11 = 3; i_11 < 8; i_11 += 4) 
                {
                    {
                        arr_37 [i_7] [i_7] [i_7] [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_11 + 4] [i_7] [i_7] [i_6])) ? (((/* implicit */int) arr_29 [i_7] [i_11 - 3] [i_11] [i_7])) : (((/* implicit */int) arr_25 [i_7] [i_11] [i_10] [i_7]))));
                        /* LoopSeq 3 */
                        for (int i_12 = 2; i_12 < 9; i_12 += 2) 
                        {
                            var_34 += ((/* implicit */unsigned char) (-(arr_20 [i_6 - 2] [i_6 - 2])));
                            var_35 = ((/* implicit */unsigned short) (signed char)-49);
                            var_36 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_19 [(short)2] [i_7]))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            arr_44 [i_13] [i_7] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_1)) != (((/* implicit */int) arr_31 [i_6] [i_7]))))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) != (((/* implicit */int) ((((/* implicit */int) (signed char)80)) < (((/* implicit */int) var_7)))))));
                        }
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+((-9223372036854775807LL - 1LL)))))));
                            var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (742188109U)));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_10] [i_10] [4ULL])) ? (3316147792U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1])))))) ? (((/* implicit */int) arr_46 [i_10 + 2] [i_7] [5] [i_6 - 3] [i_14] [i_11 + 4] [i_10])) : (((((/* implicit */_Bool) arr_34 [i_6] [i_7] [i_10 + 1] [i_10 + 1] [i_14])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12))))));
                        }
                        var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [(signed char)1] [i_10] [i_10 - 2] [i_10 - 1] [(signed char)10]))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) var_4))));
                    }
                } 
            } 
        }
    }
    var_44 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((11916346156306505781ULL), (((/* implicit */unsigned long long int) (unsigned char)20))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 864846790U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (895229430167020504LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)64012))))))) : (var_4)));
}
