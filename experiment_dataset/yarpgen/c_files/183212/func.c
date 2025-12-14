/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183212
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
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((-1787222989307729909LL) / (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) + (((/* implicit */int) arr_3 [i_0 + 1])))))));
        arr_5 [11ULL] [i_0] = ((/* implicit */int) arr_3 [i_0]);
        arr_6 [i_0] = arr_1 [i_0];
        var_19 = ((/* implicit */unsigned long long int) (signed char)-96);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_9 [(signed char)1] [i_1] = 7927362010559329816ULL;
        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) 4294967295U);
                        var_22 = ((/* implicit */short) ((((arr_11 [i_2 - 2] [i_3 - 1] [i_4 + 2]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_1)) + (179))) - (54)))));
                        var_23 = ((unsigned short) arr_12 [i_3]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */int) 3882728986U);
        arr_20 [(unsigned short)12] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) && (((/* implicit */_Bool) arr_11 [i_5] [i_5] [5])))))) ^ (var_4)));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 412238326U))) && ((!(((/* implicit */_Bool) 1267210434))))));
        var_25 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) -1267210435)))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((int) var_5));
    var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) | (max((((((/* implicit */_Bool) var_3)) ? (var_15) : (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (-2147483634))))))));
    var_28 = ((/* implicit */short) var_1);
    var_29 = ((/* implicit */int) var_1);
}
