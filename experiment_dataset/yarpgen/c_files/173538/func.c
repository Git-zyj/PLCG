/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173538
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
    var_13 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17319039931274254828ULL)) ? (var_12) : (var_12)))) ? (((((/* implicit */int) (unsigned char)37)) - (-1848534645))) : (((((/* implicit */int) var_0)) + (-893623483))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3075)) + (min((((/* implicit */int) arr_0 [i_0 + 2])), (var_11)))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (~((-(var_2)))));
                            var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) (signed char)127))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((_Bool) 1230396269U)))));
                            var_17 = (~(((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
            } 
            var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */long long int) ((/* implicit */int) var_10))) == (281473902968832LL)))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (((3064571026U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (arr_13 [i_1] [i_1])))))));
            arr_22 [i_1] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned long long int) 3064571027U)) : (((unsigned long long int) 13793217209771736612ULL))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_0))));
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3074))) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967268U))))) : (((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_7] [i_1] [i_1] [i_6])) ? (((/* implicit */int) (short)112)) : (((/* implicit */int) (signed char)48))))));
                    }
                } 
            } 
            arr_30 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-5932))));
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) > (((/* implicit */int) (signed char)-82)))))));
        }
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
        {
            arr_33 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (short)-401));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_27 [i_1] [i_1] [i_1] [i_1])) ^ ((+(-3431987357156685090LL)))))) ? (((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) var_0)) ? (948664619) : (var_11))) - (948664603))))) : ((((-(((/* implicit */int) arr_18 [i_1] [i_9])))) / (((/* implicit */int) ((unsigned char) (unsigned char)31)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_24 = ((((/* implicit */_Bool) (short)-28098)) ? (arr_12 [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-3075))))));
            arr_36 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_25 += ((/* implicit */signed char) var_7);
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 21; i_12 += 3) 
            {
                for (long long int i_13 = 2; i_13 < 21; i_13 += 3) 
                {
                    {
                        arr_46 [i_11] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_39 [i_13] [i_11] [i_13] [i_13 - 2])))) || (((/* implicit */_Bool) ((unsigned long long int) ((_Bool) 4181880048U)))));
                        arr_47 [i_1] [i_11] [i_12] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_1] [i_11] [i_12 + 1] [i_1])) ? (arr_12 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3092)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (8165407920224772493ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (short)-3070)) ^ (((/* implicit */int) arr_21 [i_1] [i_12 + 1])))) > ((~(-114026279))))))) : ((~(((((/* implicit */_Bool) 1349496855U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_23 [i_13] [i_12] [i_11] [i_1])))))));
                    }
                } 
            } 
            arr_48 [i_11] [i_11] = ((/* implicit */_Bool) -199693821);
        }
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            arr_51 [i_1] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_9 [i_1] [i_1] [i_14])))))) & (((((/* implicit */int) arr_49 [i_1])) + (((/* implicit */int) var_6))))));
            arr_52 [i_14] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((var_3) | (arr_31 [i_1] [i_1] [i_14]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_14])))))));
        }
    }
    for (signed char i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
    {
        var_26 += ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (234296232)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)168)))))) : (((/* implicit */int) arr_5 [i_15] [i_15])));
        var_27 = ((/* implicit */_Bool) ((signed char) (~(((((/* implicit */_Bool) (short)-426)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9))))));
    }
    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */int) min((var_28), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)3152)) : (((/* implicit */int) (short)32767)))), (max((((/* implicit */int) (short)-452)), (var_3)))))));
        arr_57 [i_16] [i_16] = var_0;
    }
    var_29 = (((~(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (-1457481815)))))) - (((/* implicit */int) var_5)));
}
