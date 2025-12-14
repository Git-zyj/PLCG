/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119365
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15751))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_20 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_0]))))));
            var_21 ^= ((/* implicit */unsigned char) arr_1 [i_1]);
        }
        var_22 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15751))) >= (arr_0 [i_0]))))) % (min((arr_1 [i_0]), (arr_1 [i_0]))))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0])))))))));
    }
    for (int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_5 [i_2 + 1]))));
        var_25 = ((/* implicit */_Bool) arr_5 [i_2]);
        var_26 = ((/* implicit */long long int) max((var_26), ((-(arr_7 [i_2] [i_2 - 1])))));
        var_27 = ((/* implicit */signed char) 5586661298304184232ULL);
    }
    for (int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) max((((/* implicit */long long int) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (short)254))))), (((long long int) arr_7 [i_3 - 1] [i_3 + 1])))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))), (arr_17 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6])));
                        var_30 = ((/* implicit */unsigned long long int) ((arr_14 [i_6] [i_5] [i_3] [i_3] [i_3]) ? ((-(-9178719526109264794LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_22 [i_3 + 1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) min((((9223372036854775806LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3]))))), (((/* implicit */long long int) ((_Bool) var_5)))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_12))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) -9223372036854775807LL))));
}
