/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186111
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_16 -= ((/* implicit */signed char) (-((+(arr_5 [i_0 - 1] [i_1])))));
            arr_7 [i_0] = ((/* implicit */short) max(((~(arr_5 [i_0 - 1] [i_1]))), (((((arr_5 [i_0 + 1] [i_1]) + (2147483647))) << (((((arr_5 [i_0 - 1] [(unsigned char)5]) + (914996869))) - (24)))))));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((int) arr_6 [i_0] [i_0]))) : ((-9223372036854775807LL - 1LL))))) ? ((-((+(arr_2 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (67108863ULL)))) ? (min((2002598507), (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_15)))))))));
            arr_9 [5LL] [i_0] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)480)))), (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)255))) >= (((/* implicit */int) min(((unsigned char)245), (((/* implicit */unsigned char) (_Bool)1))))))))) : ((-(max((((/* implicit */long long int) (unsigned char)1)), (arr_2 [i_0 - 1])))))));
        }
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) <= (var_3))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(var_0))))));
        var_18 -= ((/* implicit */unsigned char) ((unsigned int) (unsigned char)227));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))))))));
    }
    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_20 -= ((/* implicit */int) ((unsigned char) -9223372036854775805LL));
        arr_15 [12] [i_3 - 2] = min((min((((/* implicit */unsigned long long int) ((unsigned short) 658607122))), (max((((/* implicit */unsigned long long int) var_8)), (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 1]))) : (min((((/* implicit */unsigned int) (_Bool)0)), (872439280U)))))));
        var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_3 - 1]))));
        arr_16 [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(13350234943357778672ULL)))) ? (((/* implicit */int) arr_13 [i_3 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)175)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((1341101806) / (((/* implicit */int) (unsigned char)60)))))))) : ((-((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_14 [i_4]))))), (min(((unsigned char)32), (((/* implicit */unsigned char) (signed char)127))))));
        var_22 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) min((1708341758), (((/* implicit */int) var_13))))) >= (min((var_0), (var_3))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                arr_27 [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) 2130332723250383598LL);
                arr_28 [i_5] [i_5] = (!(((/* implicit */_Bool) (unsigned char)255)));
            }
            arr_29 [i_4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (var_8))))));
            arr_30 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) < ((~(var_10)))));
            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248)))))));
            arr_31 [i_5] [i_5] = ((((((/* implicit */int) arr_13 [i_5])) >> (((((/* implicit */int) arr_17 [i_4])) + (113))))) * ((((-2147483647 - 1)) & (((/* implicit */int) (_Bool)0)))));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_24 -= ((/* implicit */unsigned int) (~(0ULL)));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 2; i_9 < 19; i_9 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
                    arr_39 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)211)))))));
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    arr_44 [i_4] [(unsigned short)16] [i_8] [i_10] = ((/* implicit */unsigned long long int) min((arr_23 [i_4] [i_4]), (((/* implicit */unsigned int) ((-1341101810) / (((/* implicit */int) (signed char)(-127 - 1))))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_26 -= ((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
                        arr_49 [i_4] [i_7] [i_7] [i_10] [i_10] = ((/* implicit */unsigned long long int) min((-8777190230231228125LL), (((/* implicit */long long int) var_11))));
                        arr_50 [(_Bool)1] [i_7] [i_10] [10U] [i_4] = ((/* implicit */unsigned int) (+(((long long int) (!(((/* implicit */_Bool) var_6)))))));
                        var_27 -= ((/* implicit */unsigned int) (+(((unsigned long long int) arr_48 [i_8] [i_10]))));
                        arr_51 [i_7] [i_10] [i_8] [i_8] [i_7] [i_4] = ((/* implicit */unsigned long long int) (~((~((-(-1341101803)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        arr_54 [i_4] [4ULL] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) -4227922669340288094LL)), (7273843750978591058ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        arr_55 [i_4] [i_4] [0ULL] [11LL] [(unsigned short)16] [11LL] [i_12] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) | (11172900322730960555ULL)))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                    {
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)-4683))))))) ? ((+(max((-9223372036854775789LL), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_36 [i_10]))))));
                        arr_60 [i_13] [i_7] [i_7] [(unsigned char)13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((var_14) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned short)33840))))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)138)))) : (max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) (short)32767)))))));
                        arr_61 [i_13] [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                        arr_62 [(_Bool)1] [i_8] [i_8] [15ULL] [i_13] [i_13] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) max(((unsigned char)125), (((/* implicit */unsigned char) (signed char)69))))))), (max((((((/* implicit */_Bool) 7273843750978591058ULL)) ? (((/* implicit */int) arr_13 [i_10])) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((8783985089195216756ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                        var_29 -= ((/* implicit */int) ((long long int) max((((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) < (11172900322730960536ULL))))));
                    }
                }
                var_30 = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)108))))) ? (((var_0) >> (((((/* implicit */int) (unsigned char)61)) - (59))))) : ((~(var_3)))))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_4] [14U]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4])))))) : (var_10)));
                arr_65 [i_7] [i_7] [i_7] [(unsigned short)7] = ((/* implicit */signed char) ((((((/* implicit */int) arr_48 [i_4] [13LL])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)11884)) || (var_14))))));
            }
            var_32 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_59 [i_4])))))), (-1464424290)));
        }
        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            var_33 -= ((/* implicit */unsigned int) var_12);
            var_34 -= ((/* implicit */short) min(((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [9LL] [i_4] [(_Bool)1] [i_4] [i_4]))) <= (var_3)))))), (((/* implicit */int) var_7))));
        }
        for (unsigned int i_16 = 1; i_16 < 16; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                var_35 = ((/* implicit */signed char) 34823027U);
                arr_74 [i_16] [i_16] = ((/* implicit */long long int) var_7);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_18 = 2; i_18 < 18; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_59 [i_4])))) / (11172900322730960536ULL)));
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (short)32737))));
                    arr_80 [i_19] [i_16] [i_16] [i_4] = ((/* implicit */unsigned short) (((+(var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-6571)))));
                }
                arr_81 [i_4] [i_16] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)11884)))))) == (((((/* implicit */_Bool) arr_73 [i_4] [i_16] [i_18] [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_20 = 1; i_20 < 19; i_20 += 2) 
            {
                arr_84 [7U] [i_16] [i_16] [i_20] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(1838155254)))) ? ((~(63LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11884)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -64LL)))))));
                arr_85 [i_4] [i_16] [14ULL] [i_4] = ((/* implicit */int) arr_42 [8LL] [17U] [i_16] [i_16] [18ULL]);
            }
        }
    }
    var_38 = ((/* implicit */_Bool) min((8796093022207LL), (((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)62415)) < (((/* implicit */int) (_Bool)0)))))))));
}
