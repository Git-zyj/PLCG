/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161897
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                    arr_7 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0] [i_0])), (var_13)))))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)125)))), ((-(((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((+(var_6))))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((arr_11 [i_3] [i_3]), (((/* implicit */int) var_13)))), ((-(((/* implicit */int) (signed char)-126)))))))));
        arr_13 [i_3] = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_5))))))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))));
        arr_17 [i_4] = ((/* implicit */_Bool) max((max(((-(((/* implicit */int) arr_3 [(unsigned short)7] [i_4] [i_4])))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)94)), ((unsigned short)0)))))), ((+((+(((/* implicit */int) (short)26214))))))));
    }
}
