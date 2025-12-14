/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186698
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
    var_20 = ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_21 *= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(2301339409586323456ULL))))))));
    var_22 = ((/* implicit */unsigned short) var_4);
    var_23 &= ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_24 *= ((/* implicit */unsigned int) ((long long int) ((2889110409211136738LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
            {
                var_25 *= ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) & ((~(12817177011882634095ULL))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [(unsigned char)11] [9ULL] [9ULL] [i_2 + 1]);
                var_26 = ((/* implicit */int) ((signed char) (unsigned char)96));
            }
            for (short i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
            {
                arr_11 [i_0] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (unsigned short)50250)), (171388024U)))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 - 2] [i_3 + 1] [i_3 - 2]))) ^ (((unsigned int) arr_4 [i_3 - 2] [i_3 - 1] [i_3 - 3])))))));
            }
            /* vectorizable */
            for (short i_4 = 3; i_4 < 11; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) (+(3815018313U)));
                            var_29 &= ((/* implicit */unsigned short) (-(4080)));
                            arr_18 [i_4] [8LL] [i_4] [i_4] [i_4] = ((/* implicit */signed char) 171388024U);
                            var_30 *= ((/* implicit */unsigned short) ((_Bool) -8912570094392578403LL));
                            var_31 = ((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_4 - 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)4094))))) : (((long long int) arr_16 [i_0])));
                        }
                    } 
                } 
                var_32 = ((((/* implicit */_Bool) 171388024U)) ? (7831256277350802717LL) : (-2035772709532264644LL));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned int i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_4] [i_7] [i_4] = (((+(((/* implicit */int) var_1)))) % (((/* implicit */int) (unsigned char)57)));
                            var_33 = ((/* implicit */_Bool) ((597790030U) * (var_12)));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]))));
            }
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 2539059962994545033LL))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)6] [i_0] [i_0]))) : (16846472670675310178ULL))) : (((/* implicit */unsigned long long int) (+(7031858011601552691LL))))));
            arr_26 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [(_Bool)0])) ^ (1600271403034241438ULL))));
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_11))));
        }
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(arr_23 [(_Bool)1])))) | (((134217728LL) - (((/* implicit */long long int) -1)))))))));
        arr_27 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_0)) <= (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 14; i_10 += 4) 
        {
            for (unsigned short i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            var_38 += ((/* implicit */unsigned int) (_Bool)0);
                            var_39 *= ((/* implicit */unsigned long long int) 4294967295U);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_44 [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) arr_29 [i_9]));
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3197851143U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_9] [i_9]))) : (-817681309945157537LL)))))))));
                            var_41 = ((/* implicit */int) (+(arr_41 [(short)6] [4ULL] [i_9] [i_12] [(short)6])));
                            var_42 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_43 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_11 - 1]))));
                        }
                        for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            var_43 = ((/* implicit */signed char) ((597790030U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)4268)))));
                            var_44 = ((/* implicit */unsigned long long int) (short)4094);
                            var_45 = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)222))))));
                        }
                    }
                } 
            } 
        } 
        var_46 += ((/* implicit */unsigned long long int) arr_42 [4LL] [4LL] [i_9]);
    }
}
