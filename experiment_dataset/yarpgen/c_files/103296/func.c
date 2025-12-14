/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103296
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
    var_12 = ((/* implicit */signed char) (unsigned short)20130);
    var_13 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32215)) ? (6341184596422901453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32216)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_0 [i_0])))) : (((/* implicit */int) arr_1 [(signed char)4]))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (616366985U)))) * (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_0 [i_0 - 2])))))));
                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 3968423835U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)32212)) * (((/* implicit */int) (short)-32213))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1745828657U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50800))) : (1586564299U)))) : (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203)))));
            }
        } 
    } 
}
