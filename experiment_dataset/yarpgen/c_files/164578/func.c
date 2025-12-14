/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164578
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
    var_14 = ((/* implicit */unsigned char) max(((~(max((18446744073709551590ULL), (9168903405942640240ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    var_15 = ((/* implicit */_Bool) (+(0U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((19ULL) / (max((((/* implicit */unsigned long long int) (signed char)127)), (arr_4 [i_0] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0] [20ULL] [i_2]) < (((/* implicit */unsigned long long int) -4053085362923801826LL))))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2219246996U)) ^ (15994644961238661856ULL)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) 1998965219)) : (arr_4 [i_0] [i_0] [i_2 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (3533182698U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32754)))))) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) : (min((29ULL), (((/* implicit */unsigned long long int) (short)32767))))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 17469005600862295246ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) (short)32767)))))) : (((((/* implicit */_Bool) 14537678725448587468ULL)) ? (18446744073709551575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23545)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) : (max((arr_1 [i_1]), (((/* implicit */unsigned int) 0))))));
                    arr_9 [i_2] [i_2] [14ULL] = ((/* implicit */signed char) max((((557154248418941971ULL) / (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((arr_4 [i_2 + 3] [i_2 + 3] [i_2 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22693))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)202)) : (-782881967)))) ? (((((/* implicit */_Bool) 1260757463)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) : (arr_4 [i_3] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)56597))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_3] [i_4 - 1] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -808265672)) ? (1669992950) : (((/* implicit */int) (short)-11409))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (761784568U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-24136)) + (2147483647))) << (((arr_1 [i_0]) - (2168225890U))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) (short)-31601))) + (((((/* implicit */_Bool) (unsigned char)247)) ? (-4053085362923801826LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179)))))));
                            arr_17 [i_0] [i_4] [i_1] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_5] [i_5 - 1] [i_4 - 1])) ? (((((((/* implicit */int) arr_5 [19U] [1U] [i_5 - 1])) + (2147483647))) >> (((((/* implicit */int) (short)24313)) - (24311))))) : (((arr_13 [(unsigned char)7] [(unsigned char)7] [i_3]) ? (1063702169) : (((/* implicit */int) arr_3 [i_1] [i_4] [i_5]))))));
                            arr_18 [21U] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_4]))) / (-8942604941411394440LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [9ULL] [i_5])) >> (((/* implicit */int) (_Bool)0))))) : (1298484406U)));
                        }
                        arr_19 [i_0] [i_1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3340967945U)) ? (-1615083733451341224LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)112))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_4 [i_0] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_1] = ((/* implicit */short) ((arr_13 [i_0] [i_1] [i_3]) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (926525594U) : (((/* implicit */unsigned int) -792045861))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) ^ (18204692209698635685ULL)))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_6] [i_3] [i_1] [i_0])))) | (((/* implicit */int) ((arr_15 [i_0] [i_1] [i_3] [i_6] [i_6] [i_1]) <= (9571246637472717597ULL)))))))));
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174)))))) + (arr_1 [i_1])));
                        arr_23 [i_6] [i_3] [i_3] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))))) ? (arr_21 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32759)))));
                    }
                    var_20 += ((/* implicit */unsigned short) ((unsigned long long int) ((arr_1 [i_1]) ^ (1873370994U))));
                }
                for (unsigned char i_7 = 3; i_7 < 21; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_7 + 3] [i_7 - 3] [i_7 + 1])), (((((/* implicit */int) arr_5 [i_7 + 3] [i_7 - 2] [i_7 - 2])) + (((/* implicit */int) arr_5 [i_7 + 1] [i_7 - 2] [i_7 - 2]))))));
                    arr_27 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */short) (signed char)-114)), ((short)31138)))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned char) (unsigned char)166));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1643567754)) : (((arr_11 [i_10] [i_8] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_9] [i_10 - 2]))))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (unsigned short)20565)), (-396338698))) != (((((/* implicit */int) arr_3 [19ULL] [i_1] [i_9])) ^ (((/* implicit */int) (_Bool)1))))))))))));
                            arr_35 [i_10] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [(unsigned char)20] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39484)))))) && (((2147483647) <= (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
                        {
                            arr_39 [i_11 - 1] [i_9] [i_8] [i_8] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2256153119U)), (11463972918658100235ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)175)) > (((/* implicit */int) (_Bool)0)))))) : (max((((761784597U) & (arr_21 [i_11]))), (((/* implicit */unsigned int) (_Bool)0))))));
                            arr_40 [i_0] [i_8] [i_9] [i_11] |= ((/* implicit */signed char) ((unsigned short) (((_Bool)1) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_24 [(_Bool)1] [i_1] [i_1] [i_11]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_34 [(unsigned char)21] [i_8] [i_9])) : (((/* implicit */int) arr_37 [i_1] [21ULL] [i_1] [i_1] [i_1]))))))));
                            arr_41 [12U] [i_11] |= ((((/* implicit */_Bool) arr_29 [15ULL] [15ULL] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_33 [i_8] [i_11] [(short)21] [i_11] [i_11 - 1] [i_11 + 3]))) : ((((+(-1904777720))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [(short)19])) >= (((/* implicit */int) (short)-3668))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        arr_46 [i_0] [i_0] [9LL] [i_0] [i_0] = (unsigned short)7;
                        arr_47 [i_8] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (1279521337U)));
                    }
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)255)))) - (((/* implicit */int) (signed char)124))))) ? (((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)1))))) : (((((1977320194486060108ULL) < (((/* implicit */unsigned long long int) -2232445074601878518LL)))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (1610612736U))) : (((((/* implicit */_Bool) 16469423879223491507ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16376))) : (162229952U)))))));
                    arr_48 [i_8] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_26 [9] [6U] [i_8]))) ? (((unsigned int) ((((/* implicit */_Bool) 16469423879223491507ULL)) ? (arr_1 [(unsigned short)5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)32767), (((/* implicit */short) (signed char)119))))))))));
                    arr_49 [i_0] [i_0] [i_0] [i_0] = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13945743008897450451ULL)) ? (845466433179040341LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))) ? (((1530135103U) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_8] [i_1] [i_0]))))));
                    var_25 = ((/* implicit */unsigned short) min(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) (~(((/* implicit */int) (signed char)93))))))), (((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) : (-1434535194253110118LL))) <= (((/* implicit */long long int) arr_0 [i_0])))))));
                }
                arr_50 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_29 [i_1] [(unsigned char)4] [i_0]), (((/* implicit */long long int) 2996482893U))))) ? (((((_Bool) 4294967295U)) ? (((((/* implicit */_Bool) 17294707977218217925ULL)) ? (845466433179040341LL) : (((/* implicit */long long int) 2514119870U)))) : (max((((/* implicit */long long int) arr_34 [i_0] [15ULL] [i_1])), (845466433179040341LL))))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_0] [(unsigned char)5] [i_1] [0])) | (((/* implicit */int) (_Bool)1))))), ((~(arr_31 [i_0] [i_1] [i_1] [i_0])))))));
                arr_51 [i_0] [(short)22] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)58862), (((/* implicit */unsigned short) (unsigned char)228))))) ? (max((((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [(unsigned char)17] [i_1] [i_1])), (-791931847))) : ((-(((/* implicit */int) arr_38 [i_0] [(signed char)4] [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */int) (signed char)119)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25949)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [1LL] [i_1]))) : (arr_28 [i_0])))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)17876))))))));
                arr_52 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) -2927290629102013608LL)) ? (((/* implicit */int) (short)5641)) : (((/* implicit */int) arr_3 [i_1] [(unsigned char)6] [i_0])))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-364857716) : ((-2147483647 - 1))))))));
                var_26 = (unsigned char)6;
            }
        } 
    } 
}
