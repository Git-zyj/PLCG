/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151768
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
    var_10 ^= var_1;
    var_11 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)126)) ? (-8519871952542191900LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((long long int) var_1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)197)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((long long int) 1098169857419664719LL));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_8)))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (var_8))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) min(((unsigned short)23978), (var_7)));
                        arr_15 [i_0] [i_1] [i_1] [(unsigned char)18] = ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)2)))))))));
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_5] [i_2] [i_5] [i_5] = ((/* implicit */short) var_3);
                            var_16 = ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_4));
                        }
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                            var_18 = ((/* implicit */long long int) var_3);
                            var_19 -= ((/* implicit */unsigned long long int) ((long long int) (unsigned char)197));
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [i_7] = ((long long int) ((unsigned char) var_4));
                        }
                        arr_28 [(unsigned short)13] [i_5] [i_2] [10ULL] = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)171)))) & (((/* implicit */int) ((unsigned char) (signed char)-126))))));
                        var_20 |= ((/* implicit */unsigned short) ((signed char) (unsigned char)173));
                    }
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */short) ((long long int) ((short) var_7)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17798746449115984041ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned long long int) ((signed char) min((var_0), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) : (1LL))))));
                                var_23 &= ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) var_4)) / (var_8))));
                                var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)2)) ? (var_8) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-25)))))));
                                arr_38 [i_0] [i_1 + 1] [(unsigned short)22] [12LL] [i_9] &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)466))) > (((unsigned long long int) var_3))))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_26 ^= var_7;
}
