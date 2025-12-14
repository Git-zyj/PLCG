/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137035
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) var_11));
            arr_7 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) (unsigned char)235)));
            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0]));
            arr_13 [i_0] = ((/* implicit */signed char) (+(((247843995355278691ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            arr_14 [i_0] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
            var_16 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17))));
        }
        for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((var_5) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))))) ^ (((/* implicit */long long int) arr_18 [i_3 - 4])))));
                            var_18 ^= ((/* implicit */signed char) ((unsigned int) arr_10 [i_0] [i_5]));
                            var_19 -= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) - (7579225621094419596ULL))))))), (min((((((/* implicit */int) arr_4 [i_0] [i_0])) ^ (((/* implicit */int) var_10)))), ((-(((/* implicit */int) (signed char)82))))))));
                        }
                    } 
                } 
            } 
            arr_26 [i_0] = ((/* implicit */unsigned int) var_7);
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_29 [i_0] [i_0] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0] [i_7]))));
            var_20 = ((/* implicit */_Bool) ((unsigned short) arr_23 [i_0]));
        }
        arr_30 [i_0] = ((/* implicit */short) (((+(arr_1 [i_0] [i_0]))) - ((((~(((/* implicit */int) var_3)))) - (((/* implicit */int) ((short) 4294967295U)))))));
        arr_31 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((397759612) | (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)30)))))))));
        var_21 = ((/* implicit */unsigned char) min((((int) arr_19 [i_0] [i_0] [i_0])), (((/* implicit */int) min((arr_20 [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0]))))));
        var_22 = ((/* implicit */_Bool) arr_23 [i_0]);
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(var_13)));
        arr_35 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_20 [i_8] [i_8] [i_8]))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)8))));
        var_24 -= ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_9] [i_9]))));
    }
    var_25 = ((/* implicit */unsigned short) 18215486534747732800ULL);
    var_26 = ((/* implicit */unsigned long long int) ((int) var_7));
    var_27 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
}
