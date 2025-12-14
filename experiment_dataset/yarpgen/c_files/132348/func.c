/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132348
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
    var_18 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) var_2))))))));
    var_19 = ((/* implicit */short) (~((~((~(((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+((-(var_9))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_17)))))));
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_14 [(signed char)7] [i_0] [(signed char)7] [(short)10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)187))));
                    }
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned short) (~((+(946395988636804492ULL)))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(17988396050937053748ULL)))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_23 [i_4] = ((/* implicit */long long int) (-((~(var_1)))));
                    arr_24 [i_0] [i_0] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)122))));
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_1))))));
                    arr_25 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */long long int) (~((-(var_5)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        arr_29 [i_6] = (~((+(((/* implicit */int) var_16)))));
        var_24 = ((/* implicit */int) (~((~(var_7)))));
        arr_30 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(2866665611994999223ULL))))));
        arr_31 [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -5764118355872755820LL)))))));
    }
}
