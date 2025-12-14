/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13878
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (0LL) : (-1LL)))) > (min((18446744073709551613ULL), (225623961552598974ULL)))))) >> (((max((min((((/* implicit */int) var_11)), (-1943691600))), (((/* implicit */int) var_11)))) - (175)))));
                    arr_10 [i_2] = (unsigned char)53;
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(8145633123385744730LL)))) ? (((((/* implicit */_Bool) min((var_4), (var_4)))) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)53), (((/* implicit */unsigned char) (_Bool)0)))))))) : (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)34220), (((/* implicit */unsigned short) (_Bool)0))))), (min((67108352), (((/* implicit */int) (unsigned char)203)))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-8)))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20543)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (min((((/* implicit */unsigned long long int) var_8)), (var_16))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)60)) * (((/* implicit */int) (unsigned short)34220)))))))));
}
