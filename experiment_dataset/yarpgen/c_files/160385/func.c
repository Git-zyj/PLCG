/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160385
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
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_3))));
    var_16 = ((/* implicit */unsigned char) 16776704LL);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) var_1);
            var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-26547))));
            arr_6 [(unsigned char)4] = ((/* implicit */unsigned long long int) var_9);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned char) (unsigned short)19014)))));
            arr_9 [i_0] = ((/* implicit */short) arr_0 [i_2] [i_0]);
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_9))));
                arr_14 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (22ULL) : (12ULL))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_21 += ((/* implicit */unsigned long long int) (-((+(4097111743U)))));
                    arr_17 [i_0] = ((unsigned char) (unsigned char)8);
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-127))));
                }
                var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) 197855524U)) & (16776698LL)));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3777591432U)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) (short)-97))));
            }
            for (short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
            {
                arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4548987535957374272LL)) ? (18446744073709551604ULL) : (0ULL)));
                arr_21 [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (short)28850))));
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    var_25 *= ((((/* implicit */_Bool) 18014398509481982LL)) ? (((/* implicit */unsigned long long int) 4294967292U)) : (1507544354602192224ULL));
                    arr_24 [i_2 + 1] = ((/* implicit */unsigned int) (unsigned char)0);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32281))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((unsigned char) (unsigned short)20977))));
                        var_28 -= ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)106)));
                        arr_28 [i_0] [i_2] [i_5] [i_6] [i_7] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15775593947785237856ULL)) ? (((/* implicit */long long int) 69226424)) : (16776704LL)));
                        var_29 -= ((/* implicit */unsigned short) ((359744718008318766ULL) > (((/* implicit */unsigned long long int) -778153445))));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) 8556363500480345397ULL))));
                        arr_31 [i_0] [i_2] [i_8] [i_6] [7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)80))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */int) ((815662763341808184LL) | (((/* implicit */long long int) -1809669570))));
                        arr_34 [i_0] [i_2] [i_5] [i_9] [i_9 + 2] [i_6] = (unsigned short)32282;
                    }
                    var_32 = ((/* implicit */int) (unsigned char)197);
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)249)))))));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (short)2959)) : (((/* implicit */int) (unsigned short)10169))));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    arr_41 [i_0] [i_5] [i_5] [i_5] [2U] |= ((/* implicit */short) ((((/* implicit */_Bool) 4752295998140144738ULL)) || (((/* implicit */_Bool) -1452215589477627468LL))));
                    arr_42 [i_0] [i_2] [i_11] [i_11] = ((/* implicit */unsigned char) (~(1452215589477627468LL)));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 4) 
                {
                    var_35 *= ((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned long long int) -1835866787931720646LL)) : (4461664683513419794ULL));
                    /* LoopSeq 4 */
                    for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (+((+(-1452215589477627468LL)))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) -1452215589477627468LL)) ? (7761770495664586542LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1111392973)) % (16777215ULL)));
                        arr_52 [i_0] [i_2] [i_5] [i_12] [i_14] = ((/* implicit */unsigned short) ((8589934591ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10)))));
                        var_39 = (~(4752295998140144738ULL));
                        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) 5939752805278327882LL)) : (arr_30 [i_2 - 1] [i_2 - 4] [i_12 - 2] [i_12 - 1])));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)28962)))))));
                    }
                    for (int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_42 -= ((/* implicit */unsigned short) 18446744073709551615ULL);
                        arr_56 [i_0] [i_0] [i_0] [i_2] [i_5] [i_12] [i_15] = ((/* implicit */unsigned char) (~(1111392941)));
                    }
                    for (signed char i_16 = 2; i_16 < 20; i_16 += 3) 
                    {
                        arr_60 [i_16] [i_12 + 1] [7ULL] [i_12 + 1] [i_12] [3ULL] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)216))));
                        arr_61 [i_2] [i_16] = ((/* implicit */unsigned short) var_4);
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((((/* implicit */_Bool) -7761770495664586542LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) : (3ULL)))));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_37 [i_16 - 1]) : (((/* implicit */unsigned long long int) -9223372036854775801LL))))))))));
                    }
                }
            }
            for (short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)88))));
                /* LoopSeq 2 */
                for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    var_46 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)42727))));
                    var_47 -= ((/* implicit */unsigned short) arr_4 [i_0] [i_2] [16ULL]);
                }
                for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    var_48 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)65532))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        var_49 = ((/* implicit */signed char) ((((/* implicit */int) (short)11)) ^ (((/* implicit */int) (unsigned short)4))));
                        var_50 += ((/* implicit */unsigned long long int) 3875975961U);
                        var_51 = ((/* implicit */long long int) ((arr_13 [i_0] [5LL] [i_17]) << (((((/* implicit */int) (unsigned short)65531)) - (65531)))));
                        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) var_5))));
                    }
                    for (short i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        var_53 -= var_9;
                        var_54 = ((/* implicit */short) ((unsigned char) ((unsigned char) (unsigned char)55)));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) var_0))));
                        var_56 = ((/* implicit */unsigned int) (unsigned char)82);
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        var_57 ^= ((/* implicit */unsigned short) (~(7761770495664586545LL)));
                        var_58 = ((/* implicit */unsigned short) 0ULL);
                        arr_80 [(signed char)5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)61))));
                    }
                    var_59 = ((/* implicit */long long int) var_2);
                }
                var_60 = ((/* implicit */unsigned short) var_13);
            }
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 22; i_24 += 3) 
            {
                arr_84 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                var_61 = ((/* implicit */int) var_9);
                arr_85 [i_0] [10ULL] [i_24] [i_0] = ((/* implicit */unsigned int) ((766902649) << (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) / (-7761770495664586542LL)))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_25 = 1; i_25 < 19; i_25 += 4) 
            {
                var_62 = ((/* implicit */long long int) arr_12 [i_25 - 1] [i_2 - 3] [i_25 - 1] [i_25 - 1]);
                var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) (-(-766902650))))));
                var_64 = ((/* implicit */int) (~(8480218862457009115LL)));
            }
        }
        for (unsigned long long int i_26 = 4; i_26 < 21; i_26 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_27 = 0; i_27 < 22; i_27 += 4) 
            {
                arr_92 [i_0] = ((/* implicit */int) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63943)))));
                var_65 = ((/* implicit */unsigned int) max((var_65), (var_9)));
            }
            for (unsigned short i_28 = 4; i_28 < 20; i_28 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_29 = 3; i_29 < 19; i_29 += 2) 
                {
                    var_66 = (short)0;
                    arr_99 [i_26] [i_26] [i_26] [i_0] [i_0] = ((/* implicit */int) 4294967274U);
                }
                /* vectorizable */
                for (unsigned char i_30 = 2; i_30 < 18; i_30 += 3) 
                {
                    var_67 = ((/* implicit */long long int) var_2);
                    arr_102 [i_30] [i_30] [i_28] [i_30] = ((/* implicit */unsigned long long int) (short)-11);
                }
                for (int i_31 = 0; i_31 < 22; i_31 += 1) 
                {
                    var_68 = ((/* implicit */unsigned char) var_3);
                    var_69 = arr_95 [i_31] [i_26 - 3] [i_0];
                }
                for (unsigned short i_32 = 2; i_32 < 20; i_32 += 2) 
                {
                    arr_110 [i_0] [i_26 - 1] [(unsigned char)19] = ((/* implicit */unsigned int) ((unsigned char) (signed char)53));
                    arr_111 [i_32 - 2] [i_26 - 2] [i_26 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)66)) << (((((/* implicit */int) (unsigned short)768)) - (766)))));
                    var_70 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-92))));
                }
                var_71 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8))));
                arr_112 [i_26] [i_26] [i_26] [i_0] = var_13;
            }
            var_72 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_26 - 1] [i_26 - 4])) ? (((/* implicit */int) (unsigned short)24576)) : (((((/* implicit */int) arr_77 [(unsigned short)15] [i_26] [i_26 - 4] [i_26 - 2] [i_26 - 4])) & (((/* implicit */int) (unsigned short)65535))))));
        }
        arr_113 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : ((((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((((/* implicit */_Bool) (unsigned char)83)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) : (4294967288U)))));
        var_73 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)28))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59110))) : (var_2)))));
    }
}
