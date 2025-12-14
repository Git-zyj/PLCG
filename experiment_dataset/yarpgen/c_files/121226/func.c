/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121226
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
    var_14 = ((/* implicit */long long int) max(((short)0), ((short)6)));
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (short)7);
                                arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
                                arr_11 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)10] [i_2])) ? (var_6) : (((/* implicit */int) var_5))))) ? (arr_5 [i_4] [i_1] [i_1] [i_0]) : (arr_5 [13LL] [i_1] [i_2] [i_2]))) : ((-(((/* implicit */int) (signed char)71))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] = ((((/* implicit */_Bool) (-(arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((-1058181107) <= (((/* implicit */int) (signed char)-68))))) : ((~(((var_12) & (((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 4; i_6 < 13; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                            {
                                arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) (-((~(arr_7 [i_6] [i_6 - 1] [i_1] [i_6 - 3] [(unsigned short)4] [3LL])))));
                                arr_22 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_18 [i_1]);
                                var_17 += ((/* implicit */signed char) arr_0 [(unsigned short)4]);
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */long long int) (~(arr_20 [(signed char)1] [i_6] [(signed char)1] [i_6 + 1] [i_6 - 3])));
                                arr_25 [i_1] [i_1] [i_1] [6] [9] = ((/* implicit */int) (short)32754);
                            }
                            /* LoopSeq 1 */
                            for (long long int i_9 = 1; i_9 < 12; i_9 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_6 - 4] [i_6 + 1] [i_9 + 1] [i_9 - 1]))))) / (max((var_1), (((/* implicit */long long int) arr_17 [i_6 - 3] [i_6 - 4] [i_9 + 2] [i_9 - 1]))))));
                                var_20 = ((/* implicit */long long int) ((var_11) >> (((max((arr_20 [8ULL] [i_6 - 1] [i_6] [i_6] [i_6 - 4]), (((/* implicit */int) arr_17 [i_6] [i_6 - 1] [(unsigned short)6] [i_6 + 1])))) - (1340938753)))));
                            }
                            var_21 -= var_2;
                            arr_30 [i_0] [(_Bool)1] [i_0] [i_1] = ((/* implicit */int) (~(983040LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
