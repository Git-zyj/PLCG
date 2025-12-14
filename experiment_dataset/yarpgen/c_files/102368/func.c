/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102368
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
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)1)))) % (max((((/* implicit */unsigned long long int) (unsigned short)40199)), (var_7)))));
    var_14 = ((/* implicit */int) (unsigned char)126);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (var_4)))) ? (-433347095) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (unsigned short)40199))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (min((((/* implicit */unsigned long long int) -1190086816)), (var_7)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (arr_4 [i_3 - 4])));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_16 [i_3 - 3] [(unsigned char)16] [i_4] [i_5] = ((/* implicit */unsigned short) (~(11ULL)));
                    var_19 = ((/* implicit */int) max((var_19), ((((~(((/* implicit */int) arr_15 [(unsigned char)15] [i_4] [i_3])))) - ((+(((/* implicit */int) var_6))))))));
                    arr_17 [i_3] [(unsigned char)6] [i_5 - 2] [i_4 + 1] = ((/* implicit */unsigned char) ((var_0) >= (((/* implicit */int) ((((/* implicit */int) (signed char)14)) == (2147483647))))));
                    arr_18 [i_3] [1] [(signed char)4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */int) arr_2 [i_3 - 4] [i_4 - 3])) : (((/* implicit */int) ((signed char) arr_9 [i_3] [i_3 + 1] [i_3]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_5 [i_3 + 3] [i_6] [i_6]);
                    var_21 *= var_2;
                    var_22 -= ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                arr_30 [i_6] [i_9] = ((/* implicit */unsigned char) var_11);
                                arr_31 [i_3 + 1] [i_3 + 1] [i_3] [i_7] [i_8] [i_3 + 1] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_3] [i_7] [i_9]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [i_3 + 2] = ((/* implicit */signed char) ((((int) var_4)) != ((+(((/* implicit */int) (unsigned short)25335))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned char) var_2)))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 18; i_10 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((short) -1797622047)))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((short) arr_35 [i_10 + 2] [i_10 - 1])))));
    }
    for (unsigned char i_11 = 3; i_11 < 11; i_11 += 1) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((int) ((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_10)))) ^ (((/* implicit */int) (short)-29365))))))));
        arr_38 [i_11 + 2] [(unsigned short)3] = ((/* implicit */signed char) arr_27 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [(unsigned char)1]);
        arr_39 [i_11] = ((/* implicit */int) (unsigned char)29);
    }
}
