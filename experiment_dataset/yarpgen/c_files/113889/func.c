/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113889
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (signed char)56);
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [(unsigned short)4] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_3]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [9] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)119)) ? (max((((/* implicit */unsigned int) arr_5 [i_3])), (4095U))) : (((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)40397), (((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_1 - 1] [i_0]))))) | (((/* implicit */int) var_14)))))));
                        arr_13 [i_0] [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) max((min((2097088U), ((~(4294963200U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50254)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_16)) & (var_1)));
        var_18 = (unsigned short)49152;
        arr_18 [i_4] [4] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) 4294967293U)) | (6993895782267143814ULL)))));
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (var_4))), (((/* implicit */long long int) arr_7 [i_5] [i_5] [i_5]))));
        arr_24 [i_5] = ((/* implicit */signed char) arr_19 [i_5]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) var_6);
        var_19 = ((/* implicit */unsigned char) arr_26 [i_6]);
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
    {
        arr_32 [i_7] = ((/* implicit */_Bool) (+(arr_30 [i_7])));
        var_20 = arr_30 [i_7];
    }
}
