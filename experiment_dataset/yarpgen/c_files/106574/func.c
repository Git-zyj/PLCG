/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106574
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
    var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) 1796524341)) * (10109079124215596131ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 535064065U)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned short)29422))))))));
    var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((min((((/* implicit */int) var_7)), (var_1))) + (2147483647))) >> (((((/* implicit */int) min(((unsigned char)148), (var_15)))) - (136))))));
    var_21 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (short)13)) ? (1136472618) : (-964989064))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_12 [(unsigned char)13] [i_1] [i_0] [i_1 - 2] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0]);
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)255)))))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (1016U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)26393)))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 0U))));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_25 ^= ((((/* implicit */_Bool) arr_8 [5U])) ? (arr_10 [(unsigned short)10] [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)71)))))));
                    arr_15 [i_0] = min(((-(((-2108488396) - (((/* implicit */int) (unsigned short)13564)))))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [(unsigned short)14])) <= (max((arr_7 [i_0] [i_1] [i_3]), (((/* implicit */int) (unsigned short)13564))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_26 ^= ((/* implicit */long long int) ((unsigned short) (+(arr_17 [i_0] [i_1 - 2] [i_4]))));
                    var_27 = ((/* implicit */unsigned char) arr_0 [i_1 - 2] [i_0]);
                }
                var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294966279U)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) ((1104905476) == (((/* implicit */int) ((unsigned short) (short)-5))))))));
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min((1016U), (((/* implicit */unsigned int) (short)6046)))))));
}
