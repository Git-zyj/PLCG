/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141791
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), (min((-1813629544), ((+(((/* implicit */int) (unsigned short)27773))))))));
        var_20 = ((/* implicit */unsigned short) (~((+(((int) -1813629544))))));
        var_21 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */unsigned long long int) var_3)) & (arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 ^= ((/* implicit */int) (-(arr_3 [i_1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            arr_6 [i_1] [i_1] [6] = ((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_2 + 1]));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */int) arr_10 [i_4] [i_3] [i_2 + 2] [i_1]);
                    arr_11 [i_1] [i_1] [i_1] [i_4] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_4]))))));
                    var_24 = (~(((((/* implicit */_Bool) -1813629544)) ? (((/* implicit */unsigned long long int) -1813629563)) : (18446744073709551615ULL))));
                    arr_12 [(unsigned short)6] [i_1] &= ((/* implicit */unsigned short) 0ULL);
                    var_25 = ((/* implicit */unsigned short) arr_2 [6] [6]);
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    var_26 = (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])) != (((/* implicit */int) (unsigned short)14003))))));
                    var_27 = (+((+(((/* implicit */int) (unsigned short)124)))));
                    var_28 = ((/* implicit */unsigned short) ((4396438719891216366ULL) / (((/* implicit */unsigned long long int) -233664830))));
                }
                var_29 ^= ((/* implicit */int) (-(17124799187653776402ULL)));
                var_30 = arr_9 [i_1] [i_1] [8] [(unsigned short)7];
                arr_16 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_0))));
            }
            for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
            {
                arr_19 [7] [7] = ((/* implicit */unsigned short) (+(18446744073709551609ULL)));
                var_31 = (+(249456355));
                var_32 = arr_13 [i_6] [i_2] [(unsigned short)5] [i_6];
                var_33 = ((unsigned long long int) arr_7 [i_1] [i_2] [i_1]);
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_24 [i_1] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_10 [i_1] [i_7] [i_7] [i_7]))))));
            var_34 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))));
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
            var_35 = ((/* implicit */unsigned short) -1969307382);
        }
        var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [1ULL] [i_1] [2ULL] [8]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 3; i_8 < 24; i_8 += 4) 
    {
        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
        {
            {
                var_37 = ((/* implicit */unsigned short) min((arr_26 [i_8] [i_9]), (((/* implicit */int) var_15))));
                var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_8] [i_9]))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)30)), (2050139211)));
}
