/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11530
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
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (((max((((/* implicit */unsigned int) var_5)), (862717125U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4002172690U)) || (((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((arr_2 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24845))))) ? (((((/* implicit */_Bool) (signed char)76)) ? (-9121682254653194559LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (_Bool)1)), (187449269U))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min(((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)24832)))))), (max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1325989297) : (((/* implicit */int) (unsigned short)24802)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1)))) ? (((((/* implicit */int) (unsigned short)40685)) ^ (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) arr_1 [17]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33839)) || (((/* implicit */_Bool) arr_3 [i_1])))))))) : (-6261767463954424198LL)));
        var_16 = ((/* implicit */unsigned int) ((((max((-6261767463954424199LL), (((/* implicit */long long int) var_6)))) / (((((/* implicit */_Bool) (unsigned char)229)) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_3)))))) / (((/* implicit */long long int) 1142089225U))));
        var_17 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_8)))))))) * (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (var_2))), (((/* implicit */unsigned long long int) ((int) var_7)))))));
        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) max(((-(-1LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) -1436803177)), (4294967287U))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1325989297)) > (((((/* implicit */_Bool) -1325989289)) ? (2229624964U) : (954513008U)))))) : (((/* implicit */int) var_12))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            var_19 = ((short) arr_0 [i_2]);
            arr_12 [i_2] = ((/* implicit */int) ((signed char) var_9));
        }
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((var_3) & (arr_7 [i_2]))) : (min((arr_7 [i_2]), (((/* implicit */unsigned int) arr_1 [i_2 + 1]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (unsigned char i_5 = 4; i_5 < 18; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)24816)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5364771772805387760LL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_15 [i_5] [i_2] [i_2 + 2]))))) : ((-(1768891855U)))))));
                    var_22 = ((/* implicit */unsigned char) (unsigned short)40733);
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        arr_21 [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-2580931989279818078LL) ^ (((/* implicit */long long int) ((var_7) / (((/* implicit */int) var_9))))))))));
                        arr_22 [i_2] [(short)10] [i_5 + 1] [i_2] = ((/* implicit */long long int) ((signed char) min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3443))))), (((/* implicit */unsigned long long int) ((arr_7 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        arr_23 [i_2 - 1] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(4294967295U))))))), (((((/* implicit */_Bool) (short)-31380)) ? (((/* implicit */unsigned long long int) ((4294967269U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44027)))))) : (((((/* implicit */_Bool) 1142089198U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (12855513588831033037ULL)))))));
                    }
                    for (short i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        var_23 ^= ((/* implicit */unsigned char) var_12);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [7LL] [i_2])), ((unsigned short)63488)))) : (var_5)))) * (max((((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_2 [13]))), (((/* implicit */long long int) min((14757781), (((/* implicit */int) (unsigned short)63495)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_2] [i_2] [i_4] [14U] [i_7 - 1] [i_8] = ((/* implicit */long long int) (+((+((-(15U)))))));
                            arr_29 [i_2] [i_2] [i_5 + 1] [i_7 - 2] [i_7] [i_8 + 2] = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) min((var_7), (((/* implicit */int) (short)-32765))))), (((((/* implicit */_Bool) 4354036269695685203ULL)) ? (((/* implicit */long long int) 507763265U)) : (var_1)))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((min((arr_24 [i_2] [i_4] [i_2 + 2] [i_2 + 2]), (((/* implicit */long long int) arr_19 [i_2] [i_2 - 1] [i_2] [(unsigned char)4] [i_2])))) > (((/* implicit */long long int) (-(min((4293880110U), (3326866546U))))))));
                            var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) ((signed char) (short)-10710)))), (15655147881402695301ULL)));
                        }
                    }
                    var_27 = ((/* implicit */int) (signed char)-25);
                    var_28 = ((/* implicit */_Bool) min((((unsigned int) arr_17 [i_2 + 1] [i_2 + 2])), (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 356117276)) || (((/* implicit */_Bool) arr_7 [i_2]))))) - (1))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) (((_Bool)1) ? (3540718379U) : (arr_7 [i_10])))) ? (((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((((/* implicit */int) (short)-3584)) + (((/* implicit */int) (_Bool)1))))))));
        arr_34 [i_10] [11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1334074180)) ? (arr_2 [i_10]) : (((/* implicit */long long int) var_7))))) ? (arr_19 [i_10] [i_10] [i_10] [(short)12] [(short)18]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [0] [i_10])) ? (((/* implicit */int) arr_25 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_17 [i_10] [i_10])))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        var_30 = ((/* implicit */long long int) 3845099965U);
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-((~(arr_0 [i_11]))))))));
        var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-32765))));
    }
}
