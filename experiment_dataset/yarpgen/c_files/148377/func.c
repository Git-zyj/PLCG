/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148377
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [6ULL])) : (((/* implicit */int) (unsigned char)133))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (7115244681742725555ULL))))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [(short)10])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) var_0))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_2))) + ((+(((/* implicit */int) arr_0 [i_1])))))))));
        var_15 = ((/* implicit */_Bool) arr_0 [i_1]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) var_1)) >= (var_9))));
                    var_17 = (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_2 [i_3])) : (var_8))));
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((1634566709) + (((/* implicit */int) (short)9566)))) & (-1634566711)));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((var_4) >= (arr_3 [i_4 - 1]))))));
                }
            } 
        } 
        var_19 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1634566728)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6143))) : (1557530635938659971LL)))) - (var_8));
        /* LoopNest 3 */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((var_9) == ((-(arr_24 [i_6] [i_5] [i_2])))));
                        var_21 = ((/* implicit */unsigned short) arr_12 [i_2] [i_5 - 2] [i_5 - 2] [i_2]);
                        var_22 = ((/* implicit */short) arr_2 [i_2]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_7 [i_8] [i_8] [i_8]), (arr_7 [i_8] [i_8] [2U]))))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned int) min((((min((var_1), (((/* implicit */long long int) var_5)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (arr_1 [i_8]))))))), (((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) > (var_7)))), ((signed char)-70))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) min((var_0), (((/* implicit */unsigned int) (signed char)-66)))))))))));
    }
    var_25 = ((/* implicit */int) var_4);
    var_26 = ((/* implicit */unsigned long long int) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
