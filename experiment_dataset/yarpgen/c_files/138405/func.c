/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138405
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_15))));
                        var_17 ^= ((/* implicit */_Bool) max(((-(max((((/* implicit */unsigned int) (_Bool)1)), (252250123U))))), (((/* implicit */unsigned int) var_0))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-9223372036854775807LL - 1LL)))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)142))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_6 [i_2 + 2] [i_3 - 1] [i_1 - 3])))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) var_1);
        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) max((((short) max((var_0), (var_0)))), (max((((/* implicit */short) arr_4 [i_0] [i_0])), (arr_6 [i_0] [i_0] [i_0])))));
        var_22 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((var_5) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (arr_9 [i_0] [i_0])))));
    }
    for (signed char i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))))));
        arr_15 [i_4 - 2] = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 1])) >> (((((/* implicit */int) (signed char)-116)) + (117))))) >> (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_4 + 1])), ((signed char)-105))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_26 [i_4] [i_5] [i_6] [i_4] [i_7] [i_6] = (signed char)56;
                        var_23 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((+(arr_22 [i_4]))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))))))));
                        var_24 = arr_24 [i_4 - 1] [i_5] [i_5] [i_7];
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 2; i_8 < 18; i_8 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_23 [i_8 - 1] [i_8] [i_8 - 1] [i_8]))));
        arr_29 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((((/* implicit */int) (signed char)94)) <= (arr_21 [i_8]))), (((((/* implicit */int) (signed char)42)) >= (((/* implicit */int) (_Bool)1))))))) * ((((~(((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8])))) | ((+(((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8]))))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) var_13))))) == (((((var_12) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_8]))))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 3; i_9 < 15; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        var_27 = ((/* implicit */signed char) arr_34 [i_8]);
                        var_28 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_39 [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [i_8]))))) | (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 3444130055U))))))), (((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), (arr_34 [i_8])))) >= (max((arr_21 [i_8]), (8257536))))))));
    }
    for (signed char i_12 = 2; i_12 < 18; i_12 += 3) /* same iter space */
    {
        var_29 ^= ((/* implicit */short) (_Bool)1);
        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_42 [14LL] [i_12 - 2])))));
    }
    var_31 = ((/* implicit */unsigned long long int) var_14);
}
