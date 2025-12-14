/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126081
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((arr_1 [i_0]) / (var_9))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_14))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    arr_11 [i_0] [i_0] [3U] [i_3] = ((/* implicit */long long int) (unsigned char)83);
                    arr_12 [(signed char)14] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)176))));
                }
                arr_13 [i_0] [i_1] [i_2] &= var_1;
                arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_0)) != (((arr_7 [i_0] [i_1] [i_1]) | (var_9)))));
                /* LoopSeq 3 */
                for (long long int i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)-17356)) | (((/* implicit */int) var_4))))));
                    arr_18 [i_4] [i_2] [i_1] [(short)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4623477693172819279ULL))));
                    arr_19 [i_0] [(signed char)18] [i_2] [i_4 - 1] = ((/* implicit */unsigned short) var_2);
                }
                for (long long int i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_2] [i_5 - 1] = ((/* implicit */unsigned char) (+(3448738505537955202ULL)));
                    arr_23 [i_1] &= ((/* implicit */long long int) ((arr_15 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1]) >= (((/* implicit */unsigned long long int) var_3))));
                    arr_24 [i_1] [i_1] &= ((/* implicit */unsigned char) var_12);
                    arr_25 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7))));
                }
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    arr_29 [i_0] [i_0] = ((/* implicit */signed char) ((((3448738505537955201ULL) * (14998005568171596420ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    arr_30 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)168))));
                }
                arr_31 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) (!(var_13))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                arr_34 [i_7] [(signed char)8] [(signed char)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_33 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 3448738505537955202ULL)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)13])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) var_7)))));
                arr_35 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))));
                arr_36 [(unsigned char)19] [(unsigned char)19] = ((/* implicit */unsigned long long int) var_9);
            }
        }
        arr_37 [i_0] &= ((/* implicit */short) (~((~(((/* implicit */int) var_2))))));
    }
    var_15 &= (!(((/* implicit */_Bool) var_9)));
    var_16 = ((/* implicit */signed char) 74698923U);
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(var_0)))) && (((/* implicit */_Bool) min((var_0), (((/* implicit */int) (short)-17356))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_8)))))) : (((((/* implicit */int) var_4)) ^ ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)104))))))));
}
