/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106510
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (2163562185465348285ULL) : (((/* implicit */unsigned long long int) 4123227057U))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) 4294967295U)) ? (1378928285U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) != (8ULL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (1971874602021576269ULL) : (((/* implicit */unsigned long long int) 3279680691U))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_1] = ((((/* implicit */int) arr_6 [(_Bool)1] [i_2 - 1])) <= (((/* implicit */int) arr_0 [i_1])));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 637286200890659330ULL)))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((_Bool) var_13))));
                        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                        var_16 ^= (+(((((/* implicit */_Bool) 17809457872818892293ULL)) ? (((/* implicit */unsigned long long int) 3117899531U)) : (637286200890659323ULL))));
                        arr_18 [i_5] [i_4 - 1] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((17809457872818892286ULL) + (18290761701713960176ULL)));
                    }
                    arr_19 [i_3] = ((unsigned long long int) 3117899531U);
                    var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_15 [i_1] [i_2 + 3] [i_3] [i_3] [i_4])))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_18 = ((var_10) == (15039277612027182048ULL));
                    var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_20 [i_1] [i_1] [i_1] [(_Bool)1]))))));
                }
            }
            for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                arr_26 [i_7] [i_2 + 3] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) 1177067761U)) ? (var_13) : (var_10));
                var_20 = ((/* implicit */_Bool) 255U);
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    arr_30 [i_7] [5ULL] [i_2] [i_7] = ((/* implicit */unsigned int) var_13);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_33 [i_2] [i_2 + 3] [i_7] [18U] [i_2] = (-(1744649370461104925ULL));
                        var_21 ^= ((/* implicit */_Bool) ((unsigned int) var_0));
                        var_22 = ((/* implicit */unsigned int) max((var_22), ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_0)))))));
                        var_23 ^= (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (10679692207286315066ULL)))));
                        var_24 = ((/* implicit */_Bool) arr_20 [i_8] [i_2] [i_7] [i_8 - 1]);
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_7] [i_2 + 2] = ((/* implicit */unsigned int) ((15814443373987450874ULL) > (12069938441037943725ULL)));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (((/* implicit */int) var_12))))));
                        arr_39 [(_Bool)1] [i_7] [19U] [i_8 - 1] [i_1] = ((/* implicit */_Bool) ((arr_1 [i_10]) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 23; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((unsigned long long int) var_6))));
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_11 + 1] [i_7] [i_7] [i_2 + 2] [i_2]))));
                        arr_42 [i_1] [i_1] [i_7] [i_8] [i_11 + 1] = ((/* implicit */_Bool) 13617415146199266912ULL);
                        arr_43 [i_1] [i_1] [i_2 + 3] [i_7 - 1] [i_8 + 3] [i_7] = ((/* implicit */unsigned long long int) var_4);
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    arr_47 [i_7] = ((((/* implicit */unsigned long long int) var_0)) - (arr_23 [i_7] [i_7]));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                        var_29 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1] [i_2] [i_2] [i_2] [i_2 + 1] [i_1]))) % (7715617817660071192ULL)));
                        var_30 = (_Bool)1;
                        arr_50 [i_1] [i_2] [i_7 - 2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1830655965U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                        arr_54 [i_1] [i_7] [i_14] = ((/* implicit */unsigned int) 7767051866423236552ULL);
                    }
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) (+(var_8)));
                            var_34 = ((/* implicit */_Bool) max((var_34), ((!(var_11)))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13617415146199266912ULL))));
            }
            arr_62 [12U] [i_2 - 1] [i_1] = ((unsigned int) 10400419937793644127ULL);
            var_36 = (!(((/* implicit */_Bool) var_10)));
        }
        var_37 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_38 = ((/* implicit */unsigned int) (!(var_9)));
    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) 7715617817660071192ULL))));
    var_40 ^= ((/* implicit */_Bool) max((var_6), ((+(637286200890659333ULL)))));
    var_41 = ((/* implicit */unsigned int) var_7);
}
