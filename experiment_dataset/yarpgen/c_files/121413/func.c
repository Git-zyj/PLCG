/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121413
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
    var_10 = ((/* implicit */long long int) var_5);
    var_11 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)88)) / (((/* implicit */int) (unsigned char)117))))) ? ((~(var_7))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) max(((unsigned short)671), (((/* implicit */unsigned short) (unsigned char)156))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (unsigned char)255))))) || (((/* implicit */_Bool) arr_6 [i_1 - 1])))))));
        arr_8 [i_1] [i_1 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (1853576109) : (((/* implicit */int) (unsigned char)101)))))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_5 [i_1 - 3]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [8ULL])) >> (((-9106119364342639394LL) + (9106119364342639423LL)))))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)101);
        arr_12 [(signed char)8] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)0));
        arr_13 [i_2] [i_2] = max((((/* implicit */unsigned short) (short)11172)), ((unsigned short)22386));
    }
    var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) (unsigned char)1);
                    arr_21 [i_3] [i_5] [(unsigned char)13] [i_3] = ((/* implicit */unsigned char) arr_14 [i_3] [i_4]);
                }
            } 
        } 
    } 
}
