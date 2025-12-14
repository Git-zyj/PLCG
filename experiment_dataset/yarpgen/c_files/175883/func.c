/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175883
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
    var_12 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((15550466373516539844ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (16655979182630789921ULL))) - (2896277700193011781ULL));
    var_13 = ((/* implicit */signed char) (-(15550466373516539846ULL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] = ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) / (2046))))) ? (2896277700193011766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((-2041921422), (-327898584))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = max((((/* implicit */long long int) (unsigned short)32833)), (6205992207125299747LL));
        arr_12 [i_3] = ((((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3])) - (3422696248108920491ULL));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((arr_3 [i_4] [i_4] [i_4]) >= (arr_0 [i_4])));
        arr_16 [7ULL] = ((/* implicit */int) 281474976694272LL);
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 1934821248)) || (((/* implicit */_Bool) -1851095705)))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (1185126167831163705LL) : (1688849860263936LL)));
                            arr_26 [i_8] [i_7] [i_6] [i_5] [13] = ((/* implicit */signed char) ((arr_0 [i_4]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)252)))));
                            arr_27 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 1688849860263936LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_1 [i_4] [i_5]))));
                            var_18 = ((/* implicit */int) 492581209243648ULL);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_6] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_5] [i_9])))) & (((((/* implicit */int) (signed char)120)) ^ (((/* implicit */int) (_Bool)1))))));
                            arr_32 [i_4] [i_4] [(_Bool)1] [i_6] [(_Bool)1] = ((int) arr_25 [i_4] [i_5] [i_6] [i_7] [i_9]);
                            arr_33 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) var_9);
                            var_19 = (signed char)112;
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) 8070450532247928832ULL);
                            arr_37 [i_10] [i_6] [i_6] [i_5] [i_6] [i_4] = ((/* implicit */short) 6010327958899331793LL);
                            var_21 = (_Bool)1;
                        }
                    }
                } 
            } 
            arr_38 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4] [i_5] [i_4] [i_4] [i_4] [i_5] [(_Bool)1]))) : (arr_35 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5] [i_5])));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 13; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    {
                        arr_47 [i_4] [i_11] [i_11] [i_11] = arr_22 [i_4] [i_11] [i_12] [i_11];
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (((((/* implicit */_Bool) (short)4626)) ? (2709987297109080712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_48 [i_4] [i_4] = ((/* implicit */unsigned short) arr_4 [i_4] [i_11]);
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1792)) ? (4722843608347796809ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_53 [i_4] [i_11] [i_12 - 1] [i_13] [i_4] = ((/* implicit */signed char) ((_Bool) 4722843608347796829ULL));
                        }
                        for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) (+(1688849860263936LL)));
                            arr_56 [(signed char)2] [i_11] [i_12 - 1] [i_13] [i_15] = ((/* implicit */long long int) arr_15 [i_4]);
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) 1185126167831163701LL);
            arr_57 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4722843608347796851ULL)) ? (((((/* implicit */_Bool) 13723900465361754809ULL)) ? (4722843608347796806ULL) : (arr_4 [13ULL] [13ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [3] [(_Bool)1] [i_4] [i_4] [i_4])))));
            arr_58 [i_4] [i_11] [i_11] = ((((/* implicit */int) (short)-26516)) / (((/* implicit */int) (unsigned short)2082)));
            arr_59 [12LL] [1LL] [i_4] = (+(8307246445412782589ULL));
        }
        var_26 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-22));
        arr_60 [i_4] [i_4] = ((/* implicit */short) arr_21 [i_4] [i_4] [i_4] [i_4]);
    }
    var_27 = ((((((/* implicit */int) var_6)) == (((((var_8) + (2147483647))) >> (((252201579132747776LL) - (252201579132747758LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(393216)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)31)) * (((/* implicit */int) var_10))))))) : (var_7));
}
