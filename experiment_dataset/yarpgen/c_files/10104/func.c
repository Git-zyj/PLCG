/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10104
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1570806599065868092LL)))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)221))))) ? (min((((/* implicit */unsigned long long int) var_0)), (2147483647ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)14747))))) : ((~(var_0))))), (((/* implicit */long long int) 2147483647)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_19), ((~(max((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))), (((-581958313) - (((/* implicit */int) (_Bool)1))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(var_4)));
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) var_9);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((((/* implicit */int) (unsigned char)255)) << (((min((min((3911840512948955994LL), (((/* implicit */long long int) (short)-939)))), (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) (_Bool)1))))))) + (961LL))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (+(max((var_2), (((/* implicit */unsigned long long int) -1592125468))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-21)), ((unsigned char)206))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)14744)), (78973667)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)33)) || (((/* implicit */_Bool) (signed char)-124))))) : (min((895995231), (((/* implicit */int) (unsigned short)50772)))))) : (((/* implicit */int) var_9))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36924)) ? (((/* implicit */int) (short)525)) : (((/* implicit */int) (signed char)121))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-18789)) : (((/* implicit */int) (unsigned short)16234)))) : (((/* implicit */int) ((872324889) != (((/* implicit */int) (unsigned short)13370)))))));
            }
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_24 = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((1866656997349897959LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                /* LoopSeq 4 */
                for (unsigned short i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    arr_20 [i_0] [i_1 - 3] [i_5] [i_5] [i_0] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)59171))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_23 [i_0] [(_Bool)1] [i_6 + 1] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_9)) : ((~(2147483647))))) : (((/* implicit */int) (((+(((/* implicit */int) (signed char)64)))) == (((/* implicit */int) (_Bool)1)))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 895995231)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)10383)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (max((((/* implicit */long long int) -175918755)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21200)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2814342904U)));
                        arr_27 [1] [i_1] [i_1 + 1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(-734584888)));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) (unsigned short)44335);
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21938))) : (-7154200309752405858LL))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21921))) : (18446744073709551615ULL)))) ? (-941905080) : (((/* implicit */int) (unsigned short)60951))));
                        var_29 += ((/* implicit */unsigned long long int) (~(1842003104U)));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) -1865228392))));
                    }
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)81)))), (((/* implicit */int) max((var_3), (var_10))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)0)), (var_6)))), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20497)) << (((((/* implicit */int) (short)2047)) - (2044)))))) ? (((/* implicit */int) max(((short)16384), (((/* implicit */short) (_Bool)1))))) : ((-(((/* implicit */int) (signed char)15)))))))));
                }
                for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65532)) ? (var_7) : (((/* implicit */int) var_3)))) << (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59910))) != (var_13)))) - (1)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2244380702U) : (((/* implicit */unsigned int) 796687446))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-13721))))) : (((((/* implicit */_Bool) (unsigned short)61658)) ? (1193120656U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) var_11))))) ? (347978744U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-118))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61627)) ? (((/* implicit */int) (unsigned char)132)) : (-1860668771))))));
                        var_34 = ((/* implicit */signed char) (_Bool)1);
                        var_35 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (316302561U)));
                        var_36 = ((/* implicit */unsigned int) -3911840512948955984LL);
                        arr_34 [i_0] [i_5] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-64), (((/* implicit */signed char) (_Bool)1)))))) % (var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (4220176771U))) / (((/* implicit */unsigned int) 606371249)))))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 207980711)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) + (4684597924882515411LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) var_8)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)241)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) 1842003104U)) ? (((/* implicit */int) max(((short)32766), (((/* implicit */short) (_Bool)1))))) : ((-(((/* implicit */int) (short)28546))))))));
                    }
                }
                for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (short)25504)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) < (9805818851211637463ULL))) ? (3776142067U) : (2452964191U)))) : (((((((/* implicit */int) var_3)) < (((/* implicit */int) (unsigned short)35990)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)16315))) : (7191669614836316153LL)))));
                    var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)92)) ? (((((((/* implicit */int) (unsigned short)63763)) / (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (short)-16926)))) : (((/* implicit */int) ((((/* implicit */int) max(((short)16702), (((/* implicit */short) var_3))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63763)))))))));
                }
                for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    var_41 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) > (1721000656058903318LL))) ? (((/* implicit */int) var_14)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_15))))))) >= (((((/* implicit */_Bool) (unsigned short)64420)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (77138417U)))));
                    var_42 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)32755)) == ((~(((/* implicit */int) var_4)))))) ? ((~(((((/* implicit */_Bool) (signed char)80)) ? (4179913013U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16519))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    arr_44 [i_0] [i_5] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((273609230) % (276593697)))), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)84))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (7191669614836316166LL))))), (((/* implicit */long long int) (-(var_5)))))))));
                }
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31838))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))), (((((/* implicit */_Bool) ((9223372036854775781LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))))) ? ((-(323150128U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-6514436290512984015LL))))))))))));
            }
        }
        for (short i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) var_2))));
            arr_48 [i_0] [i_16] = ((/* implicit */unsigned short) (~(((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-32216)))))));
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1773)) ? (105942650U) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned short)1796)))))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_1)));
            var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-1)), (var_7))))));
        }
        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38527)) ? (min((536739840), (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_14))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 654318338873066179LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_12))))) : (((15556780255392425801ULL) >> (((((/* implicit */int) (unsigned short)47814)) - (47800)))))))));
            var_49 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-32764)))))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) /* same iter space */
        {
            var_50 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)27163)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2273454943U)));
            var_51 = ((/* implicit */_Bool) var_5);
        }
        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) max(((unsigned short)46470), (((/* implicit */unsigned short) (short)-3459)))))));
        var_53 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) < (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (_Bool)0))))))) & (min((2817031488U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)14723)))))))));
    }
    for (unsigned char i_19 = 1; i_19 < 7; i_19 += 3) 
    {
        arr_56 [i_19] [i_19] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((_Bool)1) ? (var_8) : (var_7)))), (((2159591716U) | (899701229U)))));
        var_54 += (!((!(((/* implicit */_Bool) ((1929383688) / (((/* implicit */int) (signed char)127))))))));
        var_55 = ((/* implicit */long long int) (signed char)-59);
    }
    for (int i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            for (long long int i_22 = 0; i_22 < 16; i_22 += 1) 
            {
                {
                    var_57 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26262)) ? (935605299) : (((/* implicit */int) (signed char)-119))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)14408), (((/* implicit */unsigned short) (short)-13204)))))))) : (max((1911392153U), (min((3395266066U), (((/* implicit */unsigned int) var_11))))))));
                    var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1819130706)))) ? (((((/* implicit */_Bool) 3297117064U)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) (unsigned char)13))))) : (((((/* implicit */_Bool) -1819130691)) ? (var_0) : (((/* implicit */long long int) 2147483647))))));
                    var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775806LL))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_23 = 2; i_23 < 15; i_23 += 1) 
        {
            for (int i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                {
                    var_60 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-27459)) : (((/* implicit */int) var_9))))) - (-1227930322883042794LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (max((((/* implicit */long long int) (unsigned short)27303)), (var_0))))))) : (((523337707U) << (((((3771629588U) - (899701229U))) - (2871928328U)))))));
                    var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((17095990197701004514ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))))))) ? (((/* implicit */long long int) max((4294967295U), ((~(523337733U)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (1550470458)))) ? (max((-7350005737261290000LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) max((-169334335), (((/* implicit */int) (short)-32411)))))))));
                }
            } 
        } 
    }
}
