/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128002
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
    var_20 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_21 |= ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)81))))), (arr_3 [i_0])));
                var_22 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                var_23 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)32756)))) != (var_10)));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)-81)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (signed char)-1))));
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min(((~(arr_12 [i_2] [i_3] [i_3]))), (((/* implicit */unsigned int) var_2)))))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned short)65514)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)21629)) : (((/* implicit */int) (signed char)7)))))))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_2]), (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (signed char)79)) : (590799696))) : (max((arr_10 [i_2]), (var_18)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))));
            arr_14 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) 7936ULL)) ? (-2147483646) : (((/* implicit */int) (unsigned short)53480)));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_28 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(4722852901611404563ULL))))));
                            arr_21 [i_2] [i_2] [4] [i_2] [i_5] &= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (2351709712830459565LL)))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)220)));
                            arr_22 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_2] [i_2]))))), (max((1376508227U), (((/* implicit */unsigned int) var_0))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) - (18446744073709551610ULL)));
                        }
                    } 
                } 
            } 
        }
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_0)), (((unsigned int) arr_16 [10] [i_2] [16])))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30226))))))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_0))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_31 = ((/* implicit */int) (unsigned short)13);
        arr_28 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((var_8), (arr_27 [i_7]))))) ? (max((((/* implicit */unsigned long long int) (short)0)), (arr_24 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_32 [i_8] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) max((((/* implicit */int) var_8)), (arr_10 [i_8])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_41 [i_8] [i_8] [i_9] [i_10] [i_11] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                        var_32 = ((/* implicit */short) var_16);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)49714))));
                    }
                } 
            } 
            var_34 = ((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_8] [i_8] [i_9]))));
        }
        for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            var_35 = ((unsigned char) ((((/* implicit */int) (short)32758)) >> (((((/* implicit */int) arr_36 [(unsigned char)4] [i_12 + 3] [20] [(signed char)16])) + (7913)))));
            var_36 = ((/* implicit */int) (+(147393061U)));
            arr_44 [i_8] [i_8] = ((/* implicit */int) (signed char)-117);
            arr_45 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_12 + 1] [i_12 - 1]))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (unsigned short i_14 = 2; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_37 = ((/* implicit */int) var_1);
                        arr_53 [(signed char)8] [i_12] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((int) arr_9 [i_12] [i_13])), (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) (-(var_10))))));
                        var_38 = ((/* implicit */unsigned long long int) var_3);
                        var_39 += ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-105)), (max((min(((unsigned short)37349), (((/* implicit */unsigned short) var_11)))), (min(((unsigned short)27531), (((/* implicit */unsigned short) (short)-11043))))))));
                        arr_54 [i_8] [i_12] [i_13] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12 - 3] [i_14 - 1])) ? (((/* implicit */int) arr_46 [i_12 + 1] [i_14 - 1])) : (((/* implicit */int) arr_46 [i_12 - 1] [i_14 + 2])))))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_15])))))) >= (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_24 [i_15])))));
        var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1288061948)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52107))))), (((/* implicit */unsigned int) var_16))))) ? (((/* implicit */int) arr_48 [i_15] [i_15] [i_15] [i_15])) : (max((((473853593) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_0))))));
        var_42 = ((/* implicit */short) (unsigned short)13428);
        var_43 = ((/* implicit */short) max((((/* implicit */int) (short)-19605)), ((-(-473853623)))));
        var_44 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_19)))));
    }
}
