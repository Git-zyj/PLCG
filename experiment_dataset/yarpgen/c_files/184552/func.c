/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184552
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((((/* implicit */int) (short)21)) - (((/* implicit */int) (short)22)));
        var_12 = ((/* implicit */long long int) (signed char)-63);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) (_Bool)1))));
                var_14 = ((/* implicit */short) ((unsigned char) var_6));
            }
            for (int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)));
                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                var_17 |= ((/* implicit */long long int) var_5);
            }
            var_18 = ((/* implicit */unsigned char) (-(5746025580157715762ULL)));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-105)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (2830068487U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22342)))));
            }
            for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_21 = ((((/* implicit */_Bool) (signed char)-111)) ? (var_2) : (((/* implicit */unsigned int) var_6)));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8321499136LL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)12374))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7))))))));
                }
                for (short i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    var_25 = ((/* implicit */signed char) var_0);
                    var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-72)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_2))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)));
                }
                var_29 = ((/* implicit */unsigned char) ((17340637292808345414ULL) * (((/* implicit */unsigned long long int) var_9))));
                var_30 = ((/* implicit */long long int) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
            for (unsigned char i_10 = 3; i_10 < 15; i_10 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((/* implicit */int) var_4)))))));
                var_32 = (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))));
                var_33 = ((/* implicit */long long int) var_2);
            }
            var_34 = ((/* implicit */signed char) (~(0LL)));
        }
        var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))));
    }
    for (long long int i_11 = 4; i_11 < 8; i_11 += 2) 
    {
        var_36 = ((/* implicit */int) (short)23304);
        var_37 = ((/* implicit */_Bool) (unsigned char)181);
        /* LoopSeq 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_38 = ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) min((((((((/* implicit */int) var_1)) + (2147483647))) << (((var_0) - (843160935U))))), (((/* implicit */int) var_8))))));
            var_39 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 3927101298U)) : (var_10)))) ? ((-(-6367322951527506332LL))) : (-7814804429562658437LL))), (((/* implicit */long long int) (unsigned short)38575))));
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (unsigned short)2016))));
            var_41 -= ((/* implicit */short) var_3);
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_42 &= ((/* implicit */unsigned char) (_Bool)1);
            var_43 = ((/* implicit */short) min((var_43), (var_5)));
            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)96)))))))));
        }
    }
    for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            var_45 -= ((/* implicit */long long int) ((min((((((/* implicit */int) var_5)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) | ((-(((/* implicit */int) (short)-24659))))));
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-15531))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))));
            var_47 += ((/* implicit */signed char) var_9);
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            var_48 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (-2031997677)))));
            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2041)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8069632554485791474ULL)) && (((/* implicit */_Bool) 2961481953U)))))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25235)))))));
            /* LoopSeq 2 */
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) 1156617682))));
                var_51 = ((/* implicit */int) min((var_51), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)-33))))));
            }
            for (unsigned char i_18 = 2; i_18 < 13; i_18 += 4) 
            {
                var_52 += ((/* implicit */int) ((signed char) var_8));
                var_53 = var_2;
                /* LoopSeq 4 */
                for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) 
                {
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (2524415843098323235LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8191)) / (((/* implicit */int) var_1)))))));
                    var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) var_6))));
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 1; i_20 < 13; i_20 += 4) 
                    {
                        var_56 = ((/* implicit */_Bool) 1771473400U);
                        var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -611033591)) && (((/* implicit */_Bool) 4294967295U))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
                        var_59 = ((/* implicit */_Bool) ((var_6) & (((/* implicit */int) (_Bool)1))));
                        var_60 = ((/* implicit */unsigned char) var_6);
                        var_61 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3474647114U)) > (var_10)));
                    }
                    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
                    {
                        var_62 = ((((((/* implicit */_Bool) 1307838160U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-5475)) : (((/* implicit */int) var_5))))));
                        var_63 = (((_Bool)0) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                    }
                }
                for (int i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        var_64 = ((((/* implicit */_Bool) 1256658134162646087ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (16777215U) : (((/* implicit */unsigned int) var_6))));
                        var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((((/* implicit */_Bool) 2031997679)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))));
                        var_67 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (9087961461450106212LL) : (((/* implicit */long long int) -1156617676))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 14; i_25 += 4) 
                    {
                        var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) var_6))));
                        var_69 = ((/* implicit */signed char) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_70 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -132207301)) ? (var_10) : (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) var_1)))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_71 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23088))) % (4138204831905351980ULL)));
                        var_72 = ((/* implicit */unsigned int) var_1);
                        var_73 *= ((/* implicit */signed char) ((short) var_8));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_27 = 2; i_27 < 13; i_27 += 1) 
                    {
                        var_74 = ((/* implicit */unsigned long long int) var_7);
                        var_75 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((int) -1268986770)) : (((/* implicit */int) var_4))));
                        var_76 = ((/* implicit */unsigned int) ((short) (unsigned char)16));
                    }
                    for (short i_28 = 3; i_28 < 12; i_28 += 4) 
                    {
                        var_77 = ((/* implicit */unsigned int) (unsigned char)208);
                        var_78 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)));
                    }
                    for (unsigned char i_29 = 2; i_29 < 13; i_29 += 4) 
                    {
                        var_79 = ((/* implicit */int) ((unsigned char) var_0));
                        var_80 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)0));
                        var_81 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-26712))));
                        var_82 = ((/* implicit */_Bool) (unsigned char)87);
                        var_83 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (unsigned short)1629)) | (((/* implicit */int) (unsigned short)64726)))) : (((/* implicit */int) var_7))));
                    }
                    var_84 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (1004769782U) : (var_0)));
                    var_85 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)127)))) + (2147483647))) >> (((/* implicit */int) var_4))));
                }
                for (int i_30 = 0; i_30 < 14; i_30 += 1) /* same iter space */
                {
                    var_86 |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1876154519)) : (var_10)));
                    /* LoopSeq 4 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_87 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_8)))) > (((((/* implicit */_Bool) 3600102656613453954LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
                        var_88 = ((/* implicit */short) ((((/* implicit */_Bool) (short)17060)) ? (var_9) : (((((/* implicit */_Bool) var_3)) ? (2654952664U) : (var_9)))));
                    }
                    for (short i_32 = 0; i_32 < 14; i_32 += 4) 
                    {
                        var_89 = ((/* implicit */unsigned short) (unsigned char)2);
                        var_90 = ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10));
                        var_91 = ((/* implicit */unsigned int) max((var_91), ((((_Bool)1) ? (4278190081U) : (((/* implicit */unsigned int) 2147483647))))));
                    }
                    for (int i_33 = 0; i_33 < 14; i_33 += 2) 
                    {
                        var_92 = ((/* implicit */_Bool) (-(var_10)));
                        var_93 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) (short)7155)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        var_94 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8369407266287288332LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
                        var_95 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                        var_96 |= var_9;
                    }
                    for (short i_34 = 0; i_34 < 14; i_34 += 1) 
                    {
                        var_97 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) + (var_6))) - (((/* implicit */int) var_7))));
                        var_98 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))));
                        var_99 *= ((/* implicit */signed char) (~(var_10)));
                    }
                    var_100 = ((/* implicit */long long int) var_10);
                    var_101 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (0) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (853983371U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_35 = 0; i_35 < 14; i_35 += 2) 
                    {
                        var_102 = ((/* implicit */short) max((var_102), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)))))));
                        var_103 = ((/* implicit */long long int) ((unsigned long long int) 1047552));
                        var_104 = ((/* implicit */_Bool) min((var_104), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))));
                        var_105 = ((/* implicit */unsigned long long int) (~(var_9)));
                        var_106 = ((/* implicit */_Bool) min((var_106), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned char)186))) ^ (((/* implicit */int) var_5)))))));
                    }
                }
                for (unsigned short i_36 = 0; i_36 < 14; i_36 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_37 = 1; i_37 < 13; i_37 += 2) 
                    {
                        var_107 = ((/* implicit */_Bool) max((var_107), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) 2227598164U)))))));
                        var_108 = ((/* implicit */_Bool) (short)32767);
                        var_109 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) != (var_10))))));
                        var_110 |= ((/* implicit */int) ((_Bool) (unsigned short)65532));
                    }
                    var_111 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))));
                }
            }
        }
        var_112 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)31162)) : (((/* implicit */int) var_8))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-8694576083507866972LL)))));
        var_113 = ((/* implicit */short) ((int) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1623544082U))))));
        var_114 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_9)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1644371328U)) ? (0ULL) : (((/* implicit */unsigned long long int) -3600102656613453965LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1332938332U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))) + (0ULL)))))));
        var_115 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1)))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_38 = 0; i_38 < 12; i_38 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_39 = 0; i_39 < 12; i_39 += 1) 
        {
            var_116 = ((/* implicit */short) max((var_116), (((/* implicit */short) -7444452220317377491LL))));
            var_117 = ((/* implicit */short) (((-(var_10))) << (((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_8)))))) - (161)))));
            var_118 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_3)) : (max(((~(((/* implicit */int) (short)0)))), (var_6)))));
        }
        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
        {
            var_119 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)0)))))));
            var_120 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30266))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-107)), (var_4))))))), (((/* implicit */unsigned int) (~(((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (12538))) - (14))))))))));
            var_121 = ((/* implicit */_Bool) var_10);
        }
        for (unsigned char i_41 = 2; i_41 < 10; i_41 += 2) 
        {
            var_122 = ((((/* implicit */_Bool) min((((unsigned int) var_0)), (((/* implicit */unsigned int) var_7))))) || (((/* implicit */_Bool) -858529455)));
            var_123 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? ((-(((/* implicit */int) ((_Bool) var_10))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (((short) (short)-19633)))))));
        }
        for (int i_42 = 1; i_42 < 11; i_42 += 4) 
        {
            var_124 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18939))))))))));
            var_125 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (3127453490U)))))));
            var_126 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)33))))) ? (((/* implicit */int) (unsigned short)30188)) : (((/* implicit */int) var_3)))));
            /* LoopSeq 3 */
            for (short i_43 = 0; i_43 < 12; i_43 += 4) /* same iter space */
            {
                var_127 = ((/* implicit */signed char) min((var_127), (((/* implicit */signed char) var_0))));
                var_128 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) -4435721565234948459LL))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8)))) : (((/* implicit */int) ((_Bool) (signed char)-32)))));
            }
            for (short i_44 = 0; i_44 < 12; i_44 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_45 = 2; i_45 < 10; i_45 += 4) 
                {
                    var_129 = ((/* implicit */unsigned long long int) var_4);
                    var_130 = ((/* implicit */short) ((int) (-(min((4013865791U), (((/* implicit */unsigned int) var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_46 = 0; i_46 < 12; i_46 += 1) 
                    {
                        var_131 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))) : (var_10))) / (18446744073709551615ULL)));
                        var_132 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 0LL)) ? (var_10) : (((/* implicit */unsigned long long int) var_2))))));
                    }
                    for (unsigned char i_47 = 0; i_47 < 12; i_47 += 4) 
                    {
                        var_133 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)32075)))))));
                        var_134 = ((/* implicit */unsigned char) max((var_134), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), ((short)-7641)))) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33460)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_9)) ? (2083947545U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) -4042985561199718710LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                        var_135 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned short)62989))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 784336261U)))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (18446744073709551615ULL)))));
                    }
                }
                var_136 = ((/* implicit */unsigned short) max(((~(3ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_5)))));
                var_137 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33461))) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            }
            for (short i_48 = 0; i_48 < 12; i_48 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_49 = 0; i_49 < 12; i_49 += 2) 
                {
                    var_138 -= ((/* implicit */long long int) var_9);
                    var_139 = ((/* implicit */_Bool) (+((-(15ULL)))));
                }
                for (short i_50 = 0; i_50 < 12; i_50 += 1) 
                {
                    var_140 = ((/* implicit */unsigned short) max((var_140), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) 1482159707))))), ((~(3117552927349659123ULL))))))));
                    var_141 = ((/* implicit */int) ((signed char) (short)0));
                }
                var_142 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) var_7))), (((unsigned int) (signed char)81))));
            }
        }
        var_143 *= ((/* implicit */unsigned long long int) (_Bool)0);
        var_144 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)36)))) : (((((/* implicit */_Bool) (unsigned short)65440)) ? (max((16716302071613889371ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) 60295092))))));
    }
    var_145 = ((/* implicit */long long int) min((var_145), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
}
