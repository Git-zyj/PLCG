/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151231
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+((-(-1)))))) + ((+(min((((/* implicit */long long int) var_17)), (var_7)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_5 [8ULL] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11)))) ? (arr_4 [i_1 - 1] [i_1] [i_1 + 1]) : (arr_4 [i_0] [i_0] [i_0])));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((var_7) > (((/* implicit */long long int) var_8)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_1 - 1] [11ULL] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-108)) / (((/* implicit */int) (_Bool)1))));
                        arr_13 [i_0] [i_1 - 1] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57990)) | (arr_11 [i_0] [i_1])))) <= (((((/* implicit */_Bool) (unsigned short)35518)) ? (var_3) : (arr_9 [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            arr_17 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            arr_18 [i_0] [(_Bool)1] = ((long long int) 3214556580544794567LL);
                            arr_19 [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_9 [i_0])))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            arr_23 [i_0] [i_2] [i_5] = ((/* implicit */unsigned long long int) (+(((int) var_1))));
                            arr_24 [i_5] [i_3] [i_2] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [i_1] [(signed char)6] [i_3] [i_5] [i_1 - 1])) ^ (((/* implicit */int) arr_22 [i_0] [i_2] [i_2] [i_3] [i_5] [i_1 - 1]))));
                            arr_25 [i_5] [i_3] [i_2] = ((/* implicit */_Bool) var_8);
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_30 [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((int) arr_15 [i_0] [i_0] [i_7] [i_7] [i_6] [i_7])));
                    arr_31 [10LL] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0]))), ((~(((((/* implicit */int) (unsigned short)14206)) >> (((726451714) - (726451702)))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) var_10);
}
