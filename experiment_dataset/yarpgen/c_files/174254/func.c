/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174254
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */int) (short)3169)) > (((/* implicit */int) (unsigned short)50140)));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((signed char) arr_1 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_7 [i_2])))));
                    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (!(((_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))))))));
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1]))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51085))) | (var_0))))));
                    var_11 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)3170), (((/* implicit */short) (signed char)(-127 - 1)))))), ((-(((/* implicit */int) var_7))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_20 [i_1] [(_Bool)0] [i_5] = ((/* implicit */signed char) arr_17 [i_1]);
                    arr_21 [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_12 *= ((/* implicit */unsigned short) ((unsigned long long int) 1879048192));
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_6 [i_5] [i_4] [(signed char)6]);
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) < (((/* implicit */int) (unsigned short)51084))))), (((arr_11 [i_6] [i_6] [i_6] [i_6]) ? (-1879048197) : (-1461551602)))))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_13 = ((/* implicit */_Bool) var_4);
            arr_29 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (-(min((((long long int) (short)-3171)), (((/* implicit */long long int) ((unsigned char) arr_5 [i_6])))))));
            arr_30 [i_6] [i_7] = ((/* implicit */signed char) arr_26 [i_7] [i_6] [i_6]);
        }
        var_14 = ((/* implicit */int) min((var_14), (var_6)));
        arr_31 [i_6] [i_6] = ((((/* implicit */int) arr_14 [i_6])) + (((/* implicit */int) arr_14 [i_6])));
    }
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_15 = ((short) arr_14 [i_10]);
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_16 -= ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_27 [i_8] [i_9] [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)24547)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55994)))))))) | (min((arr_41 [i_10]), (var_0))));
                        var_17 = ((/* implicit */short) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) (short)-3170)) + (3188))) - (18)))));
                    }
                }
            } 
        } 
    } 
}
