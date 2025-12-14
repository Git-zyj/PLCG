/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107631
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_16))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)193), (((/* implicit */unsigned char) (signed char)-60))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min(((short)16320), (((/* implicit */short) arr_2 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) arr_2 [5ULL])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [4U])))) : (10938601494293889584ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_5)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [(unsigned char)5] [(short)1])) ? (var_16) : (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_17)))))))) == ((-(arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned long long int) (signed char)32);
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) max(((((+(((/* implicit */int) arr_5 [i_1])))) << (((((/* implicit */int) arr_5 [i_1 + 1])) - (19016))))), ((-(((/* implicit */int) (unsigned short)3415))))));
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 5U)) ? (((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) (unsigned short)29277)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_5 [i_1 + 1]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_9 [i_2] [(signed char)20] = ((/* implicit */unsigned char) 3798462651U);
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    var_24 += ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) arr_10 [i_2] [i_2]))), (arr_7 [i_4] [i_3])));
                    var_25 = ((/* implicit */int) (!((_Bool)1)));
                    var_26 += ((unsigned short) 11956038117019856884ULL);
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 24; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                {
                    var_28 = ((/* implicit */signed char) min(((~(min((4176700431419429340ULL), (((/* implicit */unsigned long long int) (short)-5)))))), (((/* implicit */unsigned long long int) var_4))));
                    var_29 = ((/* implicit */unsigned char) arr_17 [(_Bool)1] [i_5]);
                    arr_23 [i_5] [i_6 + 1] [(signed char)19] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_6 + 1])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (unsigned short)59543))))));
                }
            } 
        } 
        arr_24 [8U] = ((/* implicit */short) (-(((((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) % (((/* implicit */int) (unsigned short)59543))))));
    }
    var_30 = ((/* implicit */short) var_0);
}
