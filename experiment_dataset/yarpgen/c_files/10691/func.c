/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10691
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 &= min((((((18446744073709551615ULL) > (arr_2 [i_1]))) ? (var_4) : ((-(var_10))))), (((((/* implicit */_Bool) var_12)) ? (var_8) : (var_8))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (8739175924061806042ULL)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        var_20 |= var_11;
                        arr_8 [i_0] = arr_5 [7ULL];
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            arr_15 [i_5] [i_4] [i_2] [i_5] = (~(746733941489090721ULL));
                            var_21 &= ((((unsigned long long int) arr_2 [i_0])) % ((-(var_2))));
                            var_22 = ((((/* implicit */_Bool) var_10)) ? (var_13) : (var_13));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_6] [i_2] [i_6] = ((((/* implicit */_Bool) var_14)) ? (arr_9 [7ULL] [i_1] [i_1] [i_0 + 2] [i_0 + 2] [i_0]) : (arr_9 [i_2] [i_1] [i_1] [i_0 + 2] [i_6] [i_1]));
                            var_23 |= (+(((((/* implicit */_Bool) var_0)) ? (var_1) : (var_17))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((unsigned long long int) (~(7441021016303483679ULL))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 2] [12ULL] [i_0 - 2] [i_6])) ? (var_17) : (var_17)))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 37408286025299403ULL)))))))))));
                        }
                        var_27 += (-((~(var_14))));
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 4) 
                    {
                        var_28 = var_13;
                        arr_22 [i_0] [i_0] [11ULL] [2ULL] [i_0] |= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (13040392653576393950ULL) : (arr_20 [i_0 + 1] [i_1] [i_2] [11ULL])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13323101829013115217ULL)) ? (var_17) : (arr_12 [i_2] [15ULL] [i_2] [i_2] [2ULL] [i_2] [15ULL])))) ? (((arr_16 [2ULL] [i_1] [i_1] [i_1] [i_1] [i_1] [3ULL]) ^ (var_7))) : ((~(arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0]))))) : ((~(((var_13) + (var_7))))));
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(var_6))) : (((((/* implicit */_Bool) var_3)) ? (var_15) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : ((((~(5406351420133157664ULL))) << (((((var_9) + (var_3))) - (13213906113615464383ULL))))));
                    }
                    for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 4) 
                    {
                        arr_27 [i_1] [i_2] &= (~(((var_11) % (var_2))));
                        var_30 = ((((((/* implicit */_Bool) ((arr_14 [i_0 + 2] [i_0 - 2] [i_0]) & (var_10)))) ? (9749632810575442201ULL) : (((arr_11 [1ULL] [i_1] [4ULL] [i_2] [i_2]) ^ (var_6))))) & (max((((18446744073709551614ULL) | (var_9))), (((((/* implicit */_Bool) 9749632810575442171ULL)) ? (7783824625893787651ULL) : (8994929304777451411ULL))))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11644082660397133037ULL)) ? (var_15) : (arr_3 [i_0] [i_0])))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (var_13))))))) != (8256969850216236271ULL))))));
                        var_32 = ((arr_14 [i_1] [i_2] [i_8 - 2]) % (max((((((/* implicit */_Bool) 18446744073709551596ULL)) ? (var_9) : (arr_26 [i_8] [i_1] [i_1]))), (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (3981203372459605728ULL) : (17140903088112156936ULL))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((unsigned long long int) ((((/* implicit */_Bool) (~(8881769047807550397ULL)))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551608ULL) >= (var_13))))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 1) 
                        {
                            var_34 += var_0;
                            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0 + 1])) ? (arr_13 [i_0] [i_1] [i_1] [i_10] [i_0 + 1]) : (((unsigned long long int) 11560562064569475602ULL)))))));
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((unsigned long long int) ((unsigned long long int) 8739175924061806036ULL)))));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 15; i_11 += 3) 
                        {
                            var_37 = (~((-(((var_16) / (var_12))))));
                            arr_34 [i_0] [0ULL] [i_2] [0ULL] [0ULL] = ((((/* implicit */_Bool) 15695322101513158704ULL)) ? (1476545364072358198ULL) : (0ULL));
                            var_38 = var_9;
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_39 += (((~((+(var_9))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305280059260272640ULL)) ? (arr_32 [i_0 + 1] [i_0] [i_0] [12ULL]) : (6107552965499887674ULL)))) ? (((((/* implicit */_Bool) 8ULL)) ? (var_0) : (arr_28 [i_0 + 1] [i_1]))) : ((+(arr_23 [i_9] [i_9]))))) - (12100499582234444880ULL))));
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (var_16)));
                        }
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1])) ? (arr_9 [i_0 + 2] [i_0 - 2] [2ULL] [i_0 + 1] [i_0 - 2] [i_2]) : (arr_9 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 - 2] [i_2])))) || ((!(((/* implicit */_Bool) var_8))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) << (((var_6) - (3285659898720644930ULL)))))) && (((/* implicit */_Bool) (+(arr_1 [i_0 - 1] [i_0]))))));
                        arr_40 [i_0 + 2] [i_13] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17286298494862052173ULL) - (var_8)))) ? (((((/* implicit */_Bool) 4815161381705095012ULL)) ? (var_13) : (11365308957317771517ULL))) : (arr_29 [i_1])))) ? ((~((-(var_16))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [7ULL] [i_0 + 2] [i_13])) ? (((unsigned long long int) 2751421972196392905ULL)) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (1945051195650095157ULL))))));
                        var_43 = var_15;
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        arr_43 [8ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_1) / (var_0))) >= (9804349115264898501ULL))))) <= ((~(3989059737590744799ULL)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            arr_46 [i_0] [i_0] [i_1] [i_2] [i_0] [i_14] [i_15] = 7035475349047929796ULL;
                            var_44 += (~(arr_38 [i_0 - 1] [i_0 - 2] [i_0] [i_0]));
                            arr_47 [7ULL] [i_14] [i_1] = (-(1476545364072358200ULL));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 4) 
                        {
                            var_45 += ((((/* implicit */_Bool) (~((-(var_15)))))) ? ((((~(var_3))) - ((~(arr_41 [i_0] [i_2] [i_2] [i_2]))))) : (3343969858580783394ULL));
                            var_46 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (18446744073709551615ULL) : (arr_33 [10ULL] [11ULL] [i_2] [i_14] [i_16 + 1]))) <= (((((/* implicit */_Bool) var_16)) ? (var_7) : (var_8))))))) + (((unsigned long long int) arr_9 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 - 2])));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned long long int) max((var_47), ((((~(arr_31 [i_0 - 2] [i_17] [i_17] [i_0 + 2] [i_0 - 1] [i_0 - 2]))) ^ (((((var_7) ^ (var_0))) & (var_10)))))));
                            var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [4ULL] [4ULL] [i_0 + 2] [i_1])) ? (var_10) : (18446744073709551615ULL)))) ? (((var_15) & (arr_14 [i_0] [i_0] [i_0 + 2]))) : (((((/* implicit */_Bool) var_9)) ? (18134581601959420848ULL) : (var_0))));
                            var_49 -= ((((/* implicit */_Bool) ((arr_36 [i_0 + 1] [i_0 + 1] [i_0 - 2]) - (var_13)))) ? (((unsigned long long int) var_10)) : (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */_Bool) var_10)) ? (var_13) : (var_5))) : (((((/* implicit */_Bool) var_1)) ? (1201352920513811291ULL) : (var_5))))));
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_30 [i_0 - 1] [i_1] [i_1] [i_2] [i_18] [i_18]) : (var_10)))) ? ((~(var_3))) : ((~(11560562064569475577ULL))))))));
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14457684336118806826ULL)) ? (12339191108209663954ULL) : (10ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
                    }
                }
            } 
        } 
    } 
    var_52 = ((((unsigned long long int) 18446744073709551603ULL)) << (((var_7) - (7571592101894467481ULL))));
}
