/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103383
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((signed char) (short)-32760));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])));
                        var_15 = ((/* implicit */long long int) min((max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) (unsigned short)7128)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (unsigned short)7128)))))), (((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_2])))) > ((+(((/* implicit */int) (signed char)43)))))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_7) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58407)))))))) ? (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)5733)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1073479680))))))) : (var_6)));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58408))) : (min((-1142794939928241641LL), (((/* implicit */long long int) (unsigned short)7116)))))))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)7124)) : (-1073479680))))))))))));
}
