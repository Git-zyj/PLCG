/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148330
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 695809283148582981ULL)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((arr_11 [i_3] [(signed char)17] [(signed char)17]) | (arr_11 [i_0] [i_1] [10U]))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [1LL] [i_2] [i_3]))))))))))));
                        arr_12 [i_0] |= ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)163)))), (((/* implicit */int) arr_7 [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1])) <= (((/* implicit */int) (short)24990))))) & (((/* implicit */int) arr_9 [(_Bool)1] [(signed char)13]))));
                        arr_16 [i_4] [i_4] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((unsigned char) arr_1 [i_0] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_2] [i_0]);
                        arr_19 [i_2] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_14 [i_0] [4LL] [i_2] [i_5]) ^ (arr_14 [i_0] [i_1] [i_2] [i_5])))), (((unsigned int) arr_14 [i_5] [i_0] [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((max(((+(-8530036230643412810LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0))))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    arr_29 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_16) ? (arr_6 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) >= (((/* implicit */int) var_12))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 10U)) || (((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_7]))))))) : (((((/* implicit */_Bool) ((arr_0 [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8]))) : (-7713444853071627115LL)))));
                    arr_30 [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (arr_2 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))));
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6]))) : (arr_11 [i_6] [i_7] [i_8])))) % (arr_24 [i_8] [i_7] [i_6]))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) var_16);
    }
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                {
                    var_24 &= ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_1 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_10] [i_11]))) : (2235978241U))))), (((/* implicit */unsigned int) var_17))));
                    arr_39 [i_10] [i_11] = ((/* implicit */signed char) ((((_Bool) 2235978228U)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)116)) - (((/* implicit */int) (signed char)114))))) - (2235978254U)))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2235978228U)) : (arr_6 [i_9]))), (((/* implicit */long long int) arr_3 [(_Bool)1] [i_10] [(signed char)10]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_5 [i_9] [i_12]))));
                        var_26 = ((/* implicit */int) ((signed char) min((((/* implicit */int) arr_3 [i_9] [i_13] [i_14])), (((((/* implicit */_Bool) 3068871585U)) ? (((/* implicit */int) arr_33 [i_13])) : (arr_22 [i_9]))))));
                        var_27 = ((/* implicit */int) ((((unsigned long long int) min((var_14), (((/* implicit */long long int) arr_9 [i_9] [i_9]))))) <= (((/* implicit */unsigned long long int) (~(2058989059U))))));
                        arr_47 [i_9] [i_9] [i_12] [i_12] [1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (642882968771725706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) 2823881170U)) : (arr_26 [i_9] [i_9] [i_9])))) ? (((((/* implicit */unsigned long long int) -2129394634)) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_35 [i_14] [i_13] [(signed char)9])) : (17803861104937825895ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 268435455ULL)))) != (((((/* implicit */_Bool) (unsigned short)46887)) ? (268435454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (((~(17803861104937825928ULL))) < (((/* implicit */unsigned long long int) min((min((arr_26 [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_17 [i_9])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_9] [(short)18] [i_9] [i_9] [i_9])) ? (arr_23 [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9]))))))))))))));
    }
}
