/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109261
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((((short) (signed char)-16)), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_15 = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)7]);
        var_16 = ((/* implicit */signed char) var_13);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_0 [i_1])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) ((unsigned char) 1752770934))) ? (((/* implicit */unsigned long long int) -1752770917)) : (((((/* implicit */_Bool) (unsigned short)53427)) ? (((/* implicit */unsigned long long int) 313718348)) : (var_0)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)241)), (var_12))))))));
        var_18 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) max((var_11), (var_12)))), (((((/* implicit */_Bool) -1752770917)) ? (5565511342978867357LL) : (((/* implicit */long long int) arr_0 [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6672660652606203209LL)) ? (((/* implicit */int) (unsigned short)248)) : (((/* implicit */int) (signed char)6)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_19 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_6 [i_2])))));
        arr_7 [i_2] = ((/* implicit */_Bool) ((long long int) 8474998253485692026ULL));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_2]) : (arr_5 [i_2])));
        var_20 = 17293466281345637419ULL;
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_11 [i_3] &= ((/* implicit */long long int) max((8474998253485692038ULL), (((/* implicit */unsigned long long int) (!(arr_6 [i_3]))))));
        arr_12 [i_3] [(short)3] = arr_9 [i_3] [i_3];
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_9 [i_3] [(signed char)3])))) : (((/* implicit */int) arr_6 [i_3]))));
    }
    var_22 = ((/* implicit */long long int) ((signed char) var_0));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1752770917), (((/* implicit */int) var_2))))) ? (-971174371547466716LL) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) : (max((((/* implicit */unsigned long long int) var_12)), (((var_0) ^ (9971745820223859590ULL)))))));
}
