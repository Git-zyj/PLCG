/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108967
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
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 13381011298745554919ULL)))))) < (((var_1) / (var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 = (-(var_4));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = arr_2 [i_1];
            var_18 = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */signed char) var_11);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))))) == (1898184831889251489ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_3])))) || (((/* implicit */_Bool) 5560660284441607794ULL))));
                    var_20 = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3 + 3] [i_3] [i_3 + 3]))) * (10363331157122165912ULL))));
                    arr_15 [i_0] [i_0] [i_0] [i_4] [i_0] [i_3] = ((/* implicit */signed char) var_6);
                }
                var_21 = ((/* implicit */unsigned long long int) ((signed char) ((signed char) var_10)));
                var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (13981220130487693707ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_2] [i_0])))))) ? (27ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11987443829989622818ULL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)-67)))))));
                var_23 = var_6;
            }
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2371628240442364656ULL)) || (((((/* implicit */_Bool) arr_12 [i_2])) && (((/* implicit */_Bool) var_12))))));
                    arr_20 [i_5] [i_5] [i_2] [i_0] [i_5] = (~(13ULL));
                }
                for (signed char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    var_25 = ((unsigned long long int) 0ULL);
                    arr_23 [i_5] = ((/* implicit */signed char) var_15);
                }
                for (signed char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                {
                    var_26 -= ((/* implicit */unsigned long long int) arr_3 [i_5 + 4] [i_5 - 2] [i_5 + 3]);
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) (+(5179341474514149862ULL)));
                    var_27 = ((/* implicit */signed char) min((var_27), (arr_22 [i_5 - 1] [i_8] [i_5 + 3] [i_8])));
                }
                arr_27 [(signed char)2] [(signed char)2] [i_5] [1ULL] = ((/* implicit */unsigned long long int) ((signed char) 7457090043309481950ULL));
            }
            var_28 ^= ((/* implicit */signed char) ((unsigned long long int) (signed char)-99));
            var_29 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 1) 
        {
            arr_31 [i_0] [i_9] [i_9] = ((unsigned long long int) 8083412916587385704ULL);
            arr_32 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91))) * (var_5)));
            var_30 = ((unsigned long long int) var_1);
        }
        arr_33 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0]));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        arr_41 [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((var_0) - (1061183392137038584ULL)))));
                        var_31 = 4790802205693037926ULL;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_13 = 4; i_13 < 13; i_13 += 4) 
            {
                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) var_12)))))));
                arr_45 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_13 + 1]);
            }
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_10] [i_10] [i_0])) : (((/* implicit */int) arr_9 [i_10] [i_10] [i_0]))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                for (signed char i_16 = 3; i_16 < 11; i_16 += 2) 
                {
                    {
                        arr_53 [i_14] [i_14] [(signed char)5] [i_16 + 3] [i_14] = ((0ULL) / (15627296070458199216ULL));
                        arr_54 [i_0] [i_14] [i_16 - 1] [i_14] = ((/* implicit */signed char) ((unsigned long long int) 14324636584302032476ULL));
                        var_34 = 3985360931441549784ULL;
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) (((+(var_10))) <= (((var_9) << (((((/* implicit */int) var_2)) - (66)))))));
        }
    }
    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_19 = 1; i_19 < 21; i_19 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    arr_65 [(signed char)19] [i_18] [i_19 + 1] [(signed char)19] [i_20] [13ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_55 [i_17] [i_18 - 2]))));
                    arr_66 [i_20] [i_19] [(signed char)9] [(signed char)9] [(signed char)9] [(signed char)9] = ((/* implicit */unsigned long long int) ((signed char) var_4));
                    arr_67 [i_17] [12ULL] [i_18 - 1] [i_17] = var_12;
                    arr_68 [i_17] [i_18] [i_19 + 1] [i_20] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)126))));
                    var_36 = var_6;
                }
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (arr_59 [i_18 - 1] [i_19 + 2] [i_19]) : (var_1)))) ? (arr_58 [i_17]) : (var_9)));
                var_38 = ((((/* implicit */_Bool) (signed char)9)) ? (((3473828358095720707ULL) * (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10363331157122165912ULL)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)-122))))))))));
                arr_69 [i_17] [i_17] [i_17] [i_17] = (signed char)32;
            }
            arr_70 [i_18] = ((/* implicit */unsigned long long int) ((((5065732774963996697ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-20)) != (((/* implicit */int) (signed char)122)))))))) == (((((/* implicit */_Bool) 4017543431550013805ULL)) ? (6046764548159105279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13381011298745554919ULL))))))))));
            var_39 = arr_60 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_17];
        }
        var_40 = min((max((4122107489407519136ULL), (((/* implicit */unsigned long long int) (signed char)0)))), (((((/* implicit */_Bool) min((0ULL), (2407213120643546082ULL)))) ? (max((((/* implicit */unsigned long long int) (signed char)-115)), (5106964291879262305ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))));
    }
    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_10)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_9), (((/* implicit */unsigned long long int) (signed char)127)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((14919776513633632439ULL) < (var_3)))))))))));
    var_42 = ((/* implicit */signed char) 3739582488318376615ULL);
    var_43 = ((/* implicit */signed char) (((~(((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) * (max((((unsigned long long int) var_2)), ((~(var_3)))))));
}
