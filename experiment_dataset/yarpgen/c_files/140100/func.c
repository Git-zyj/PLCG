/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140100
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */int) var_5);
            var_13 = ((/* implicit */unsigned long long int) (-(min((-2006327455202239613LL), (((/* implicit */long long int) 1069685241U))))));
            arr_6 [i_1] [i_1] [(signed char)11] = ((/* implicit */int) arr_2 [i_0]);
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1069685258U)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) 1694168915));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    arr_15 [(unsigned short)3] [i_2] = ((/* implicit */unsigned long long int) (short)32767);
                    arr_16 [i_0] [i_2] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) < (((unsigned long long int) (signed char)-125))));
                }
                var_14 = ((/* implicit */unsigned char) (~(3225282054U)));
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1003164391)) ? (3225282038U) : (((/* implicit */unsigned int) 1003164389))));
            var_15 = ((/* implicit */signed char) arr_18 [i_0]);
            arr_21 [i_0] [i_0] = ((/* implicit */short) var_8);
        }
        arr_22 [(short)0] = ((((/* implicit */_Bool) (signed char)20)) || (((/* implicit */_Bool) (unsigned char)81)));
        arr_23 [(_Bool)1] [i_0] = ((/* implicit */int) (unsigned char)15);
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 24; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 222784449591735129ULL))));
        var_16 = 9223372036854775807LL;
        arr_27 [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)7205))));
    }
}
