/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162587
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
    var_11 = ((/* implicit */long long int) (_Bool)1);
    var_12 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) -949941536296023545LL)))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((-4045382786063826548LL) != (((/* implicit */long long int) var_10))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (185)))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((unsigned int) (!(((var_2) != (arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */unsigned int) var_3);
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */int) var_3);
                        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-4045382786063826548LL), (9223372036854775804LL))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) ^ (arr_0 [i_1] [i_2 - 1])));
                        var_18 = ((/* implicit */unsigned char) -949941536296023545LL);
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) arr_4 [i_1]);
                        arr_17 [i_3] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) != (arr_6 [i_1] [i_2 + 2] [i_6])))));
                        var_20 = ((/* implicit */_Bool) arr_8 [i_6]);
                        arr_18 [i_2] = ((/* implicit */unsigned short) 1883206283518417584LL);
                        var_21 = ((/* implicit */unsigned int) arr_0 [19LL] [i_1]);
                    }
                    arr_19 [i_2] = ((/* implicit */signed char) arr_3 [(_Bool)1] [(_Bool)1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_16 [i_1] [i_1] [i_7 - 3] [i_7] [i_1] [2U]), ((signed char)-100)))), (arr_8 [i_7 + 1])));
                    arr_24 [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) 2167113554U)) ? (var_1) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 287747724)) >= (var_6)))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 66571993088LL))))), (min((arr_10 [i_8] [i_8] [i_7] [(signed char)7] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5))))))));
                    arr_25 [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((-1057399277) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [1ULL] [i_7] [1ULL] [i_1]))) & (arr_21 [i_1] [17])))))))));
                }
            } 
        } 
    }
}
