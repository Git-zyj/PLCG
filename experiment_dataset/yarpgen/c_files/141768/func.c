/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141768
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
    var_15 = ((/* implicit */unsigned int) (unsigned char)129);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) 0ULL);
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)83)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)50))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_4))));
        arr_15 [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1441204439U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (1632929047276032723ULL)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) var_10)), (var_2))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))))))));
        var_22 = max((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */_Bool) (unsigned short)25581)) ? (2418668785U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))))), (((/* implicit */unsigned int) var_13)))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        arr_30 [7LL] [2ULL] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) (unsigned short)46053);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((var_14), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 262143LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_10))))))))));
                        var_24 = ((/* implicit */long long int) max((((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) (_Bool)1);
        arr_33 [i_9] &= ((/* implicit */signed char) max((((((((/* implicit */int) (signed char)-45)) + (2147483647))) << (((((/* implicit */int) (unsigned char)180)) - (180))))), (((/* implicit */int) var_1))));
    }
    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (1682323272U))))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (min((((/* implicit */unsigned long long int) var_12)), (var_2)))));
    }
}
