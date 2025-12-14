/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167047
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (min((((long long int) var_3)), (((/* implicit */long long int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_11)) < (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 3])) ? (arr_1 [i_0]) : (var_3)))));
            var_13 = ((/* implicit */unsigned long long int) 3399196547U);
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */long long int) var_4);
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 19; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-5693038637591770109LL)))) ? (((((/* implicit */_Bool) 5693038637591770106LL)) ? (-5693038637591770109LL) : (-5693038637591770090LL))) : (((/* implicit */long long int) var_6))));
                        var_15 = ((/* implicit */signed char) (+(arr_8 [i_3] [i_3] [i_2])));
                    }
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) /* same iter space */
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((-5693038637591770122LL) - (((/* implicit */long long int) var_11))))))) ? (min((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_5] [i_5])))), (((/* implicit */unsigned long long int) -5693038637591770115LL)))) : (((/* implicit */unsigned long long int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_16 = (+(var_10));
                        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -5693038637591770122LL)) ? (((/* implicit */long long int) 3677436279U)) : (5693038637591770108LL))), (((/* implicit */long long int) var_8))));
                    }
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(5693038637591770108LL))), (((/* implicit */long long int) ((4219587969U) % (4294967295U))))))) ? (3713657147U) : (var_8)));
                    var_19 = ((/* implicit */long long int) min((var_19), (min((((/* implicit */long long int) var_8)), (min((min((-5693038637591770122LL), (((/* implicit */long long int) 75379328U)))), (((((/* implicit */_Bool) 4294967295U)) ? (5693038637591770122LL) : (((/* implicit */long long int) 2736214270U))))))))));
                    arr_30 [i_5] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_24 [i_7 + 2] [i_7 + 3] [i_7 + 2] [i_7 + 2])), (-5693038637591770108LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (8U))))));
                }
                for (unsigned int i_9 = 1; i_9 < 18; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) var_7);
                        var_21 = ((/* implicit */unsigned long long int) var_4);
                        arr_36 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5693038637591770106LL)) ? (((/* implicit */unsigned long long int) arr_31 [i_5] [i_5])) : (18446744073709551609ULL)))) ? (((/* implicit */long long int) var_8)) : (32256LL))))));
                    arr_37 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (2613620390U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18136)))))) != (arr_34 [i_9] [i_9] [i_9] [i_5] [i_9 - 1] [i_9] [i_9 - 1])))) << (((min((((unsigned int) var_7)), (((((/* implicit */_Bool) (short)30546)) ? (var_5) : (1059965751U))))) - (1516793589U)))));
                    var_23 = (-(var_7));
                }
                /* vectorizable */
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    var_24 = var_8;
                    var_25 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7));
                    var_26 ^= ((/* implicit */unsigned int) (~(arr_29 [i_0] [i_0] [i_0] [i_5] [i_6] [i_11 + 1] [i_5])));
                }
                arr_42 [i_0 - 3] [i_0] [i_5] = 16777215U;
                var_27 = 208664031U;
                var_28 *= var_9;
            }
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
            {
                arr_46 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 5693038637591770108LL)) ? (2635467082U) : (3677436285U)));
                var_29 = 1059965751U;
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_27 [i_0] [i_5] [i_12] [i_5] [i_12])) : (max((((/* implicit */unsigned long long int) (signed char)0)), (((((/* implicit */_Bool) 2635467082U)) ? (((/* implicit */unsigned long long int) 4294443008U)) : (15ULL)))))));
                var_31 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (3466013990U)))) ? (((/* implicit */unsigned long long int) var_2)) : (571878618028584483ULL))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2906093077U)) ? (2147483520U) : (arr_33 [i_0])))) ? (((/* implicit */unsigned long long int) min((1088164421U), (var_1)))) : (var_3)))));
                var_32 = ((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (var_5)))) == (arr_35 [i_5] [i_5] [i_5]))) ? (var_11) : (((min((var_10), (((/* implicit */unsigned int) (short)29060)))) >> ((((-(5948921713222755856LL))) + (5948921713222755875LL))))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 2) 
                {
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)29057))));
                    arr_53 [i_14] [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((unsigned int) arr_26 [i_0] [i_0] [i_5] [i_13] [i_5] [i_14])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))));
                }
                for (unsigned int i_15 = 2; i_15 < 17; i_15 += 2) 
                {
                    arr_58 [i_5] = ((/* implicit */unsigned long long int) ((-6719379728684132742LL) >= (((/* implicit */long long int) 828953308U))));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((var_6) % (var_8))))));
                    var_35 = ((/* implicit */short) (-(var_10)));
                }
                for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3161077116740330383LL)) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (1681346906U))) : (var_9)));
                    arr_61 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_43 [i_5] [i_13] [i_5] [i_0]);
                }
                for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    var_37 = ((unsigned int) ((arr_40 [i_17] [i_5] [i_5] [i_0]) ? (((/* implicit */unsigned long long int) var_6)) : (var_7)));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 1; i_18 < 18; i_18 += 1) /* same iter space */
                    {
                        arr_68 [i_0] [i_5] [i_0] [i_5] [i_0] = 4294967295U;
                        var_38 = ((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_18 - 1] [i_18])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) : (var_6));
                        arr_69 [i_18] [i_5] [i_13] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    }
                    for (unsigned int i_19 = 1; i_19 < 18; i_19 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (18446744073709551609ULL)));
                        arr_72 [i_0] [i_5] [i_13] [i_17] [i_19 + 1] = ((/* implicit */unsigned long long int) var_11);
                        arr_73 [i_0] [i_0] [i_13] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_13] [i_13] [i_13] [i_5] [i_0])) ? (((/* implicit */long long int) var_8)) : (2723268633965917110LL))))));
                        var_40 = ((/* implicit */short) arr_19 [i_0 + 1] [i_0 + 1]);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    var_41 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)-24486)) ? (0LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))));
                    var_42 = ((/* implicit */_Bool) max((var_42), ((!(((/* implicit */_Bool) ((var_0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2848308738U)))))))));
                    var_43 = ((/* implicit */signed char) (-(((/* implicit */int) arr_50 [i_0 - 1] [i_0 + 1]))));
                }
                var_44 = ((/* implicit */_Bool) 2097151U);
            }
            var_45 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((var_2) != (var_6)))))), ((~(((/* implicit */int) (signed char)117))))));
        }
        /* LoopNest 2 */
        for (short i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        var_46 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (var_10));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 3) 
                        {
                            var_47 -= ((/* implicit */_Bool) (-(-5948921713222755856LL)));
                            arr_90 [i_0] [i_0] [i_0] [i_0] [i_22] = ((/* implicit */short) arr_87 [i_0 - 2] [i_0 - 2] [i_22]);
                            var_48 = ((/* implicit */_Bool) arr_49 [i_22]);
                        }
                        var_49 = ((/* implicit */short) var_2);
                    }
                    var_50 = ((/* implicit */unsigned long long int) 3466013988U);
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) var_7))));
    }
    for (signed char i_25 = 0; i_25 < 17; i_25 += 4) /* same iter space */
    {
        arr_93 [i_25] [i_25] = (~(var_6));
        var_52 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) 230621836U)) ? (3026261393U) : (1073741824U))), (((/* implicit */unsigned int) arr_76 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))))));
    }
    for (signed char i_26 = 0; i_26 < 17; i_26 += 4) /* same iter space */
    {
        arr_98 [i_26] [i_26] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (3466013990U)))) ? (var_2) : (((((/* implicit */_Bool) var_9)) ? (arr_32 [i_26]) : (var_10)))))));
        var_53 = ((/* implicit */unsigned int) min((var_53), (var_11)));
    }
}
