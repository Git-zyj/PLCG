/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130005
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
    var_15 = ((/* implicit */signed char) (_Bool)1);
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1] [i_2 - 2]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14652)))) : (((/* implicit */int) ((var_6) > (var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) : (((arr_2 [i_2 - 2] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_17 = ((/* implicit */long long int) var_10);
                        arr_13 [i_0] [i_1] [i_3] [i_3 + 2] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_5)))));
                        arr_14 [i_3] = ((/* implicit */short) min(((+(min((((/* implicit */unsigned long long int) (_Bool)0)), (var_0))))), (((/* implicit */unsigned long long int) var_8))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        arr_24 [i_0 + 1] [i_0 + 1] [i_6 + 1] = ((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_6 + 1]);
                        arr_25 [i_0] [12U] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
                        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_23 [i_0 - 1] [i_5]), ((unsigned short)22))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            arr_28 [i_0 - 1] [i_7 + 1] = ((/* implicit */unsigned int) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_29 [i_0] [i_7 + 2] [i_0] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        }
        var_19 = var_0;
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = var_4;
        var_20 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
        arr_33 [i_8] [i_8] = ((/* implicit */int) var_4);
    }
    for (unsigned short i_9 = 3; i_9 < 12; i_9 += 1) 
    {
        arr_36 [i_9] = ((/* implicit */signed char) var_14);
        arr_37 [i_9 + 1] [i_9] = ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_9 - 1])) : (((/* implicit */int) (signed char)0)))));
        var_21 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_23 [i_9] [i_9])))), (((/* implicit */int) (!((_Bool)1)))))) * (((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
    }
}
