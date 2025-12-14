/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153923
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
    var_16 = ((/* implicit */unsigned char) min((((unsigned int) var_4)), (((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) var_14)))))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-((~(((unsigned long long int) (signed char)-2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_3 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_12);
        arr_5 [i_0] = ((/* implicit */long long int) (signed char)2);
        var_19 |= ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) arr_2 [i_0])))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min(((signed char)-2), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)49510)))))));
        var_21 = ((/* implicit */_Bool) arr_7 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            var_22 += ((/* implicit */unsigned short) (signed char)2);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned long long int) (-9223372036854775807LL - 1LL))))));
        }
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min(((+(arr_9 [4ULL] [i_2]))), (min((arr_9 [(unsigned short)12] [i_2]), (((/* implicit */long long int) (unsigned char)86)))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 4; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_17 [i_2] [i_5 - 2] [i_4 - 1] [i_2] = ((/* implicit */short) arr_15 [i_2] [i_2] [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_6 [i_2]))));
                        var_26 *= (!(((/* implicit */_Bool) var_13)));
                        var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)1)) >> (((/* implicit */int) (signed char)13))))), (2545863064U)));
                    }
                    arr_22 [i_4] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_23 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
    }
    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_12 [i_7] [i_7] [i_7])))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) ((_Bool) 8321223544746844529ULL));
    }
    var_29 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (_Bool)1)))), (max(((~(((/* implicit */int) (signed char)20)))), (((/* implicit */int) min(((signed char)-70), ((signed char)2))))))));
}
