/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131759
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3430873474U))) * (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_12 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) == (((/* implicit */int) arr_1 [18U]))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) >= (((/* implicit */int) arr_1 [i_0])))))))) <= (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38762))) + (390542191U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)91)) - (((/* implicit */int) arr_1 [i_0])))))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-15252)) ^ (((/* implicit */int) (signed char)-127)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (4219215777U))) - (4219215747U)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)15251))) * (679862641U))))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)-28704)))) + (((/* implicit */int) var_10))))) * (((arr_0 [i_0 - 1] [i_0 - 2]) / (arr_0 [i_0 + 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */int) (short)9709)) >= (((/* implicit */int) arr_1 [13]))));
        arr_4 [i_1] = ((/* implicit */unsigned short) ((599774144U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
        var_16 -= ((/* implicit */unsigned char) ((arr_0 [i_1] [i_1]) ^ (((/* implicit */unsigned int) -1750628024))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_3 [8LL])) & (((/* implicit */int) var_1))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_1);
}
