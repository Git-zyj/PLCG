/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187624
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 286578142)) ? (max((7639922933134108647ULL), (4125174248433707749ULL))) : (1738012013792245329ULL))));
        var_16 = ((/* implicit */unsigned char) (~(14994858480119905758ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3384790977U)) / (3414476704264328221ULL))))));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) 3451885593589645836ULL);
            var_18 += ((((/* implicit */_Bool) 850975987U)) ? (14994858480119905758ULL) : (16708732059917306286ULL));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_14 [i_1] [i_1] = ((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? ((~(15032267369445223395ULL))) : (arr_13 [i_3] [i_3] [i_1]));
            var_19 = ((/* implicit */long long int) 2874142332U);
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(6053853096821493843ULL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_21 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */int) var_0);
                arr_22 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 4125174248433707742ULL))) && ((_Bool)0)));
            }
            var_21 += ((/* implicit */unsigned int) 3539973823425687431ULL);
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((((/* implicit */_Bool) arr_24 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (var_12))) : (((/* implicit */unsigned long long int) ((unsigned int) -1345356300)))));
            arr_25 [i_6] [i_6] = ((/* implicit */_Bool) ((short) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (7154274373904160934ULL))));
            arr_26 [i_6] [i_6] [i_6] = ((arr_4 [i_1]) ? ((~(arr_24 [(_Bool)1]))) : (((1555021948) / (((/* implicit */int) arr_10 [i_6])))));
        }
        arr_27 [i_1] = ((/* implicit */int) var_0);
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(850975982U)))) ? (arr_15 [i_1]) : (((((/* implicit */_Bool) var_11)) ? (arr_15 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_24 += ((/* implicit */unsigned short) arr_28 [i_7]);
        /* LoopSeq 4 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_25 += ((/* implicit */unsigned long long int) var_3);
            var_26 = ((unsigned long long int) 6233243025630492905LL);
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            var_27 = ((/* implicit */int) (!(arr_34 [i_7] [i_9])));
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) (unsigned char)154);
                arr_38 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) arr_37 [i_7] [i_9] [i_10] [i_7])) + (910176344U)))));
            }
            for (int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), ((-(arr_29 [i_7])))));
                arr_43 [23U] [i_9] [i_11] [23U] = ((/* implicit */unsigned long long int) arr_28 [i_9]);
                arr_44 [i_7] [9ULL] [i_9] = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) 2874142332U)))) : (13906866170582051442ULL));
                arr_45 [i_7] [i_9] [i_11] |= ((/* implicit */_Bool) arr_29 [(short)10]);
            }
            for (int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) arr_46 [i_7] [i_9] [i_9]);
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_31 -= ((/* implicit */unsigned long long int) (-((~(var_5)))));
                    arr_51 [i_9] [i_12] [i_12] [22ULL] [(signed char)6] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [6] [i_9] [i_12])) ? (11084298853960080349ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_7] [i_9] [i_9] [i_9])) ? (arr_36 [i_9] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))));
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) ? (1457959555) : (((/* implicit */int) var_8)))))));
                }
            }
        }
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
        {
            arr_54 [i_14] [i_14] [i_7] = ((/* implicit */unsigned short) arr_35 [17ULL] [10ULL] [i_7]);
            var_33 *= ((/* implicit */unsigned long long int) (unsigned char)93);
            var_34 -= (+(((((/* implicit */_Bool) 4546575128069149720ULL)) ? (((/* implicit */unsigned long long int) arr_32 [i_14] [i_14] [i_7])) : (3114234619279212898ULL))));
            var_35 = ((/* implicit */unsigned int) arr_32 [i_14] [i_7] [i_7]);
        }
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) arr_37 [i_7] [i_15] [i_7] [i_15])) : ((-(arr_29 [i_15])))));
            var_37 = ((/* implicit */unsigned long long int) min((var_37), ((-(var_14)))));
            arr_59 [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1881083790)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11842)));
            var_38 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (3908387636U))))));
        }
        arr_60 [i_7] |= ((/* implicit */_Bool) ((4125174248433707749ULL) & (((/* implicit */unsigned long long int) arr_57 [(short)22] [(short)22]))));
        arr_61 [i_7] [(_Bool)1] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_7]))) : (arr_36 [i_7] [i_7]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
    {
        var_39 = (-(12431507095302800357ULL));
        arr_66 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_16])) && (((/* implicit */_Bool) arr_40 [i_16] [i_16] [20U] [i_16]))));
    }
    var_40 = ((unsigned long long int) ((short) (_Bool)1));
    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (3443991309U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (min((var_14), (((/* implicit */unsigned long long int) 850975989U)))))), (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) (+(var_13)))))))))));
}
