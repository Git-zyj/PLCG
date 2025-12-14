/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165833
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (((max((1724660013U), (((/* implicit */unsigned int) var_5)))) << (((var_18) - (1430661422U)))))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((((/* implicit */long long int) var_14)) | (var_8))) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)31)), ((unsigned short)16)))))))), (var_13)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min(((+(((((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0])) ^ (((/* implicit */int) (unsigned short)37711)))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) arr_3 [i_0] [i_0])))))));
                var_23 = ((/* implicit */unsigned short) (+(var_17)));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? ((~(((/* implicit */int) (unsigned short)52014)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [(unsigned char)10]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_10);
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) ((var_14) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-32))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (var_18)))) : (2251799796908032LL)));
}
