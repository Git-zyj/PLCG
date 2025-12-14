/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124996
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    arr_6 [i_1] [(unsigned char)4] [(unsigned char)2] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) ((signed char) (signed char)117))), (max((((/* implicit */long long int) (signed char)117)), (1659604697873892127LL))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned short) 802473409))) : (((/* implicit */int) (signed char)-109))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) (signed char)-105))), (min((987690958U), (((/* implicit */unsigned int) (_Bool)1))))))) : (max((max((-1659604697873892135LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (signed char)117))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)25292)), (1659604697873892113LL))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (-1659604697873892127LL))))) : (max((-1659604697873892127LL), (((long long int) (unsigned char)248))))));
                        arr_10 [i_1] = ((/* implicit */unsigned long long int) min((min((max((-6917064566324916646LL), (1659604697873892127LL))), (((/* implicit */long long int) ((short) 2U))))), (((/* implicit */long long int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7185)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (1720897352754374916LL)))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)8841))) : ((((_Bool)0) ? (1659604697873892127LL) : (((/* implicit */long long int) -1015766534))))));
                            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)123);
                            arr_17 [i_1] [i_1] [i_1] [i_4] [4LL] = ((/* implicit */unsigned char) (_Bool)1);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) ((_Bool) 1720897352754374916LL))) : (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (_Bool)0)) : (-887374605)))));
                            var_19 = ((/* implicit */short) 6228417432714113423LL);
                        }
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (-1659604697873892127LL)))) ? (((/* implicit */int) ((_Bool) 1659604697873892122LL))) : (((((/* implicit */_Bool) -6228417432714113409LL)) ? (((/* implicit */int) (short)-19016)) : (((/* implicit */int) (unsigned char)15))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) -4846327727198531667LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))));
                        arr_19 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28986)) ? (((((/* implicit */_Bool) (unsigned short)58351)) ? (2888861751222935410LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)64))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 3138920811558446473LL))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (2405442134307823389LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) 1397771176U)) : (-6849574785827689044LL))) : (6192795626675248778LL)));
                            arr_22 [i_0] [(short)7] [i_2 + 1] [i_4] [9U] [i_6] [i_1] = ((/* implicit */int) 6228417432714113435LL);
                            arr_23 [i_1] [i_1] [i_4] [13U] [i_6 + 3] [i_6] [13U] = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((long long int) ((signed char) (unsigned short)21106))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_0] [(signed char)0] [i_2] [i_2] [i_1] = ((/* implicit */int) 7198058409701197969ULL);
                            arr_28 [i_0] [i_0] [i_0] [i_2] [i_4 - 2] [i_1] = ((/* implicit */signed char) ((unsigned int) (-2147483647 - 1)));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65249)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7185))) : (-6228417432714113424LL))))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (signed char)69))));
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6849574785827689043LL)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) 4095237535U)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17501858147937960478ULL)) ? (-485873281) : (((/* implicit */int) (unsigned short)313))))));
                        }
                    }
                    var_27 -= ((/* implicit */unsigned char) (unsigned short)58350);
                }
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_28 += ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned short)45667)) ? (((/* implicit */int) (unsigned char)174)) : (485873280))), (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))))), (((/* implicit */int) (unsigned char)228))));
                    arr_34 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (signed char)52));
                }
                /* vectorizable */
                for (short i_10 = 1; i_10 < 12; i_10 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) 4590057509531590169LL);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 6849574785827689040LL))) ? ((((_Bool)1) ? (1913359796) : (((/* implicit */int) (signed char)-65)))) : (((int) -887374611))));
                    var_31 &= ((/* implicit */unsigned int) 9652162977698223207ULL);
                    var_32 = ((/* implicit */unsigned char) (((_Bool)1) ? (4095237527U) : (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) -164626178)) : (199729761U)))));
                    arr_39 [8U] [i_1] [i_1] [i_0] = 4095237527U;
                }
                arr_40 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        var_33 ^= ((/* implicit */unsigned char) (_Bool)1);
        var_34 = ((((/* implicit */_Bool) -1913359796)) ? (((unsigned long long int) (short)9462)) : (((/* implicit */unsigned long long int) 4095237535U)));
        /* LoopSeq 4 */
        for (unsigned char i_12 = 3; i_12 < 14; i_12 += 4) /* same iter space */
        {
            arr_47 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)7349))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) 199729788U)) ? (((/* implicit */int) (unsigned short)11420)) : (((/* implicit */int) (_Bool)1))))));
            var_35 -= ((unsigned short) ((((/* implicit */_Bool) 3304953854U)) ? (-807551831) : (((/* implicit */int) (_Bool)1))));
            var_36 = ((/* implicit */unsigned char) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((unsigned char) -1154683434)))));
        }
        for (unsigned char i_13 = 3; i_13 < 14; i_13 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */_Bool) (short)-3635);
            var_38 *= ((/* implicit */short) 3938050841U);
            arr_50 [i_11] [i_13] [i_11] = ((/* implicit */int) 8977237610973722439LL);
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            arr_64 [i_11] [i_11] [i_15] [i_11] [i_14] = ((/* implicit */unsigned int) -1154683417);
                            var_39 = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 15633780534510745620ULL)))) : (((long long int) 199729768U)));
                            arr_65 [i_14] [i_14] [i_14] [i_16] [i_15] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned short)19784)) ? (7874230667221701516LL) : (((/* implicit */long long int) 199729768U)))));
                        }
                        arr_66 [i_11] [i_11] [i_11] [i_14] [(signed char)11] [i_11] = ((/* implicit */long long int) ((unsigned long long int) 7851475399202766773ULL));
                        var_40 ^= ((/* implicit */signed char) 4279834427U);
                        arr_67 [i_14] [i_11] [i_14] = ((/* implicit */unsigned short) 6841504209629981520ULL);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) 4095237535U)) ? (((((/* implicit */_Bool) (unsigned short)45744)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3409063103U)) ? (((/* implicit */int) (unsigned short)19792)) : (((/* implicit */int) (short)3635)))))));
                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (signed char)-81))));
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((unsigned int) (unsigned short)62448)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4095237535U)) ? (((/* implicit */int) (short)-20858)) : (((/* implicit */int) (signed char)65))))))))));
                    arr_72 [i_14] [i_18] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)19791))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)45744)))) : (((unsigned int) (short)-11679))));
                    arr_73 [i_14] [i_14] [(unsigned short)3] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)19791)))) : (((((/* implicit */_Bool) 1861366606U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4380))) : (2433600689U)))));
                    var_44 = -1154683417;
                }
                /* LoopSeq 1 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    var_45 = ((/* implicit */long long int) ((_Bool) (unsigned short)60537));
                    arr_76 [i_11] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((signed char) ((unsigned int) (signed char)-101)));
                    arr_77 [i_14] [(short)10] [i_14] [i_14] [i_14] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-101))) ? (((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) (unsigned short)58186)) : (((/* implicit */int) (short)-32522)))) : (((/* implicit */int) (short)-4380))));
                }
            }
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59545))) : (((((/* implicit */_Bool) 7839591812357578982LL)) ? (7874230667221701536LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7874230667221701516LL)) ? (((/* implicit */int) (short)-19743)) : (((/* implicit */int) (unsigned short)45735))))) ? (((/* implicit */int) (unsigned char)65)) : (((int) (unsigned short)58186))));
            var_48 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19754)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)255)))) : (((((/* implicit */_Bool) (unsigned short)19792)) ? (-3852417273163822974LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45753)))))));
            var_49 ^= ((/* implicit */unsigned long long int) ((short) (signed char)62));
        }
        var_50 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_51 = ((/* implicit */unsigned char) (_Bool)1);
    var_52 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7874230667221701537LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (17293969135241511599ULL)))) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)27197))))))));
}
