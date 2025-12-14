/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100004
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((arr_4 [i_0] [i_0 + 1] [i_0]) ? (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0])))) : (((arr_4 [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                arr_10 [i_0 - 3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                arr_11 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (arr_5 [i_0] [i_0])))) && (((/* implicit */_Bool) var_0))));
                arr_12 [i_0 + 2] [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)10] [i_0]))) : (arr_7 [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0]) : (15979083147585124309ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (1953461901) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */int) arr_2 [i_0]))))) ? (max((((/* implicit */unsigned long long int) arr_1 [9LL] [i_2])), (arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    arr_15 [i_3] [i_0] [i_2] [i_0] [i_0 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) min((1035773406), (((/* implicit */int) (_Bool)1))))))));
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) (-(725630283)));
                    /* LoopSeq 2 */
                    for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        arr_19 [i_0] [i_0] [5] [i_3] [i_1] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25036))) : (arr_7 [i_0]))), ((-(arr_7 [i_0])))));
                        arr_20 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] = ((/* implicit */short) arr_18 [i_0] [(unsigned short)4] [i_3 + 1] [i_3] [i_0]);
                        arr_21 [i_0] [i_0] [i_0] [10ULL] [i_0] = ((/* implicit */unsigned int) arr_17 [(unsigned short)10] [(unsigned short)10] [i_0 - 2] [i_0] [i_0]);
                        arr_22 [i_0] [i_1] [i_2] [i_3 + 1] [10U] = ((/* implicit */long long int) max((min((368920424), (((/* implicit */int) arr_9 [i_3] [i_1] [i_0 - 3])))), (((((/* implicit */int) arr_9 [i_4] [i_1] [i_4])) + ((((_Bool)0) ? (((/* implicit */int) arr_17 [7ULL] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_0]))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_25 [i_0 + 1] [i_0] [2U] [i_0] [i_0 - 3] = (_Bool)1;
                        var_14 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_8 [i_3 + 1] [i_3 + 1] [i_0 + 1])))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_31 [i_0] [i_6] [i_0] = ((short) (_Bool)1);
                arr_32 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_14 [i_0 + 2]))) ? (max((arr_5 [i_0] [i_0]), (((/* implicit */int) arr_23 [i_0 - 3] [i_0] [i_6] [i_6] [i_7])))) : (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_0] [i_0])), (arr_14 [i_0 - 1]))))));
            }
            var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_23 [i_0] [i_6] [i_6] [i_0 - 1] [(unsigned short)4])) ? (((/* implicit */int) arr_23 [i_6] [(unsigned char)1] [(unsigned char)1] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_23 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_6] [i_6])))), (((((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_6])) << (((8815440547865544873ULL) - (8815440547865544866ULL)))))));
        }
    }
    for (int i_8 = 1; i_8 < 20; i_8 += 3) 
    {
        var_16 = arr_33 [i_8 + 3] [i_8];
        arr_37 [i_8] [i_8] = ((/* implicit */unsigned char) (~(356202306)));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 2147483648U)) * (arr_35 [5] [i_8])))))) ? (((((arr_34 [i_8] [i_8 + 2]) ? (arr_33 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27626))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((arr_34 [i_8] [i_8 + 2]) ? (min((922158704U), (((/* implicit */unsigned int) (short)10830)))) : (((/* implicit */unsigned int) -725630283)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_6);
}
