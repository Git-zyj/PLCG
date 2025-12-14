/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107905
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
    var_11 = ((/* implicit */unsigned char) min((min((((/* implicit */int) (_Bool)1)), (((var_1) / (613408360))))), (((((/* implicit */int) ((((/* implicit */long long int) var_2)) != (var_0)))) >> (((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (3438445153524787838LL)))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65517)) ? (max((((/* implicit */long long int) var_9)), (var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))) / (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_14 += ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_15 += ((/* implicit */unsigned int) var_8);
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)65515);
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7))))) ? (4266276676U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)255))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11)) % (((/* implicit */int) var_8))))) ? (644649660574854061ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (short)-32760))));
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */unsigned char) ((signed char) 2));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_19 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (_Bool)1)))));
                arr_21 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -7))))) >> (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))));
            }
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) 13);
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */int) var_10)) != (((((/* implicit */_Bool) -18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_7] [i_7])))))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65525))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-23729))))) : (min((((/* implicit */unsigned int) var_5)), (2851524697U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (unsigned char)31)))))))))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) arr_35 [i_9] [i_9] [(unsigned char)0] [i_9] [i_9] [i_9] [6ULL])) ? (arr_27 [i_9]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) <= (((((/* implicit */_Bool) arr_34 [i_12] [(_Bool)0] [(unsigned short)14] [(_Bool)0] [i_8])) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_6))) : (min((var_6), (((/* implicit */unsigned int) var_7))))))));
                            var_23 += ((/* implicit */int) min((3ULL), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_3)), (arr_31 [i_11 - 1] [(unsigned short)6] [i_8]))), (((/* implicit */int) (short)16294)))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((min((4323866809986125912ULL), (((/* implicit */unsigned long long int) var_7)))) >= (((((/* implicit */unsigned long long int) -11)) + (8ULL)))))) >> (((((((/* implicit */_Bool) max((12048755035734833709ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2226751567U)) ? (882127986U) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) (short)-13873)) : (-1)))))) - (882127983U)))));
                            arr_37 [i_12] [i_9] [(unsigned char)3] [i_9] [(unsigned char)4] = ((/* implicit */signed char) -1559218146);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_40 [i_8] [i_9] [11U] [i_11] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)11)) ? (arr_36 [i_13 - 1] [i_11 + 2] [i_11] [i_11] [i_9]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_10] [(_Bool)1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_41 [i_9] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_38 [i_13] [i_13 - 1] [i_11 + 2] [i_11 + 2] [15] [i_11 + 1] [i_11])) : (((/* implicit */int) (_Bool)1))));
                            var_25 = 13U;
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (unsigned short)54561))));
                        }
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_27 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_35 [i_8] [i_9] [i_10] [i_9] [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) % (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) : (var_6))))));
                            var_28 += ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)20433)) ? (((/* implicit */unsigned int) 995174119)) : (3615151337U))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(((/* implicit */int) (short)-2018)))))));
                            var_30 += ((/* implicit */unsigned int) var_9);
                            var_31 -= ((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) (signed char)21)))) : (((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) var_10)))))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) 642404647U)) ? (((/* implicit */unsigned long long int) (((-(arr_31 [i_15] [6] [i_9]))) + ((+(-660519741)))))) : (0ULL))))));
                            var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (((/* implicit */short) var_9))))) - (((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))))));
                            var_35 += ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_46 [i_15] [14] [i_10] [14] [i_8])), (arr_43 [i_11] [i_11] [i_10] [i_10] [5U] [i_8])))) ? (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U))) : ((+(2459501728U))))));
                            var_36 += ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (short)31)) || (((/* implicit */_Bool) arr_44 [1U])))), ((_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_15] [i_15] [(unsigned char)11] [i_10] [i_9] [(signed char)7] [i_8])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (_Bool)1))))), ((+(var_4))))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
                        {
                            var_37 = ((/* implicit */_Bool) max((((/* implicit */int) min((((((/* implicit */_Bool) -12)) || (arr_38 [i_9] [i_9] [i_10] [7] [i_10] [i_9] [i_8]))), (((((/* implicit */_Bool) arr_49 [i_8] [i_8] [i_8] [i_10] [i_11] [i_16])) && (((/* implicit */_Bool) 0U))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_30 [i_9] [i_9] [i_10])), ((unsigned short)58545)))) ? (((/* implicit */int) ((arr_38 [i_8] [i_9] [i_10] [i_10] [i_11] [i_10] [i_16]) && (((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) (short)46)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_50 [i_9] [(_Bool)1] [i_10] [i_9] [(unsigned char)5] [i_9] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))) == ((+((+(((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            var_38 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 4286578688U))))));
                            var_39 += ((/* implicit */unsigned int) 18446744073709551615ULL);
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) max((-1561423681), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))))))));
                        }
                        /* vectorizable */
                        for (short i_18 = 2; i_18 < 14; i_18 += 2) 
                        {
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (!(((/* implicit */_Bool) 2381830430377907754ULL)))))));
                            arr_55 [i_9] = ((((/* implicit */_Bool) ((int) (short)10232))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (-7) : (((/* implicit */int) (_Bool)1)))));
                        }
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((625278599) != (((/* implicit */int) (unsigned short)6961))))))) / (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)241))))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            arr_58 [i_19] [0ULL] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) (unsigned short)65402))) ? (((/* implicit */unsigned long long int) ((var_7) ? (45604320U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_4)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) 8192))));
            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))));
            var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_5)) : (var_1)))) ? (max((((/* implicit */unsigned int) var_8)), (2983549764U))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_8] [i_19]))) : (3399055809U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (min((((((/* implicit */_Bool) (unsigned char)241)) ? (var_0) : (((/* implicit */long long int) 2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4245395966U)))))))));
        }
        /* vectorizable */
        for (int i_20 = 3; i_20 < 15; i_20 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_21 = 1; i_21 < 13; i_21 += 4) 
            {
                var_45 += ((/* implicit */unsigned char) ((unsigned short) var_8));
                var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((((/* implicit */int) (signed char)-110)) != (((/* implicit */int) (unsigned short)7168))))))))));
            }
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)78)) << (((((/* implicit */int) (signed char)-16)) + (31))))))));
            var_48 = ((/* implicit */short) (((!(((/* implicit */_Bool) 26937266)))) ? (var_2) : (((/* implicit */int) (unsigned char)60))));
            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */_Bool) -243180396)) ? (((((/* implicit */_Bool) var_5)) ? (0) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))))));
            var_50 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1956538433)) || ((_Bool)1))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_57 [i_20] [i_8])))) : (-584177541)));
        }
    }
}
