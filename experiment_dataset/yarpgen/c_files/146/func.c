/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146
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
    var_16 = ((/* implicit */unsigned short) (signed char)-75);
    var_17 = min((max((var_5), (((/* implicit */unsigned char) max(((signed char)-79), ((signed char)-75)))))), (((/* implicit */unsigned char) var_1)));
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] &= ((/* implicit */unsigned short) 3567651960229720789ULL);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                                arr_15 [i_1] [5ULL] [i_2] [(signed char)10] [5ULL] = ((/* implicit */short) ((var_0) <= (((/* implicit */int) ((((((/* implicit */_Bool) 15648357401746671299ULL)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 3] [i_1] [i_4])) : (var_15))) == (((/* implicit */unsigned long long int) ((unsigned int) 6172197425232623220ULL))))))));
                            }
                        } 
                    } 
                    var_20 ^= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_2] [(short)8] [i_0] [i_0] [(_Bool)1]))))) : (arr_8 [i_0] [i_0] [i_2] [(short)14])))), (14879092113479830811ULL));
                    var_21 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_2 [i_2])))));
                    arr_16 [10] [i_1 - 2] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((737969012), (((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_0] [i_0])))) ^ (min((var_15), (10321243526976798386ULL))))) : (var_8))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_7))));
                        arr_29 [i_6] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13669603985169866606ULL)) ? (((/* implicit */int) arr_22 [i_8] [i_6])) : (((/* implicit */int) var_1))));
                        var_24 = ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]);
                    }
                } 
            } 
        } 
        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_17 [i_5]))));
        var_26 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5])) > (arr_23 [i_5] [i_5] [i_5] [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))) : (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
}
