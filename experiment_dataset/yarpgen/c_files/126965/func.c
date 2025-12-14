/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126965
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned short)53762);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_0)) % (-373540541))))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(2147483647)))) >= ((-(-4778581339611930864LL)))))) : (((((/* implicit */_Bool) var_5)) ? (-8388608) : (((/* implicit */int) var_6))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) -8388608);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) var_4))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (signed char)26);
        arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_7)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)192))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_16 = ((/* implicit */short) var_1);
            var_17 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)167))));
            arr_16 [i_2] [i_3] = ((/* implicit */int) var_1);
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) (signed char)26))))) - ((-(16650454480186163245ULL))))) % (16650454480186163245ULL)));
            arr_20 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_13 [i_4])))))) < (min((((/* implicit */unsigned long long int) (signed char)127)), (0ULL)))));
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */long long int) 0ULL);
        }
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (7051616184969784368ULL)))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8787503087616ULL)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) 1515201092)) : (0ULL)))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */int) (signed char)127)) >> (((var_11) - (1828318727))))))))));
    }
}
