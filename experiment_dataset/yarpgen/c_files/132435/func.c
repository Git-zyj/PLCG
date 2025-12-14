/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132435
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_0 [i_0 + 2]))))) != ((-(arr_1 [i_0])))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)-68))));
        var_16 = ((/* implicit */unsigned int) (+(((arr_2 [i_0]) ? (((/* implicit */int) min(((signed char)-68), (((/* implicit */signed char) var_3))))) : ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((6655664938615875989ULL) - (6655664938615875967ULL)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) 0ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (unsigned short)60673)) - (60650))))))));
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 3]))) - (arr_1 [i_2])));
        }
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_12 [i_3] [i_3] = ((/* implicit */_Bool) var_0);
            arr_13 [i_1 + 1] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0U))));
            var_17 = ((/* implicit */unsigned int) ((_Bool) arr_7 [i_1 - 2]));
        }
        arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_10 [2U] [i_1] [2U])))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49263)))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned int) ((_Bool) var_3));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) : (0U)));
                var_19 = ((/* implicit */unsigned short) (-(var_5)));
            }
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) -2475051545774533437LL);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7 - 1] [i_4 - 1] [i_1 - 2]))) * (arr_18 [i_7 - 1] [i_4 - 1] [i_1 - 2])));
                        arr_29 [i_1] [i_4] [i_6] [i_4] = (+(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (4294967295U))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-93)) * (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_18 [i_1 + 2] [i_1] [i_1])) ? (arr_28 [i_1] [i_1] [(signed char)6] [(signed char)6] [(signed char)6] [i_1]) : (((/* implicit */int) var_10))))));
    }
    var_23 = ((/* implicit */unsigned char) (~((+(359745060U)))));
    var_24 = (!((!(((/* implicit */_Bool) 771265102)))));
}
