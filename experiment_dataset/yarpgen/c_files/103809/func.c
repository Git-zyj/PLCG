/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103809
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) 800047540U);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [15U] |= ((/* implicit */int) min((800047540U), (800047542U)));
                        arr_12 [i_0] [i_1] [i_2] [18LL] |= ((/* implicit */unsigned int) var_1);
                        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16868)) % (((/* implicit */int) ((signed char) (signed char)85)))))), (11683424044318609480ULL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_19 [i_2] [i_1 + 1] [i_2] [i_4] [i_0] [i_4] [i_4] = var_16;
                            arr_20 [9] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */int) ((((/* implicit */_Bool) 800047548U)) || (((/* implicit */_Bool) (unsigned short)1894))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) 1122229292)) <= (3494919756U)))));
                        }
                        for (int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3494919755U)) && (((/* implicit */_Bool) (((_Bool)1) ? (-1122229292) : (-1122229287))))));
                            arr_25 [i_0] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */_Bool) (((((_Bool)0) ? (69756290) : (((/* implicit */int) (short)-26421)))) / (((/* implicit */int) (unsigned char)244))));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) (short)8232);
                            var_21 |= ((/* implicit */unsigned short) ((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-12023))))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_22 |= ((/* implicit */signed char) var_11);
                        }
                        arr_30 [(unsigned short)0] [i_1 + 1] = ((/* implicit */unsigned int) ((signed char) var_13));
                        var_23 = ((/* implicit */unsigned short) -1122229284);
                        arr_31 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) 8890684737006038641LL))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_36 [i_0] [(unsigned short)0] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned short) (short)-27261))) ? (min((((/* implicit */int) (short)-27255)), (0))) : (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (unsigned short)39581)) : (((/* implicit */int) (unsigned short)54796)))))) * (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */unsigned short) max((0), (801163188)));
                        var_25 = var_17;
                    }
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((signed char) min((((/* implicit */int) (short)8872)), (2)))), (((/* implicit */signed char) ((((((/* implicit */_Bool) 1919905748)) ? (var_10) : (((/* implicit */unsigned long long int) 607436666)))) >= (((/* implicit */unsigned long long int) min((-1122229291), (((/* implicit */int) var_4)))))))))))));
                    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1122229287)) && (((/* implicit */_Bool) 140235897U)))))));
                }
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) (-2147483647 - 1))), ((-9223372036854775807LL - 1LL))))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (short)-12023))))), (((long long int) (short)26420)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)58635))))));
                    var_29 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((2147483643), (((/* implicit */int) (unsigned short)6913))))), (((((/* implicit */_Bool) 12049615747062205212ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4818355498284403208ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0))))));
                    var_30 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & (935338336233564074LL))), (((/* implicit */long long int) 3574219774U))));
                    arr_39 [i_9] [i_1] [i_0] [i_0] |= ((/* implicit */_Bool) var_11);
                    arr_40 [i_0] [i_9] = ((/* implicit */short) ((int) max((max((-6711123764276020302LL), (((/* implicit */long long int) (unsigned short)46906)))), (var_12))));
                }
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-4389355230451133872LL))) * (((/* implicit */long long int) ((unsigned int) var_2)))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (unsigned short)34751)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        arr_45 [i_10] = ((/* implicit */short) min((((/* implicit */int) ((max((8838836711292876449ULL), (((/* implicit */unsigned long long int) var_9)))) == (max((((/* implicit */unsigned long long int) var_15)), (4191014952540660762ULL)))))), (min((((/* implicit */int) ((((/* implicit */int) var_8)) == (-2147483642)))), (min((((/* implicit */int) (unsigned short)10)), (var_1)))))));
        arr_46 [2LL] = ((/* implicit */int) ((((/* implicit */int) min((min(((unsigned short)30784), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) var_9))))) > ((-(((/* implicit */int) (_Bool)1))))));
        arr_47 [i_10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)0)))) + (((((/* implicit */int) var_4)) & (var_1)))))), (max((max((4191014952540660778ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) var_7))))));
    }
    /* vectorizable */
    for (long long int i_11 = 1; i_11 < 15; i_11 += 1) /* same iter space */
    {
        arr_51 [i_11 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2063775636)) && (((/* implicit */_Bool) ((unsigned int) -828287688004526205LL)))));
        arr_52 [i_11] [i_11 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)-8134))) | (((/* implicit */int) var_14))));
        /* LoopNest 3 */
        for (unsigned int i_12 = 2; i_12 < 14; i_12 += 4) 
        {
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    {
                        var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)106)) && (((/* implicit */_Bool) 18446744073709551606ULL)))) || (((((/* implicit */_Bool) (short)-32755)) || (((/* implicit */_Bool) -2147483643))))));
                        var_33 = ((/* implicit */signed char) ((((long long int) (unsigned short)20354)) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) & (4294967286U))))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */_Bool) (signed char)125);
    }
    for (long long int i_15 = 1; i_15 < 15; i_15 += 1) /* same iter space */
    {
        var_35 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7280))) + (17950240462273117520ULL)))));
        var_36 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46578))) : (1951480876773337276ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)44434), (var_6))))))))) <= (13573103872781758452ULL));
        arr_66 [i_15] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) << (((-289451277) + (289451289)))))));
    }
}
