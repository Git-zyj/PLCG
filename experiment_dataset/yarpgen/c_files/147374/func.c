/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147374
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)219))));
        var_13 = ((_Bool) ((((/* implicit */int) ((2182605573U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58)))))) != (((/* implicit */int) (signed char)-76))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2112361728U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) : (arr_2 [i_1])))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) (unsigned short)55371)))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_12 [i_1] [i_2 - 3] [i_2 - 3] [i_3] [i_3] [i_3] = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (2196875771904LL)))) || (((/* implicit */_Bool) min((2112361721U), (2182605590U))))))), (min((arr_7 [i_1] [i_3]), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-2913)) <= (((/* implicit */int) (signed char)-5))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) 634344105)) : (2182605576U))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) ^ (2182605578U))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) ((((arr_1 [i_2 - 3] [i_3]) % (4294967295U))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 3] [i_2 + 1]))) ^ (713245398U)))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned long long int) ((long long int) 2182605567U))))));
                            var_17 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) 7491119232101538190ULL)) ? (4837586704823659746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1500346888U))))))));
                            var_18 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2112361737U)) || (((/* implicit */_Bool) 2065333104U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)107))))) : (((/* implicit */int) min(((short)-2913), (((/* implicit */short) (signed char)-23)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)169)), (11129451919790586450ULL)))) ? (max((7317292153918965159ULL), (3199228616759714139ULL))) : (370570563218757101ULL)))));
                            var_19 &= ((/* implicit */signed char) min((2505550180684497081ULL), (((/* implicit */unsigned long long int) (unsigned short)6030))));
                        }
                    }
                    for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-2930)))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) + (771874515U))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_3] [i_6 + 1] [i_7])) + (((/* implicit */int) (short)2952)))))))) : ((~(min((-1LL), (((/* implicit */long long int) (short)2912)))))))))));
                            var_21 = ((/* implicit */_Bool) 7108188198469056270ULL);
                            var_22 -= ((/* implicit */unsigned int) ((int) max((1050331445329287175LL), (((/* implicit */long long int) (unsigned short)60685)))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_21 [i_1] [i_1] [i_6] [i_7] = ((/* implicit */long long int) ((((12273477887697349437ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))))) ? (((/* implicit */int) max((((3199228616759714139ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))), (((15247515456949837462ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31705)))))))) : (((/* implicit */int) ((unsigned short) arr_7 [i_2 - 2] [i_2 - 2])))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) (~(713245399U)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) & (11707372584038266962ULL)))))));
                            var_25 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) -2147483633)), (11667536358397237123ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) << (((6739371489671284680ULL) - (6739371489671284659ULL)))))) ? (((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_6 + 2])) : (((((/* implicit */int) (short)14336)) * (((/* implicit */int) (signed char)47)))))))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) + ((-(((/* implicit */int) (short)2952))))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 &= ((/* implicit */short) (-(((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_6 + 1])) >> (((((/* implicit */int) ((unsigned char) (signed char)-72))) - (154)))))));
                            var_28 = ((/* implicit */int) ((unsigned short) 3742013086U));
                            var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) (_Bool)1)));
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)43009))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */short) (unsigned short)19314);
                            var_32 = ((/* implicit */unsigned long long int) (signed char)-72);
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30258))) : (5156241375295268729ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) (unsigned short)53475))))) : (((/* implicit */int) arr_30 [i_1] [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_10])))) << (((min(((+(((/* implicit */int) (signed char)-72)))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-6)))))) + (76))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)255));
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_35 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_3]);
                            var_35 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11742435705498892644ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_2 - 2] [i_3] [i_6 + 3] [i_3]))) : (2747912812156029823ULL))))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_36 &= var_9;
                            var_37 *= ((/* implicit */unsigned char) 18446744073709551602ULL);
                            arr_38 [i_1] [i_2 + 1] [i_3] [i_6 + 1] [i_12] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_12])) ? (3592229086U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8076))))));
                        }
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 15698831261553521793ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (2052307874U))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (((_Bool)0) ? (16210565058587597910ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24079))))))))));
                        arr_41 [i_3] [i_3] [i_13] [i_3] = ((/* implicit */int) ((unsigned int) (short)1542));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            arr_44 [i_1] [i_2 - 3] [i_3] [i_13] [i_2 - 3] = ((/* implicit */signed char) ((((((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (short)-28450)))) + (((((/* implicit */int) (short)-7185)) + (((/* implicit */int) (unsigned char)92)))))) - (((/* implicit */int) (unsigned short)39183))));
                            arr_45 [i_1] [i_1] [i_2 - 1] [i_1] [i_1] [i_13] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) (((_Bool)1) ? (7628623192223282542ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6379))))))), (min((max((((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_3])), (-1))), (((/* implicit */int) var_4))))));
                            var_39 = ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (((unsigned int) (_Bool)1)))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((signed char)59), ((signed char)78)))), (((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) : (18446744073709551610ULL)))))) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) ((_Bool) arr_31 [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_3])))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 1) 
                        {
                            var_41 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (signed char)-78))))) ? ((-(((/* implicit */int) (unsigned short)55310)))) : (((/* implicit */int) ((((4285016787138619917LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-12655))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 1104982279055245270LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-106))))))))));
                            var_42 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12))))) > ((~(((/* implicit */int) (short)10363))))))) == (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)144)), ((unsigned short)53474))))));
                            var_43 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-30934), (((/* implicit */short) (signed char)-76))))) ? (((/* implicit */int) ((313241875) == (((/* implicit */int) (unsigned short)53475))))) : ((-(((/* implicit */int) (unsigned short)63488))))));
                            var_44 ^= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)(-32767 - 1)))))) == (0ULL)))), (((((/* implicit */int) var_4)) | (((699715431) >> (((((/* implicit */int) (unsigned short)39595)) - (39568)))))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_33 [i_2] [i_2] [i_3] [i_2] [i_2 + 1] [i_3]))) ? (min((10818120881486269070ULL), (((/* implicit */unsigned long long int) arr_33 [i_1] [i_2] [i_13] [i_2] [i_2 + 1] [i_3])))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)53478)))));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) 18446744073709551615ULL))));
                        }
                        var_47 = ((/* implicit */unsigned long long int) (unsigned short)2042);
                    }
                    var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((signed char) ((int) min((7628623192223282532ULL), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])))))))));
                }
            } 
        } 
    }
    for (long long int i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                {
                    arr_60 [i_19] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 5987454801496235067ULL))))) == (((/* implicit */int) ((unsigned char) (unsigned short)12085)))));
                    arr_61 [i_17] [i_17] [i_19] [i_19] = (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) % (arr_52 [i_17] [i_17] [i_19]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            for (int i_21 = 0; i_21 < 20; i_21 += 3) 
            {
                {
                    var_49 = ((/* implicit */signed char) (_Bool)1);
                    var_50 = ((/* implicit */unsigned long long int) (unsigned short)20038);
                }
            } 
        } 
        var_51 = ((/* implicit */int) ((long long int) ((18446744073709551609ULL) >= (7628623192223282538ULL))));
        var_52 = ((/* implicit */signed char) ((((4642023712592277530ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2796)))));
        var_53 = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_1 [i_17] [14ULL]) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)53450)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20096))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_6))) / (((/* implicit */int) var_4)))))));
    }
    var_54 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((17949715310247825689ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53479)))))) ? (4206828513935313924ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45614)) + (((/* implicit */int) (unsigned char)234))))))) : (min((((3110974411970395591ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)131)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 2) 
    {
        var_55 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (signed char)71)), (-1556535062)))));
        arr_68 [i_22] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)10860))));
        var_56 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((10818120881486269074ULL) - (10818120881486269066ULL)))))) ? (((/* implicit */int) arr_53 [i_22] [i_22 + 3] [i_22 - 1] [i_22 - 1])) : (((/* implicit */int) ((unsigned short) var_7)))))));
        var_57 -= ((/* implicit */long long int) ((2270787899U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53475)))));
    }
}
