/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142832
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_13 += ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_10), ((unsigned char)202))))) : (var_7));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) var_2);
                var_15 = ((/* implicit */unsigned int) 2147483647);
                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)6)), (var_0)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)6)) >> (((var_1) - (108871246)))))))) >> (((((/* implicit */int) (unsigned char)179)) >> (((((/* implicit */int) var_2)) - (43678)))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned long long int) -1995125278))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_7) == (((/* implicit */long long int) 1419385227))))) * (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
            {
                arr_11 [i_3] [i_0] [i_0] = ((/* implicit */short) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                var_18 += ((/* implicit */long long int) (((-(var_1))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)77))))));
                var_19 = ((/* implicit */_Bool) var_4);
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((4U) << (((((/* implicit */int) var_10)) - (172)))));
                    var_21 = 1364572637U;
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_6));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) | (var_1)));
                        var_23 = ((/* implicit */unsigned long long int) var_5);
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((var_7) << (((((/* implicit */int) (unsigned short)20883)) - (20882))))) % (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    var_25 = (!(((/* implicit */_Bool) (unsigned short)4095)));
                }
                for (unsigned short i_6 = 4; i_6 < 17; i_6 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) var_11);
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((var_6) >= (((/* implicit */unsigned long long int) var_1)))))));
                }
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_9) ^ (((/* implicit */unsigned long long int) 4022534698U))));
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
            {
                var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967273U)) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
                var_28 = ((/* implicit */int) (+(2532875023U)));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    arr_29 [i_0] [13ULL] [i_8] [i_8] [(unsigned short)1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_4)))));
                    var_29 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (var_12)))))));
                }
                var_30 += ((/* implicit */unsigned int) (+(var_7)));
            }
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            arr_32 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_12)));
            arr_33 [i_0] [16U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 272432580U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (2979566679722949407LL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                arr_37 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5001)) >= (((/* implicit */int) (unsigned char)245))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned char)207)) - (205)))));
            }
            for (short i_12 = 1; i_12 < 15; i_12 += 4) 
            {
                var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-2147483647 - 1))) - (1155525289U)));
                /* LoopSeq 2 */
                for (short i_13 = 2; i_13 < 17; i_13 += 2) 
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */unsigned long long int) 2147483647)) : (7985780856854671410ULL)));
                    arr_46 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5001)) ? (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 4; i_14 < 17; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) var_2);
                        arr_49 [14U] [i_0] [i_0] [i_0] [i_0] = (-(((/* implicit */int) var_11)));
                        arr_50 [i_0] [i_0] [i_10] [i_0] [i_12] [i_0] [i_14 - 4] = ((/* implicit */short) var_11);
                    }
                    for (long long int i_15 = 1; i_15 < 14; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */short) var_7);
                        var_36 += ((/* implicit */unsigned short) ((((272432598U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? ((-(1860493704U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) <= (var_9)))))));
                        arr_53 [i_0] [i_0] [i_13 - 1] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (var_7)));
                        var_37 += ((/* implicit */short) ((5081249900506897563ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84)))));
                    }
                    for (int i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_38 = ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_6))));
                        var_39 = ((/* implicit */long long int) ((var_9) << (((var_9) - (11197645714687609324ULL)))));
                        var_40 = ((((/* implicit */_Bool) var_11)) ? (4022534672U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))));
                    }
                    var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)9747))));
                }
                for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 2) 
                {
                    arr_59 [i_0] [i_0] [i_0 + 1] [(_Bool)1] = ((/* implicit */int) (short)32759);
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)63813)) : (var_1)));
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21023)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_6)));
                    arr_60 [i_0] [i_12] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned char)90))));
                    arr_61 [i_0] = ((/* implicit */unsigned long long int) var_2);
                }
                arr_62 [i_0] [i_0] [16ULL] [11] = ((/* implicit */signed char) ((735003427U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5212)))));
                var_44 = ((/* implicit */unsigned char) var_9);
            }
        }
        /* vectorizable */
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
        {
            var_45 = ((/* implicit */int) var_3);
            var_46 = ((((/* implicit */_Bool) ((var_5) ? (4022534672U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5208)))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            arr_65 [i_0] = ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) 1479289543U)) ? (((/* implicit */int) (unsigned char)202)) : (0))));
            var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_10))));
        }
    }
    var_48 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((min((1901551121064680718ULL), (((/* implicit */unsigned long long int) (unsigned char)208)))) >> (((/* implicit */int) (_Bool)1))))));
}
