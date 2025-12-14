/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177875
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
    var_20 = ((/* implicit */unsigned char) var_9);
    var_21 = ((/* implicit */unsigned int) ((int) var_7));
    var_22 -= ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) >= ((((_Bool)0) ? (3009754031364308248LL) : (3009754031364308254LL)))))));
    var_23 = ((/* implicit */int) ((signed char) var_0));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_24 = ((/* implicit */_Bool) 17683256617651702184ULL);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)25)), ((unsigned short)61534))))));
                        arr_9 [(unsigned short)2] [(unsigned short)2] [i_1] [4ULL] = ((/* implicit */int) arr_4 [i_2]);
                        var_26 = ((/* implicit */signed char) (~(((int) arr_1 [i_0]))));
                    }
                } 
            } 
        } 
    }
}
