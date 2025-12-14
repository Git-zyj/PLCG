/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18456
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2]);
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) arr_5 [(unsigned char)1] [i_1 + 3] [(signed char)2]))));
                        var_12 = ((/* implicit */signed char) (unsigned char)75);
                    }
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-15977))) == (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) | (540331575U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (max((((((/* implicit */_Bool) (short)-32742)) ? (11925742454175442740ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27844))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))));
                    arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)234)), (-13)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_8);
}
