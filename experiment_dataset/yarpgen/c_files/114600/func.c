/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114600
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 137438953471ULL)) ? (18446743936270598138ULL) : (((/* implicit */unsigned long long int) min((3146127175450192674LL), (((/* implicit */long long int) (short)-19736))))))) <= (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_6)), (3109135051349506811LL))) % (((/* implicit */long long int) ((unsigned int) -3146127175450192667LL))))))));
    var_18 = ((/* implicit */unsigned char) ((long long int) 262815196223424203LL));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3109135051349506802LL)) ? (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [10]))) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_7 [(signed char)0] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_0 [i_1] [i_0 - 2]))));
            arr_8 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        }
        for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            arr_13 [i_0] = ((/* implicit */int) (signed char)1);
            arr_14 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_10 [4ULL])) ? (-3146127175450192674LL) : (-8425402661360045022LL)))));
        }
        var_21 = ((long long int) var_9);
        arr_15 [1] [(signed char)0] = ((/* implicit */signed char) var_2);
    }
    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        arr_18 [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((short)-26905), (((/* implicit */short) arr_16 [i_3] [i_3]))))), (min((7328081310212060359LL), (((/* implicit */long long int) arr_16 [i_3 - 1] [i_3 - 1]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_17 [i_3])))) & (((/* implicit */int) arr_16 [i_3] [i_3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3 - 2]))) + ((+(18446743936270598144ULL)))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_16 [10] [i_3]))));
        var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3146127175450192674LL)) ? (-2170330956833551684LL) : (-8425402661360045022LL)))) ? (min((5135312471207796442ULL), (((/* implicit */unsigned long long int) (unsigned char)226)))) : (((/* implicit */unsigned long long int) -775524073)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)101)), (((unsigned char) var_2))))))));
        arr_19 [i_3] = ((/* implicit */long long int) var_4);
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_24 = ((/* implicit */signed char) 3182765758280667734LL);
        var_25 = ((/* implicit */int) var_2);
        arr_22 [7LL] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3182765758280667742LL))))), (916376027U)))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((long long int) -5123817016883478483LL)))) << (((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)30)))) - (49)))));
}
