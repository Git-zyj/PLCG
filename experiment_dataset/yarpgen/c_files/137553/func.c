/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137553
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)67)) << (((16726711592112769762ULL) - (16726711592112769746ULL)))));
        var_21 = ((/* implicit */short) ((var_13) << (((((/* implicit */int) arr_1 [i_0])) + (20729)))));
        arr_2 [i_0] = ((/* implicit */long long int) ((4294967272U) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_15))))))));
        var_22 |= ((/* implicit */signed char) ((unsigned short) ((var_16) ? (var_10) : (((/* implicit */int) var_16)))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_23 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_18)) - (((/* implicit */int) (signed char)-26)))));
        var_24 = ((/* implicit */int) (+((+(arr_3 [i_1])))));
    }
    for (unsigned int i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (var_9))) * (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_2] [i_2]), (((/* implicit */unsigned char) var_16)))))) : (var_9)));
        arr_9 [i_2] = ((signed char) var_14);
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_12 [i_3])) >> (((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) var_10)))))));
                var_27 = ((/* implicit */_Bool) var_11);
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(664707000U)))) ? (3630260296U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114)))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_12))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 4; i_5 < 21; i_5 += 2) 
                {
                    arr_17 [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) var_17);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_30 *= ((/* implicit */unsigned int) var_18);
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-71)))) / (((3630260296U) / (664706984U)))))) ? (((/* implicit */int) ((unsigned short) var_0))) : ((-(arr_11 [i_5 + 3]))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (signed char)1))));
                    var_33 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_5)));
                    arr_26 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_4] [i_4] [i_4] [i_4] [i_8]))) + (1LL)));
                    arr_27 [8] [i_4] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_24 [i_3] [i_4] [i_4] [i_8])));
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */int) ((((/* implicit */int) (signed char)-26)) < (((/* implicit */int) var_16))))))))) != (2961997736U)));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_35 -= ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) (-(664706984U)))));
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_8))))) == (var_15))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_37 += var_15;
    var_38 = ((/* implicit */_Bool) var_7);
}
