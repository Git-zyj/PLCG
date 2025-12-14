/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152088
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((784274603) ^ (666064437)))))));
        var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) max(((unsigned short)23), (max(((unsigned short)14), (((/* implicit */unsigned short) (short)32761))))))), ((-(((/* implicit */int) ((unsigned short) (short)32764)))))));
    }
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) | (((((/* implicit */_Bool) (unsigned short)65528)) ? (7793910853241257894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))))))));
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((unsigned int) (short)-32734))) <= (min((17804976467949208017ULL), (((/* implicit */unsigned long long int) (signed char)119)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) 9106107121708334206LL))) ^ (((/* implicit */int) var_1))))) : (((long long int) (~(11U))))));
}
